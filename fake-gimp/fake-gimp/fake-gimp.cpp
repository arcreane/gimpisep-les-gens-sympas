#include "header.h"

int main() {
    LGS lgsObject;
    lgsObject.getImageFromPath("HappyFish.jpg");


	lgsObject.addToImageArray("S1.jpg");
	lgsObject.addToImageArray("S2.jpg");
	lgsObject.addToImageArray("S3.jpg");
	lgsObject.addToImageArray("S4.jpg");
	lgsObject.addToImageArray("S5.jpg");

    //lgsObject.brightness(-75);
    // 
    //lgsObject.resize(); // Parametre a rentrer directement dans l'invite de commande
    //lgsObject.dilateErode(1,5,1); // dilation_elem (entre 0 et 2), dilation_size , dilatOrErod : 0 pour dilatation/ 1 pour erode
	lgsObject.Stitching();

    lgsObject.CannyThreshold(10, 100, 5); //owThreshold, max_lowThreshold, kernel_size (toujurs impair)
    lgsObject.showImage();
    return 0;
}