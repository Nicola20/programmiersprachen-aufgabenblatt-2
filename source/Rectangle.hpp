# ifndef RECTANGLE_HPP
# define RECTANGLE_HPP

#include "Vec2.hpp"


class Rectangle
{

    public:
    Rectangle (Vec2 const& min, Vec2 const& max);

    Vec2 getMin() const;
    Vec2 getMax() const;
    float circumference() const;

    private:
    Vec2 min_;
    Vec2 max_;

    
    
};

# endif // RECTANGLE_HPP