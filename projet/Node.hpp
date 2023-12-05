#include"Vec2d.hpp"
#include <vector>

class Node{
    public:
    Node(Vec2d position);

    Vec2d get_position() const;

    void move(const Vec2d& dx);

    void update(const double& t);

    double find_angle(const Node& other1,const Node& other2);

    private:
    Vec2d position_;

    Vec2d speed_;

    std::vector<Node> links_;

    void set_position(Vec2d new_position);

    Vec2d find_force();

    Vec2d link_force(Node& other);

    //double find_angle(const Node& other1,const Node& other2);

    Vec2d normalize_direction(const Node& other);
};