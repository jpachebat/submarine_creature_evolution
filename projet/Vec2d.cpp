#include<Vec2d.hpp>

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
