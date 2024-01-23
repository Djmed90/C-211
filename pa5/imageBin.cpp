#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include "bitmap_image.hpp"

// this will throw an error if you don't have the bitmap library installed
// so be sure to do that before uncommenting this #include line
// #include "bitmap_image.hpp"

void binarizeImage(bitmap_image &image, const std::string &outputFileName) {
    // Convert the image to grayscale
    image.convert_to_grayscale();

    // Get image dimensions
    const unsigned int width = image.width();
    const unsigned int height = image.height();

    // Calculate mean pixel value
    double meanPixelValue = 0.0;
    for (unsigned int y = 0; y < height; ++y) {
        for (unsigned int x = 0; x < width; ++x) {
            meanPixelValue += image.get_pixel(x, y).red;
        }
    }
    meanPixelValue /= (width * height);

    // Binarize the image based on the mean pixel value
    for (unsigned int y = 0; y < height; ++y) {
        for (unsigned int x = 0; x < width; ++x) {
            rgb_t pixel = image.get_pixel(x, y);
            if (pixel.red < meanPixelValue) {
                // Set pixel to Black
                image.set_pixel(x, y, 0, 0, 0);
            } else {
                // Set pixel to White
                image.set_pixel(x, y, 255, 255, 255);
            }
        }
    }

    // Save the modified image
    image.save_image(outputFileName);
}

int main(int argc, char *argv[]) {
     // get a string containing the image name
    // this is necessary because the bitmap_image
    // class expects a string as an argument
    // TODO:
    // your implementation of problem #4 should be done in this
    // file. Feel free to create functions etc. if you feel that
    // it will help you.
    
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <input_image_path> <output_image_path>" << std::endl;
        return 1;
    }

    std::string file_name(argv[1]);
    bitmap_image image(file_name);

    if (!image) {
        std::cerr << "Error: Unable to open image file." << std::endl;
        return 1;
    }

    std::string outputFileName(argv[2]);

    // Call the binarization function
    binarizeImage(image, outputFileName);

    return 0;
}
