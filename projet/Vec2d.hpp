#include<vector>

class Vec2d{
    public:
    Vec2d(double x, double y);

    Vec2d operator+(const Vec2d& x);

    Vec2d operator*(const double& a);

    double get_x();

    double get_y();

    private:
    double x_,y_;

};