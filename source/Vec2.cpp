#include "Vec2.hpp"
#include <cmath>
#include <iostream>
# ifndef VEC2_HPP
# define VEC2_HPP

// TODO Constructors
  Vec2::Vec2 ():
   x_{0.0f}, //soll man hier das f wirklich anwenden?
   y_{0.0f}
   {}

  Vec2::Vec2 (float x, float y):
    x_{x},
    y_{y} 
    {}

  Vec2& Vec2::operator+=(Vec2 const& v)
  {
     x_ += v.x_;
	 y_ += v.y_;

    return *this;
  }

  Vec2& Vec2::operator-=(Vec2 const& v)
  {
     x_ -= v.x_;
     y_ -= v.y_;

     return *this;
  }

Vec2& Vec2::operator*=(float s)
{
     x_ *= s;
     y_ *= s;

     return *this;
}

Vec2& Vec2::operator/=(float s)
{
    if(s==0){
        std::cout<<"Division by zero ist not possible!";
        return *this;
    } else {
     x_ /= s;
     y_ /= s;

     return *this;
    }
}

# endif // VEC2_HPP