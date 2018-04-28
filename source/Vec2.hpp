// Vec2 class definition
struct Vec2
{
float x_;
float y_;

Vec2 ();
Vec2 (float x, float y);
Vec2& operator +=(Vec2 const& v);
Vec2& operator -=(Vec2 const& v);
Vec2& operator *=(float s);
Vec2& operator /=(float s);

};
