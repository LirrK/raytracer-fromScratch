#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>
#include "../framework/ray.hpp"
#include "../framework/color.hpp"


TEST_CASE("Color rgify function", "[rgbify]")
{
  Color c1{150.0f, 150.0f, 150.0f};
  Color c2{100.0f, 100.0f, 100.0f};
  Color c3{255.0f, 255.0f, 255.0f};
  Color c4{0.0f, 0.0f, 0.0f};
  Color c5{1.0f, 1.0f, 1.0f};

  Color c6;
  c6 = c1 + c3;
  Color c7;
  c7 = c1 - c3;
  c3 += c1;
  c1 -= c2;

  REQUIRE(c6.r == 255.0f);
  REQUIRE(c6.g == 255.0f);
  REQUIRE(c6.b == 255.0f);

  REQUIRE(c7.r == 0.0f);
  REQUIRE(c7.g == 0.0f);
  REQUIRE(c7.b == 0.0f);

  REQUIRE(c3.r == 255.0f);
  REQUIRE(c3.g == 255.0f);
  REQUIRE(c3.b == 255.0f);

  REQUIRE(c1.r == 50.0f);
  REQUIRE(c1.g == 50.0f);
  REQUIRE(c1.b == 50.0f);


}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
