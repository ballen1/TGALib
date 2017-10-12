#include "TGALib.h"

#include <fstream>
#include <iostream>

tga_image::tga_image()
{

}

tga_image::tga_image(int w, int h, int bpp)
{

}

void
tga_image::load_tga_file(std::string file_path)
{
  std::ifstream tga_read;
  tga_read.open(file_path, std::ifstream::binary);

  if (tga_read.is_open())
  {
    
  }
  else
  {
    std::cerr << "Could not open file " << file_path << std::endl;
  }

  tga_read.close();
}

