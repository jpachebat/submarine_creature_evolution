#include<vector>

class Vec2d{
    public:
    Vec2d();

    Vec2d(double x, double y);

    Vec2d(const Vec2d& other) = default;

    Vec2d operator+(const Vec2d& x) const;

    Vec2d operator*(const double& a) const;

    Vec2d operator-(const Vec2d& other) const;

    Vec2d operator/(const double& a) const;

    double get_norm() const;

    double distance(const Vec2d& other) const;

    Vec2d normalize_direction(const Vec2d& other) const;

    double get_x() const;

    double get_y() const;

    private:
    double x_,y_;

};