#include <iostream>
#include "Header.h"

int main() {
    //std::cout << "Hello, World!" << std::endl;

    LGS lgsObject;

    std::string* path;
    std::string thisPath;
    std::cout << "Please, copy the exact path of the image file that you want to modify: " << std::endl;
    std::cin >> thisPath;
    path = &thisPath;

    lgsObject.getImageFromPath(*path);

    //lgsObject.dilateErode(1,5,1); // dilation_elem (entre 0 et 2), dilation_size , dilatOrErod : 0 pour dilatation/ 1 pour erode
    //lgsObject.CannyThreshold(10, 100, 5); //owThreshold, max_lowThreshold, kernel_size (toujurs impair)
    //lgsObject.showImage();

    return 0;
}
