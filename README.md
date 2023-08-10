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
 
 The program requires 2 header files `imgproc.hpp` for using the filters and `highgui.hpp` for displaying images.
### 1. Gaussian blur
The function convolves the source image with the specified Gaussian kernel.  

For more information regarding the parameters please visit [here](https://docs.opencv.org/3.4/d4/d86/group__imgproc__filter.html#gaabe8c836e97159a9193fb0b11ac52cf1:~:text=filtering%20is%20supported.-,Parameters,-src)
```
void cv::GaussianBlur  ( InputArray  src,
OutputArray 	dst,
Size 	ksize,
double 	sigmaX,
double 	sigmaY = 0,
int 	borderType = BORDER_DEFAULT 
)
```

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
        <td><img src="https://github.com/Mash707/OpenCV-Image-Filtering/blob/main/test.png" alt="test" width="450" height="275"></td>
        <td><img src="https://github.com/Mash707/OpenCV-Image-Filtering/blob/main/Output%20Images/GaussianBlur.png" alt="Gaussian Blur" width="450" height="275"></td>
    </tr>
</table>

### 2. Dilate 
Dilates an image by using a specific structuring element. 
The function dilates the source image using the specified structuring element that determines the shape of a pixel neighborhood over which the maximum is taken:

![image](https://github.com/Mash707/OpenCV-Image-Filtering/assets/114072061/148b792d-a903-42ea-a3b1-510c58b4e6d4)

For more information regarding the parameters please visit [here](https://docs.opencv.org/3.4/d4/d86/group__imgproc__filter.html#ga4ff0f3318642c4f469d0e11f242f3b6c)

```
void cv::dilate	(	InputArray 	src,
OutputArray 	dst,
InputArray 	kernel,
Point 	anchor = Point(-1,-1),
int 	iterations = 1,
int 	borderType = BORDER_CONSTANT,
const Scalar & 	borderValue = morphologyDefaultBorderValue() 
)
```

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
        <td><img src="https://github.com/Mash707/OpenCV-Image-Filtering/blob/main/test.png" alt="test" width="450" height="275"></td>
        <td><img src="https://github.com/Mash707/OpenCV-Image-Filtering/blob/main/Output%20Images/Dilate.png" alt="Dilate" width="450" height="275"></td>
    </tr>
</table>

### 3. Erode
Erodes an image by using a specific structuring element. 
The function erodes the source image using the specified structuring element that determines the shape of a pixel neighborhood over which the minimum is taken:

![image](https://github.com/Mash707/OpenCV-Image-Filtering/assets/114072061/bb7e7578-2d0e-42a7-801a-0b1517008cfd)

For more information regarding the parameters please visit [here](https://docs.opencv.org/3.4/d4/d86/group__imgproc__filter.html#ga4ff0f3318642c4f469d0e11f242f3b6c)

```
void cv::erode	(	InputArray 	src,
OutputArray 	dst,
InputArray 	kernel,
Point 	anchor = Point(-1,-1),
int 	iterations = 1,
int 	borderType = BORDER_CONSTANT,
const Scalar & 	borderValue = morphologyDefaultBorderValue() 
)
```

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
        <td><img src="https://github.com/Mash707/OpenCV-Image-Filtering/blob/main/test.png" alt="test" width="450" height="275"></td>
        <td><img src="https://github.com/Mash707/OpenCV-Image-Filtering/blob/main/Output%20Images/Erode.png" alt="Dilate" width="450" height="275"></td>
    </tr>
</table>

### 4. Median Blur 
Blurs an image using the median filter. 
The function smoothes an image using the median filter with the `ksize × ksize` aperture. Each channel of a multi-channel image is processed independently.

For more information regarding the parameters please visit [here](https://docs.opencv.org/3.4/d4/d86/group__imgproc__filter.html#ga564869aa33e58769b4469101aac458f9)

```

void cv::medianBlur	(	InputArray 	src,
OutputArray 	dst,
int 	ksize 
)
```

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
        <td><img src="https://github.com/Mash707/OpenCV-Image-Filtering/blob/main/test.png" alt="test" width="450" height="275"></td>
        <td><img src="https://github.com/Mash707/OpenCV-Image-Filtering/blob/main/Output%20Images/MedianBlur.png" alt="Dilate" width="450" height="275"></td>
    </tr>
</table>

### 5. Filter2D
Convolves an image with the kernel.  
The function applies an arbitrary linear filter to an image. In-place operation is supported. When the aperture is partially outside the image, the function interpolates outlier pixel values according to the specified border mode.  
The function does actually compute correlation, not the convolution:

![image](https://github.com/Mash707/OpenCV-Image-Filtering/assets/114072061/04639080-47f9-460b-a3aa-591a3c6e3501)

For more information regarding the parameters please visit [here](https://docs.opencv.org/3.4/d4/d86/group__imgproc__filter.html#ga27c049795ce870216ddfb366086b5a04)

```

void cv::filter2D	(	InputArray 	src,
OutputArray 	dst,
int 	ddepth,
InputArray 	kernel,
Point 	anchor = Point(-1,-1),
double 	delta = 0,
int 	borderType = BORDER_DEFAULT 
)
```

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
        <td><img src="https://github.com/Mash707/OpenCV-Image-Filtering/blob/main/test.png" alt="test" width="450" height="275"></td>
        <td><img src="https://github.com/Mash707/OpenCV-Image-Filtering/blob/main/Output%20Images/Filter2D.png" alt="Dilate" width="450" height="275"></td>
    </tr>
</table>


