#include <highgui.h>

int main(int argc, char** argv){
    IplImage* img = cvLoadImage(argv[1]);
    cvNamedWindow("Exemplo1", CV_WINDOW_AUTOSIZE);
    cvShowImage("Exemplo1",img);
    cvWaitKey(0);
    cvReleaseImage(&img);
    cvDestroyWindow("Exemplo1");
}
