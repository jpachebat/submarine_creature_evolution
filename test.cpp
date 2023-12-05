#include "projet/Node.hpp"
#include <iostream>

int main(){
    Node node0(Node(Vec2d(0,0)));

    Node node1(Node(Vec2d(1,0)));
    Node node2(Node(Vec2d(0,1)));

    double angle = node0.find_angle(node1, node2);

    std::cout<<angle;
    return 0;

}    