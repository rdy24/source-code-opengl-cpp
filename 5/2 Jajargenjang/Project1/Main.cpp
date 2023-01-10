//#include "Garis.h"
//#include "Segitiga.h"
//#include "Segilima.h"
//#include "Latihan1.h"
#include "tugaslatihan2.h"

void main()
{
	// Garis
	//glutInitWindowPosition(100, 100);
	//glutInitWindowSize(500, 500);
	//glutCreateWindow("Latihan Garis");
	//gluOrtho2D(-250, 250, -250, 250);
	//glutDisplayFunc(gabungan);
	//glutMainLoop();

	// Segitiga
	//glutInitWindowPosition(100, 100);
	//glutInitWindowSize(500, 500);
	//glutCreateWindow("Latihan Segitiga");
	//gluOrtho2D(-250, 250, -250, 250);
	//glutDisplayFunc(segitiga);
	//glutMainLoop();

	// Segilima
	//glutInitWindowPosition(100, 100);
	//glutInitWindowSize(500, 500);
	//glutCreateWindow("latihan segilima");
	//gluOrtho2D(-250, 250, -250, 250);
	//glutDisplayFunc(segilima);
	//glutMainLoop();

	// Latihan 1
	//glutInitWindowPosition(100, 100);
	//glutInitWindowSize(500, 500);
	//glutCreateWindow("Latihan");
	//gluOrtho2D(-125, 125, -125, 125);
	//glutDisplayFunc(lineStrip);
	//glutMainLoop();

	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Tugas Latihan 2");
	gluOrtho2D(-80, 80, -80, 80);
	glutDisplayFunc(tugaslatihan2);
	glutMainLoop();

}
