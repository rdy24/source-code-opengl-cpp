#include <stdio.h>
#include <glut.h>

void jajargenjangbawah()
{
	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
	glVertex2d(30, 40);
	glColor3f(1, 0, 1);
	glVertex2d(60, 40);
	glColor3f(0, 1, 1);
	glVertex2d(70, 20);
	glColor3f(1, 1, 0);
	glVertex2d(40, 20);
	glEnd();
	glFlush();

}
void jajargenjangatas()
{
	glBegin(GL_QUADS);
	glColor3f(1, 0, 1);
	glVertex2d(30, 0);
	glColor3f(1, 0, 0);
	glVertex2d(60, 0);
	glColor3f(0, 1, 0);
	glVertex2d(70, 20);
	glColor3f(1, 1, 0);
	glVertex2d(40, 20);
	glEnd();
	glFlush();

}

void tugaslatihan2()
{
	glClear(GL_COLOR_BUFFER_BIT);
	jajargenjangatas();
	jajargenjangbawah();
}
