#include <stdio.h> 
#include <glut.h>

void lineStrip()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_STRIP); 
	glColor3f(1, 1, 1); 
	glVertex2d(-50, 30); 
	glColor3f(1, 0, 0);
	glVertex2d(30, 30);
	glColor3f(0, 1, 1);
	glVertex2d(50, -30);
	glColor3f(1, 1, 0);
	glVertex2d(30, -70);
	glColor3f(0, 1, 0);
	glVertex2d(-30, -70);
	glColor3f(1, 1, 1);
	glVertex2d(-70, -30);
	glColor3f(0, 0, 1);
	glVertex2d(-50, 30);
	glColor3f(1, 0, 1);
	glVertex2d(30, -70);
	glColor3f(0, 1, 0);
	glVertex2d(30, 30);
	glColor3f(0, 0, 1);
	glVertex2d(-70, -30);
	glColor3f(1, 0, 0);
	glVertex2d(50, -30);
	glColor3f(1, 0, 0);
	glVertex2d(-50, 30);
	glEnd(); 
	glFlush();
}
