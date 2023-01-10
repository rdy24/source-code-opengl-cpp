#include <stdio.h>
#include <glut.h>

void segitiga()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glColor3f(1, 0, 1);
	glVertex2d(100, 80);
	glColor3f(0, 0, 1);
	glVertex2d(60, 100);
	glColor3f(1, 0, 0);
	glVertex2d(40, 40);
	glEnd();
	glFlush();
}
