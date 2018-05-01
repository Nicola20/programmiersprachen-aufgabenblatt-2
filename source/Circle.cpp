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

void Circle::draw(Window const& w) {
    Vec2 center (center_.x_,center_.y_);
    for(int i = 1; i <= 360; i++){
       w.draw_point(radius_*cos(i)+ center.x_, radius_*sin(i)+ center.y_,0.0f,0.0f,0.0f);
    }
}


