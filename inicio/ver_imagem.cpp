#include <highgui.h> //Esta biblioteca responsavel por criar as janelas onde são mostradas as imagens
/**
*@author Danilo Martins Slvério Cardoso
*@date 31/12/2014
*@version 1.0
*@param argc - Quantidade de parametros que recebe o programa
*@param argv - imagem que será mostrada no programa
*@example ./ver_imagen caminho/img.jpg
*@return Retorna 0 para demonstrar o fim do programa
*
*Código do livro "Learnig OPENCV: Computer Vision With OpenCV Library" de Gary Bradiski e Adrian Kaehler
*
*Este programa abre uma janela que mostra a imagem, espera até que alguma  tecla seja precionada e encerra o programa
*/
int main(int argc, char** argv){
    IplImage* img = cvLoadImage(argv[1]);///Cria uma variável que recebe como valor a imagem passada como parametro
    cvNamedWindow("Exemplo1", CV_WINDOW_AUTOSIZE);///Cria a janela que será exibida a imagem
    cvShowImage("Exemplo1",img);///Mostra a imagem na janela criada
    cvWaitKey(0);///Este comando faz esperar até que alguma tecla seja precionada
    cvReleaseImage(&img);///Libera a memoria que a imagem ocupava
    cvDestroyWindow("Exemplo1");///libera a memoria ocupada pela janela
    return 0;///Finaliza o programa.
}
