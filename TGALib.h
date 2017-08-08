#ifndef _TGALIB_H
#define _TGALIB_H

struct TGAHeader {
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

struct TGAPixel {
  unsigned char r, g, b, a;
};

class TGAImage {

 private:
  int width;
  int height;
  int bytes_per_pixel;

 public:
  TGAImage();
  TGAImage(int w, int h, int bpp);

};

#endif
