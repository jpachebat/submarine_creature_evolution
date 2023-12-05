#include<vector>

class Vec2d{
    public:
    Vec2d();

    Vec2d(double x, double y);

    Vec2d(const Vec2d& other) = default;

    Vec2d operator+(const Vec2d& x);

    Vec2d operator*(const double& a);

    Vec2d operator-(Vec2d& other);

    double get_norm();

    double distance(Vec2d& other);

    double get_x();

    double get_y();

    private:
    double x_,y_;

};