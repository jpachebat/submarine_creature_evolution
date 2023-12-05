#include<Vec2d.hpp>
#include <cmath>

Vec2d::Vec2d(double x, double y) : x_(x), y_(y){};

Vec2d Vec2d::operator+(const Vec2d& x) const{
    return Vec2d(x.get_x()+x_, x.get_y()+y_ );
};

double Vec2d::get_x() const{
    return x_;
};

double Vec2d::get_y() const{
    return y_;
};

Vec2d Vec2d::operator*(const double& a) const{
    return Vec2d(a*get_x(), a*get_y());
}

Vec2d Vec2d::operator-(const Vec2d& other) const{
    return Vec2d(x_ - other.get_x(), y_ - other.get_y());
}

Vec2d::Vec2d() : Vec2d(0.0, 0.0) {}

double Vec2d::get_norm() const{
    return sqrt(x_*x_ + y_*y_);
}

double Vec2d::distance(const Vec2d& other) const{
    return (*this - other).get_norm();
}

Vec2d Vec2d::operator/(const double& a) const{
    return Vec2d((1/a)*x_, (1/a)*y_);
}

Vec2d Vec2d::normalize_direction(const Vec2d& other) const{
    Vec2d transition(Vec2d(other - *this));
    double norm(transition.get_norm());
    if (norm!=0.0){
        return transition/norm;
    }
    else{
        return transition;
    }
}
