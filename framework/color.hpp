// -----------------------------------------------------------------------------
// Copyright  : (C) 2014-2017 Andreas-C. Bernstein
// License    : MIT (see the file LICENSE)
// Maintainer : Andreas-C. Bernstein <andreas.bernstein@uni-weimar.de>
// Stability  : experimental
//
// Color
// -----------------------------------------------------------------------------

#ifndef BUW_COLOR_HPP
#define BUW_COLOR_HPP

#include <iostream>

class Color
{
public:
  friend std::ostream& operator<<(std::ostream& os, Color const& c)
  {
    os << "(" << c.r << "," << c.g << "," << c.b << ")\n";
    return os;
  }

  Color& operator+=(Color const& other)
  {
    r += other.r;
    g += other.g;
    b += other.b;
    //rgbify();
    return *this;
  }

  Color& operator-=(Color const& other)
  {
    r -= other.r;
    g -= other.g;
    b -= other.b;
    //rgbify();
    return *this;
  }

  friend Color operator+(Color const& a, Color const& b)
  {
    auto tmp(a);
    tmp += b;
    //tmp.rgbify();
    return tmp;
  }

  friend Color operator-(Color const& a, Color const& b)
  {
    auto tmp(a);
    tmp -= b;
    //tmp.rgbify();
    return tmp;
  }
  /*
  void rgbify()
  {
    if(int(r) < 0){ r = 0.0f; }
    if(int(g) < 0){ g = 0.0f; }
    if(int(b) < 0){ b = 0.0f; }

    if(int(r) > 255){ r = 255.0f; }
    if(int(g) > 255){ g = 255.0f; }
    if(int(b) > 255){ b = 255.0f; }
  }
  */

  void output_color(std::ostream& out, Color pixel_color);

  float r;
  float g;
  float b;
};

  void output_color(std::ostream& out, Color pixel_color)
  {
    out << static_cast<int>(255.99 * pixel_color.r) << ' '
        << static_cast<int>(255.99 * pixel_color.g) << ' '
        << static_cast<int>(255.99 * pixel_color.b) << '\n';
  }

#endif //#define BUW_COLOR_HPP
