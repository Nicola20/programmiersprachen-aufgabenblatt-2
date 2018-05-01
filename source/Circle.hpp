# ifndef CIRCLE_HPP
# define CIRCLE_HPP

#include "Vec2.hpp"
#include "color.hpp"
#include "window.hpp"


class Circle
{

    public:
    Circle (float r, float d, Vec2 const& c, Color const& color);
    Circle (float r, Vec2 const& c, Color const& color);

    float getRadius() const;
    float getDiameter() const;
    Vec2 getCenter() const;
    Color getColor() const;
    float circumference() const;
    void draw (Window const& w);

    private:
    float radius_;
    Vec2 center_;
    float diameter_;
    Color color_;
    
    
};
# endif // CIRCLE_HPP