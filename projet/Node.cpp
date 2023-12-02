#include<Node.hpp>

Node::Node(Vec2d position) : position_(position) {};

void Node::move(Vec2d dx){
    set_position(get_position() + dx);
};

void Node::update(double t){
    move(speed_ * t);
};



