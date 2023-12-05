#include<Vec2d.hpp>


class Node{
    public:
    Node(Vec2d position);

    Vec2d get_position();

    void move(Vec2d dx);

    void update(double t);

    private:
    Vec2d position_;

    Vec2d speed_;

    void set_position(Vec2d new_position);

    Vec2d find_force();
    
};