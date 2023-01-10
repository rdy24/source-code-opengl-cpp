#include <stdlib.h>
#include <glut.h>
#include <iostream>

using namespace std;

//  posisi window di layar
GLint window_x;
GLint window_y;

//  ukuran window
GLint window_width = 500;
GLint window_height = 500;

char *judul_window = "2018112 - Raflizar Deswandi Yahya";

void init()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(10.0);
	glLoadIdentity();
	gluOrtho2D(0.0, 20.0, 0.0, 20.0);
}

void dda(void) {
	int x1, y1, x2, y2;
	float x, y, dx, dy, steps, x_inc, y_inc;

	//tentukan titik awal dan akhir
	x1 = 1;
	y1 = 11;
	x2 = 8;
	y2 = 2;

	x = x1;
	y = y1;

	//hitung dx dan dy
	dx = x2 - x1;
	dy = y2 - y1;

	//hitung step
	if (abs(dx) > abs(dy)) {
		steps = abs(dx);
	}
	else {
		steps = abs(dy);
	}
	//hitung perubahan nilai x (x_inc) dan y (y_inc)
	x_inc = dx / steps;
	y_inc = dy / steps;


	glBegin(GL_LINE_STRIP);
	glVertex2i(x, y);

	//perulangan untuk menggambar titik-titik
	do {
		x += x_inc;
		y += y_inc;
		glVertex2i(round(x), round(y)); //gambar titik
	} while (x < x2);

	glEnd();
	glFlush();

}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	dda();
	glutSwapBuffers();
}

void main(int argc, char **argv)
{

	glutInit(&argc, argv);
	window_x = (glutGet(GLUT_SCREEN_WIDTH) - window_width) / 2;
	window_y = (glutGet(GLUT_SCREEN_HEIGHT) - window_height) / 2;
	glutInitWindowSize(window_width, window_height);
	glutInitWindowPosition(window_x, window_y);

	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutCreateWindow(judul_window);

	init();
	glutDisplayFunc(display);
	glutMainLoop();
}

