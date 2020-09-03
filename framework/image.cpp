#include "image.hpp"

Image::Image(){};

Image::Image(int image_width, int image_height)
      : image_width_(image_width),
        image_height_(image_height), 
        aspect_ratio_(image_width / image_height)
      {};
  
Image::Image(int image_width, float aspect_ratio)
      : image_width_(image_width), 
        aspect_ratio_(aspect_ratio), 
        image_height_(int(image_width / aspect_ratio))
      {};


int Image::get_image_width() { return image_width_; }
int Image::get_image_height() { return image_height_; }