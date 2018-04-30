#include "Circle.hpp"

Circle::Circle (float r, float d, Vec2 const& c):
   radius_{r},
   diameter_{d},
   center_{c} {}

Circle::Circle (float r, Vec2 const& c):
   radius_{r},
   center_{c} {}

float Circle::getRadius()
{
    return radius_;
}

float Circle::getDiameter()
{
    return diameter_;
}


Vec2 Circle::getCenter()
{
    return center_;
}


