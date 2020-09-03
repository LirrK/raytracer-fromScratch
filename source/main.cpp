#include <iostream>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <utility>
#include <cmath>
#include "../framework/color.hpp"
#include "../framework/ray.hpp"

int main() {

  // Image

  const int image_width = 256;
  const int image_height = 256;
  Color color1{0.5f, 0.5f, 0.5f};

  // Renderer

  // P3 -> ASCII
  std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

  // Iterating over every pixel
  for(int j = image_height-1; j >= 0; --j) {
    std::cerr << "\rReihen verbleibend: " << j << ' ' << std::flush;

    for(int i = 0; i < image_width; ++i) {
      
      // calculating a color value for each pixel (first step)
      // ! scheme was choosen for a helloWorld example
      color1.r = float(i) / float(image_width);
      color1.g = float(j) / float(image_height);
      color1.b = 0.2;

      // casting color values to int (second step)
      // because .ppm needs int values
      output_color(std::cout, color1);
    }
  }
  std::cerr << "\nDone\n";
}