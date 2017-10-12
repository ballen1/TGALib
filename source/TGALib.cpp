#include "TGALib.h"

#include <fstream>
#include <iostream>

tga_image::tga_image() : file_data(nullptr)
{

}

tga_image::tga_image(int w, int h, int bpp) : file_data(nullptr)
{
}

tga_image::~tga_image()
{
  if (file_data)
  {
    delete [] file_data;
  }
}

void
tga_image::load_tga_file(std::string file_path)
{
  if (file_data)
  {
    delete [] file_data;
    file_data_length = -1;
  }

  std::ifstream tga_read;
  tga_read.open(file_path, std::ifstream::binary);

  if (tga_read.is_open())
  {
    tga_read.seekg(0, tga_read.end);
    file_data_length = tga_read.tellg();
    file_data = new char[file_data_length];
    tga_read.seekg(0, tga_read.beg);
    tga_read.read(file_data, file_data_length);
  }
  else
  {
    std::cerr << "Could not open file " << file_path << std::endl;
  }

  tga_read.close();
}

void
tga_image::save_tga_file(std::string file_path)
{
  std::ofstream tga_write;
  tga_write.open(file_path, std::ofstream::binary);

  if (tga_write.is_open())
  {
    tga_write.write(file_data, file_data_length);
  }
  else
  {
    std::cerr << "Could not open file " << file_path << std::endl;
  }

  tga_write.close();
}

