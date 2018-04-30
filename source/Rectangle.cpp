#include "Rectangle.hpp"

Rectangle::Rectangle (Vec2 const& min, Vec2 const& max):
   min_{min},
   max_{max} {}


Vec2 Rectangle::getMin()
{
    return min_;
}

Vec2 Rectangle::getMax()
{
    return max_;
}
   

