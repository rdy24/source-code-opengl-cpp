#include <stdio.h>
#include <glut.h>
void garis() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glVertex2i(-2,0);
	glVertex2i(2,0);
	glVertex2i(0, -2);
	glVertex2i(0, 2);
	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(0.5, -0.5);
	glEnd();
	glFlush();
}