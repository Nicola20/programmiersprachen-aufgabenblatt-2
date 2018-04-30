#include "Circle.hpp"

Circle::Circle (float r, float d, Vec2 const& c, Color const& color):
   radius_{r},
   diameter_{d},
   center_{c},
   color_{color} 
   {}

Circle::Circle (float r, Vec2 const& c, Color const& color):
   radius_{r},
   center_{c},
   color_{color} 
   {}

float Circle::getRadius() const {
    return this -> radius_;
}

float Circle::getDiameter() const {
    return this -> diameter_;
}


Vec2 Circle::getCenter() const {
    return this -> center_;
}

Color Circle::getColor() const {
    return this -> color_;
}

float Circle::circumference() const {
     return 2*M_PI*radius_;

}


