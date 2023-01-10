#include "titik.h"
#include "garis.h"

int main(int argc, char **argv)
{
	//glutCreateWindow("Titik");
	//glutDisplayFunc(titik);
	//glutMainLoop();

	glutCreateWindow("Garis");
	glutDisplayFunc(garis);
	glutMainLoop();
}