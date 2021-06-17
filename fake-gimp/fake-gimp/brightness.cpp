#include "header.h"

void LGS::brightness(int val)
{
    // Check for valid brightness value
    if (val > 100) {
        val = 100;
    }
    else if (val < -100) {
        val = -100;
    }

    // Modify the brightness of the image
    image.convertTo(image, -1, 1, val);
}