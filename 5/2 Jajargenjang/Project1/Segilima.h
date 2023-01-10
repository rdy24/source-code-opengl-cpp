#include <stdio.h>
#include <glut.h>

void segilima()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex2d(-80, 80);
	glVertex2d(-40, 80);
	glVertex2d(-20, 120);
	glVertex2d(-60, 140);
	glVertex2d(-100, 120);
	glEnd();
	glFlush();
}
