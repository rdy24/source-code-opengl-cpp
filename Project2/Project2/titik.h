#include <stdio.h>
#include <glut.h>

void titik() {
	glPointSize(10);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glVertex2i(0, 0);
	glEnd();
	glFlush();
}