#include "color.hpp"
# ifndef COLOR_HPP
# define COLOR_HPP

   Color::Color (float r, float g, float b):
     r_{r},
     g_{g},
     b_{b}
     { }

   Color::Color (float f): 
     r_{f},
     g_{f},
     b_{f}
     { }

# endif // COLOR_HPP