//#include "DDA.h"
#include "Bressenham.h"
int main(int argc, char **argv)
{
	glutInitWindowSize(400, 400); //mengatur ukuran window
	glutInitWindowPosition(0, 0); //mengatur posisi window
	glutCreateWindow("bresenham"); //memberi judul pada window
	display(); //memanggil fungsi
	glutDisplayFunc(drawMyLine); //memanggil display
	glutMainLoop(); //melakukan perulangan event
	return 0;

	//glutInit(&argc, argv); //mengatur pembuatan window
	////mengatur window
	//window_x = (glutGet(GLUT_SCREEN_WIDTH) - window_width) / 2;
	//window_y = (glutGet(GLUT_SCREEN_HEIGHT) - window_height) / 2;
	////mengatur ukuran
	//glutInitWindowSize(window_width, window_height);
	////mengatur posisi
	//glutInitWindowPosition(window_x, window_y);

	//glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE); //fungsi utk menentukan apakah model menggunakan pewarnaan RGB / indeks warna
	//glutCreateWindow(judul_window); //memberi judul window

	//init(); //memanggil fungsi
	//glutDisplayFunc(display); //memanggil display
	//glutMainLoop(); //melakukan perulangan event
}
