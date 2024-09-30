#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include "pixel.h"

std::vector<Pixel> pixel_list;

int main(int argc, char *argv[])
{
	if(argc !=2)
	{
		std::cerr << "Usage: " << argv[0] << "<input_file>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];

	read_pixel_data(filename, pixel_list);

	average_colors(pixel_list);

	flip_vertically(pixel_list);

	save_flipped_data("flipped data", pixel_list);

	return 0;
}
