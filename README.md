# OpenCV-Image-Filtering

## Prerequisites
1) Platform - Windows
2) Microsoft [Visual Studio 2022](https://visualstudio.microsoft.com/#:~:text=Visual%20Studio%20family-,Visual%20Studio,-The%20most%20comprehensive)
3) [OpenCV 4.0](https://github.com/opencv/opencv/releases/tag/4.8.0#:~:text=Jun%2028-,opencv%2D4.8.0%2Dwindows.exe,-168%20MB) or above

## Quick setup
1) Clone this repository to your local system.
2) Open the `OpenCV-Image-Filtering.sln` in visual studio.
3) Now setup path directories for opencv in the project properties.
    * Under Configuration Properties, go to VC++ Directories and set the path for include directories and library directories to
    `path\to\opencv-folder\opencv\build\include` and `path\to\opencv-folder\opencv\build\x64\vc16\lib` respectively.
    * Under Linker Properties, go to Input and add `opencv_world480d.lib` under Additional Dependencies.

## What does the Program do?
The Program includes a total of 5 image filters from opencv library.
 * Gaussian Blur
 * Dilate
 * Erode
 * Median Blur
 * Filter2D
 
 The program requires 2 header files `imgproc.hpp` for using the filters and `highgui.hpp` for displaying images and we store the path of our test image.

### 1. Gaussian blur
   <table>
   <tr>
      <td>
         Original
      </td>
      <td>
         Output
      </td>
   </tr>
    <tr>
        <td><img src="[https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/725f5d91-2a34-4f25-89f8-f98d27034008](https://github.com/Mash707/OpenCV-Image-Filtering/blob/main/test.png)" alt="Image 1" width="300" height="300"></td>
        <td><img src="[https://github.com/PurviChaurasia/OpenCV-ImageFilters-WasmEdge/assets/97350598/ea87ad71-74cf-49f3-90b5-56e4898ee0ce](https://github.com/Mash707/OpenCV-Image-Filtering/blob/main/test.png)https://github.com/Mash707/OpenCV-Image-Filtering/blob/main/test.png" alt="Image 2" width="300" height="300"></td>
    </tr>
</table>
