#include "header.h"

void LGS::brightness(int val)
{
    if (val > 100) {
        val = 100;
    }
    else if (val < -100) {
        val = -100;
    }

    image.convertTo(image, -1, 1, val);
}