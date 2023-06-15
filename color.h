#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include <iostream>
#include <vector>

// Declaration of the write_color function
void write_color(std::ostream& out, color pixel_color, int samples_per_pixel);
//void write_color(unsigned char* pixels, int& index, color pixel_color, int samples_per_pixel);


#endif