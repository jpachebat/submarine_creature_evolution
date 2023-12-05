#include<Node.hpp>

Node::Node(Vec2d position) : position_(position) {};

void Node::move(Vec2d dx){
    set_position(get_position() + dx);
};

void Node::update(double t){
    move(speed_ * t);
};

Vec2d Node::find_force(){
    Vec2d gravitation(0, 9.81);
    Vec2d force;
    force = gravitation;
    return force;
}
