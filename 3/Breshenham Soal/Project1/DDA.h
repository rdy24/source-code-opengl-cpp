#include <stdlib.h> //utk operasi pembanding dan konversi
#include <glut.h> //utk menerjemahkan glut agar proses dapat di-running
#include <iostream> //utk input output

using namespace std; //instruksi yang berfungsi untuk mengenali cout dan cin

int window_x;
int window_y;

int window_width = 720;
int window_height = 480;

char *judul_window = "Algoritma DDA";

void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0); //menentukan nilai yang jelas untuk buffer warna
	glColor3f(1.0, 0.0, 0.0); //utk menentukan warna garis/titik
	glPointSize(10.0); // ukuran objek
	glLoadIdentity(); //merubah matriks
	gluOrtho2D(0.0, 20.0, 0.0, 20.0); //mengatur proyeksi hasil koordinat kiri, kanan, bawah dan atas
}

void dda(void) { //algoritma dda (Digital Differential Analyzer)
	int x1, y1, x2, y2;
	float x, y, dx, dy, steps, x_inc, y_inc;

	x1 = 1;
	y1 = 11;
	x2 = 8;
	y2 = 2;

	x = x1;
	y = y1;

	dx = x2 - x1;
	dy = y2 - y1;

	if (dx > dy) {
		steps = dx;
	}
	else {
		steps = dy;
	}
	x_inc = dx / steps;
	y_inc = dy / steps;


	glBegin(GL_LINE_STRIP); //menggambar garis
	glVertex2i(x, y); //membuat titik dengan argumen x,y bertipe data integer

	do {
		x += x_inc;
		y += y_inc;
		glVertex2i(round(x), round(y)); //utk membulatkan nilai
	} while (x < x2);

	glEnd(); //mengakhiri proses 
	glFlush(); //proses rendering

}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT); //menghapus window
	dda(); //memanggil fungsi
	glutSwapBuffers(); //menukar bagian belakang buffer layar (screen buffer)
}
