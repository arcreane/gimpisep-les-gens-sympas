#include "header.h"

int main() {
    LGS lgsObject;
    lgsObject.getImageFromPath("HappyFish.jpg");
    lgsObject.brightness(-75);
    lgsObject.showImage();
    return 0;
}