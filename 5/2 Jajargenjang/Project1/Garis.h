#include <stdio.h>
#include <glut.h>

void garis_lines()
{
	glBegin(GL_LINES);
	glColor3f(1, 0, 0);
	glVertex2d(-80, 40);
	glColor3f(1, 0, 0);
	glVertex2d(-40, 40);
	glColor3f(1, 0, 0);
	glVertex2d(-40, 20);
	glEnd();
	glFlush();
}

void garis_line_strip()
{
	glBegin(GL_LINE_STRIP);
	glColor3f(1, 0, 0);
	glVertex2d(-80, -40);
	glColor3f(1, 0, 0);
	glVertex2d(-40, -40);
	glColor3f(1, 0, 0);
	glVertex2d(-40, -60);
	glEnd();
	glFlush();
}

void garis_line_loop()
{
	glBegin(GL_LINE_LOOP);
	glColor3f(1, 0, 0);
	glVertex2d(20, -40);
	glColor3f(1, 0, 0);
	glVertex2d(60, -40);
	glColor3f(1, 0, 0);
	glVertex2d(60, -60);
	glEnd();
	glFlush();
}

void gabungan()
{
	glClear(GL_COLOR_BUFFER_BIT);
	garis_lines();
	garis_line_strip();
	garis_line_loop();
}

