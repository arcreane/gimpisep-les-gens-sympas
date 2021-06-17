#include "header.h"

int main() {
    LGS lgsObject;
<<<<<<< HEAD
    /*lgsObject.getImageFromPath("HappyFish.jpg");
    lgsObject.brightness(-75);
    lgsObject.showImage(); */

    lgsObject.getImageFromPath("face_detection_test.jpg");
    lgsObject.faceDetection(1);
=======
    lgsObject.getImageFromPath("HappyFish.jpg");
    //lgsObject.brightness(-75);
    // 
    //lgsObject.resize(); // Parametre a rentrer directement dans l'invite de commande
    //lgsObject.dilateErode(1,5,1); // dilation_elem (entre 0 et 2), dilation_size , dilatOrErod : 0 pour dilatation/ 1 pour erode
    lgsObject.CannyThreshold(10, 100, 5); //owThreshold, max_lowThreshold, kernel_size (toujurs impair)
>>>>>>> a825d556d5624ef499305c11aabe64192f6686f0
    lgsObject.showImage();
    return 0;
}