#include <iostream>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <utility>
#include <cmath>
#include "../framework/color.hpp"

int main() {

  // Image

  const int image_width = 256;
  const int image_height = 256;
  Color color{0.5f, 0.5f, 0.5f};

  // Renderer

  std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

  for(int j = image_height-1; j >= 0; --j) {
    for(int i = 0; i < image_width; ++i) {
      //glm::vec3 col(float(i) / float(image_width), float(j) / float(image_height), 0.2);
      color.r = float(i) / float(image_width);
      color.g = float(j) / float(image_height);
      color.b = 0.2;

      /*
      int ir = int(255.99 * col[0]);
      int ig = int(255.99 * col[1]);
      int ib = int(255.99 * col[2]);
      */
      int ir = int(255.99 * color.r);
      int ig = int(255.99 * color.g);
      int ib = int(255.99 * color.b);

      std::cout << ir << ' ' << ig << ' ' << ib << '\n';
    }
  }
}