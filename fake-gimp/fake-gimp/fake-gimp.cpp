#include "header.h"

int main() {
    LGS lgsObject;
    /*lgsObject.getImageFromPath("HappyFish.jpg");
    lgsObject.brightness(-75);
    lgsObject.showImage(); */

    lgsObject.getImageFromPath("face_detection_test.jpg");
    lgsObject.faceDetection(1);
    lgsObject.showImage();
    return 0;
}