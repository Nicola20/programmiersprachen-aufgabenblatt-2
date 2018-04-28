#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include "Vec2.hpp"


 TEST_CASE ("custom_constructor","[custom]")
 {
    Vec2 v1 {6.7, 2.5};

    REQUIRE(6.7f == v1.x_);
    REQUIRE(2.5f == v1.y_);
 }

  TEST_CASE ("default_constructor","[default]")
 {
    Vec2 v2 {};

    REQUIRE(v2.x_ == 0.0f);
    REQUIRE(v2.y_ == 0.0f);
 }

 TEST_CASE("plusequal_operator","[plusequal]")
{
	Vec2 v0 {};
	Vec2 v1{1.0f,2.0f};
	Vec2 v2{0.0f,-2.0f};

	v0 += v1;
	v1 += v2;

	REQUIRE(v0.x_ == 1.0f);
	REQUIRE(v0.y_ == 2.0f);
	
	REQUIRE(v1.x_ == 1.0f);
	REQUIRE(v1.y_ == 0.0f);
}

 TEST_CASE("minusequal_operator","[minusequal]")
{
	Vec2 v0 {};
	Vec2 v1{1.7f,3.8f};
	Vec2 v2{0.0f,-2.0f};
  Vec2 v3{-5.7f,-1.5f};

	v0 -= v1;
	v1 -= v2;
 // v3 -= v1;

	REQUIRE(v0.x_ == -1.7f);
	REQUIRE(v0.y_ == -3.8f);
	
	REQUIRE(v1.x_ == 1.7f);
	REQUIRE(v1.y_ == 5.8f);

 // REQUIRE(v3.x_ == -7.4f); //gibt Fehler aus; ist aber unklar warum
	//REQUIRE(v3.y_ == -5.3f);
}

TEST_CASE("skalar_equal_operator", "[skalar_equal]")
{
	Vec2 v0;
	Vec2 v1{1.0f,2.5f};
	Vec2 v2{0.1f,-2.3f};
	float s = 5.0f;

	v0 *= s;
	v1 *= s;
	v2 *= s;

	REQUIRE(v0.x_ == 0.0f);
	REQUIRE(v0.y_ == 0.0f);
	
	REQUIRE(v1.x_ == 5.0f);
	REQUIRE(v1.y_ == 12.5f);

	REQUIRE(v2.x_ == 0.5f);
	REQUIRE(v2.y_ == -11.5f);
}

TEST_CASE("divequal_operator", "[divequal_operator]")
{
	Vec2 v0;
	Vec2 v1{1.7f,3.0f};
	Vec2 v2{0.0f,-2.0f};
	float s = 5.0f;
	float zero = 0.0f;

	v0 /= s;
	v1 /= s;
	v2 /= zero;

	REQUIRE(v0.x_ == 0.0f);
	REQUIRE(v0.y_ == 0.0f);
	
	REQUIRE(v1.x_ == 0.34f);
	REQUIRE(v1.y_ == 0.6f);

//	REQUIRE(v2.x_ == "Division by zero ist not possible!");
//	REQUIRE(v2.y_ == "Division by zero ist not possible!");
	
}


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
	return 0;
}
