# ifndef RECTANGLE_HPP
# define RECTANGLE_HPP

#include "Vec2.hpp"


class Rectangle
{

    public:
    Rectangle (Vec2 const& min, Vec2 const& max);

    Vec2 getMin();
    Vec2 getMax();

    private:
    Vec2 min_;
    Vec2 max_;

    
    
};

# endif // RECTANGLE_HPP