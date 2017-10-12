#ifndef _TGALIB_H
#define _TGALIB_H

#include <string>

struct tga_header {
  char idlength;
  char colourmaptype;
  char datatypecode;
  short int colormaporigin;
  short int colormaplength;
  char colourmapdepth;
  short int x_origin;
  short int y_origin;
  short width;
  short height;
  char bitsperpixel;
  char imagedescriptor;
};

struct tga_pixel {
  unsigned char r, g, b, a;
};

class tga_image {

 private:
  int width;
  int height;
  int bytes_per_pixel;

 public:
  tga_image();
  tga_image(int w, int h, int bpp);

  void load_tga_file(std::string file_path);

};

#endif
