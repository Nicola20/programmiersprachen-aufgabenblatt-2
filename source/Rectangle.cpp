#include "Rectangle.hpp"

Rectangle::Rectangle (Vec2 const& min, Vec2 const& max):
   min_{min},
   max_{max} {}


Vec2 Rectangle::getMin() const {
    return this -> min_;
}

Vec2 Rectangle::getMax() const{
    return this -> max_;
}


float Rectangle::circumference() const{
    
    float a = max_.x_ - min_.x_;                //Länge
    float b = max_.y_ - min_.y_;                //Breite
    return 2*a+2*b;
}
   

