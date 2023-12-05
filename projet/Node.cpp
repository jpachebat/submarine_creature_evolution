#include<Node.hpp>

Node::Node(Vec2d position) : position_(position) {};

Vec2d Node::get_position() const{
    return position_;
}

void Node::move(const Vec2d& dx){
    set_position(get_position() + dx);
};

void Node::update(const double& t){
    move(speed_ * t);
};

Vec2d Node::find_force(){
    Vec2d gravitation(0, 9.81);
    Vec2d force;
    force = gravitation;
    for (auto& link : links_){
        for (auto& link2 : links_){

        }
        force = force + link_force(link);
    }
    return force;
}

Vec2d Node::link_force(Node& other){
    return position_.normalize_direction(other.get_position());
}

double Node::find_angle(const Node& other1, const Node& other2){
    Vec2d transition1(this -> normalize_direction(other1));
    Vec2d transition2(this -> normalize_direction(other2));
    return atan2(transition1.get_x()*transition2.get_y() + transition1.get_y()*transition2.get_x(), 2);

}

Vec2d Node::normalize_direction(const Node& other){
    return position_.normalize_direction(other.get_position());
}