#ifndef RAY_HPP
#define RAY_HPP

#include <glm/vec3.hpp>

struct Ray
{
  // Constructors
  Ray(){};
  Ray(glm::vec3 originVec, glm::vec3 directionVec)
    : origin(originVec),
      direction(glm::normalize(directionVec)){};

  // Functions
  glm::vec3 point_at_parameter(float t){
    return (origin + t * direction);
  }

  // Variables
  glm::vec3 origin = {0.0f, 0.0f, 0.0f};
  glm::vec3 direction = {0.0f, 0.0f, -1.0f};
};


#endif //RAY_HPP