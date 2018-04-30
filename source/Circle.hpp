# ifndef CIRCLE_HPP
# define CIRCLE_HPP

#include "Vec2.hpp"


class Circle
{

    public:
    Circle (float r, float d, Vec2 const& c);
    Circle (float r, Vec2 const& c);

    float getRadius();
    float getDiameter();
    Vec2 getCenter();

    private:
    float radius_;
    Vec2 center_;
    float diameter_;
    
    
};
# endif // CIRCLE_HPP