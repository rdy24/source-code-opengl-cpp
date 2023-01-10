
#include <stdio.h>
#include <iostream>
#include <glut.h>
using namespace std;

int pntX1, pntY1, r;

void plot(int x, int y) {
	glBegin(GL_POINTS);
	glVertex2i(round(x + pntX1), round(y + pntY1));
	glEnd();
}

void myInit(void) {
	glClearColor(0.0, 0.0, 0.0, 0);
	glColor3f(0.0f, 1.0f, 0.0);
	glPointSize(100.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-30, 30, -20, 20);
}

void midPointCircleAlgo() {
	int x = 0;
	int y = r;
	float decision = 5 / 4 - r;
	plot(x, y);

	while (y > x) {
		if (decision < 0) {
			x++;
			decision += 2 * x + 1;
		}
		else {
			y--;
			x++;
			decision += 2 * (x - y) + 1;
		}

		plot(x, y);
		plot(y, x);
		plot(y, -x);
		plot(x, -y);
		plot(-x, -y);
		plot(-y, -x);
		plot(-y, x);
		plot(-x, y);
	}
}

void myDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(5);

	midPointCircleAlgo();
	glFlush();
}

void main(int argc, char** argv) {
	cout << "Enter the coordinate of the center:\n\n\n";
	cout << "X-Coordinate : "; cin >> pntX1;
	cout << "\nY-Coordinate : "; cin >> pntY1;
	cout << "\nEnter Radius: "; cin >> r;

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("2018112");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}
