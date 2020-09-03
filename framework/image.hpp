#ifndef IMAGE_HPP
#define IMAGE_HPP

class Image {

public:

  // Constructors
  Image();
  Image(int image_width, int image_height);
  Image(int image_width, float aspect_ratio);

  int get_image_width();
  int get_image_height();

private:

  // Variables
  int image_width_;
  int image_height_;
  float aspect_ratio_;

};

#endif //IMAGE_HPP