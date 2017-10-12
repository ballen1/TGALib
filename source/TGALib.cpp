#include "TGALib.h"

#include <iostream>

TGAImage::TGAImage() {
  std::cout << "In default constructor." << std::endl;
}

TGAImage::TGAImage(int w, int h, int bpp) {
  std::cout << "In the other constructor." << std::endl;
}
