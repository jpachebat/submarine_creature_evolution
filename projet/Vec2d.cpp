#include<Vec2d.hpp>
#include <cmath>

Vec2d::Vec2d(double x, double y) : x_(x), y_(y){};

Vec2d Vec2d::operator+(const Vec2d& x){
    return Vec2d(get_x()+x_, get_y()+y_ );
};

double Vec2d::get_x(){
    return x_;
};

double Vec2d::get_y(){
    return y_;
};

Vec2d Vec2d::operator*(const double& a){
    return Vec2d(a*get_x(), a*get_y());
}

Vec2d Vec2d::operator-(Vec2d& other){
    return Vec2d(x_ - other.get_x(), y_ - other.get_y());
}

Vec2d::Vec2d() : Vec2d(0.0, 0.0) {}

double Vec2d::get_norm(){
    return sqrt(x_^2 + y_^2);
}

double Vec2d::distance(const Vec2d& other){
    return norm(*this - other);
}