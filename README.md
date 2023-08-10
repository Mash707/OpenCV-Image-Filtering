# OpenCV-Image-Filtering

## Prerequisites
1) Platform - Windows
2) Microsoft [Visual Studio 2022](https://visualstudio.microsoft.com/#:~:text=Visual%20Studio%20family-,Visual%20Studio,-The%20most%20comprehensive)
3) [OpenCV 4.0](https://github.com/opencv/opencv/releases/tag/4.8.0#:~:text=Jun%2028-,opencv%2D4.8.0%2Dwindows.exe,-168%20MB) or above

### Quick setup
1) Clone this repository to your local system.
2) Open the `OpenCV-Image-Filtering.sln` in visual studio.
3) Now setup path directories for opencv in the project properties.
    * Under Configuration Properties, go to VC++ Directories and set the path for include directories and library directories to
    `path\to\opencv-folder\opencv\build\include` and `path\to\opencv-folder\opencv\build\x64\vc16\lib` respectively.
    * Under Linker Properties, go to Input and add `opencv_world480d.lib` under Additional Dependencies.

### What does the Program do?
The Program includes a total of 5 image filters.
 * Gaussian Blur
 * Dilate
 * Erode
 * Median Blur
 * Filter2D
