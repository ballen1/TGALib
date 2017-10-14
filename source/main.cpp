#include "TGALib.h"

int main(int argc, char** argv)
{
    tga_image someImage(5, 5, 5);
    someImage.load_tga_file("C:\\Users\\bcoder\\Documents\\Cosmo_Kramer.tga");
    someImage.save_tga_file("C:\\Users\\bcoder\\Documents\\Copy_Kramer.tga");
}
