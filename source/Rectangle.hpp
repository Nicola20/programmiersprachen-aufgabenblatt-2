# ifndef RECTANGLE_HPP
# define RECTANGLE_HPP

#include "Vec2.hpp"
#include "color.hpp"


class Rectangle
{

    public:
    Rectangle (Vec2 const& min, Vec2 const& max, Color const& color);

    Vec2 getMin() const;
    Vec2 getMax() const;
    float circumference() const;
    Color getColor() const;

    private:
    Vec2 min_;
    Vec2 max_;
    Color color_;

    
    
};

# endif // RECTANGLE_HPP