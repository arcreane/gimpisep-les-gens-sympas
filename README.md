# gimpisep-les-gens-sympas
gimpisep-les-gens-sympas created by GitHub Classroom

## Setup de l'environement de développement :
- [VS C++ build tools](https://visualstudio.microsoft.com/fr/downloads/) (télécharger Visual Studio 2019 community, mais ne séléctionner que "C++ build tools lors de l'installation" 
- [OpenCV : 4.5.2](https://opencv.org/releases/)
- [CMake : 2.20.2](https://cmake.org/download/)

## Modules VS Code
- [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)
- [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
- [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools)

## Variables d'environement
Si vous avez des problèmes liés au chemin d'installation d'openCV, faites mes modifications suivantes :

### Nouvelle variable : OPENCV_DIR
- C:\chemin_vers_mon_openCV\opencv\build

### Path
- %OPENCV_DIR%\x64\vc15\bin
- %OPENCV_DIR%\x64\vc15\lib

