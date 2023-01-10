#include <stdlib.h>
#include <glut.h>
#include <iostream>

void setPixel(GLint xCoordinate, GLint yCoordinate)
{
	glBegin(GL_POINTS);
	glVertex2i(xCoordinate, yCoordinate);
	glEnd();
	glFlush();
}

void lineBres(GLint x1, GLint y1, GLint xEnd, GLint yEnd){
	GLint dx = (xEnd - x1);
	GLint dy = (yEnd - y1);
	GLint p = 2 * abs(dy) - abs(dx);
	GLint twoDy = 2 * abs(dy);
	GLint twoDyMinusDx = 2 * abs(dy) - 2 * abs(dx);
	GLint x, y;
	if (x1 > xEnd) {
		x = xEnd;
		y = yEnd;
		xEnd = x;
	}
	else {
		x = x1;
		y = y1;
	}
	setPixel(x, y);
	while (x<xEnd) {
		x++;
		if (p<0)
			p += twoDy;
		else {
			y++;
			p += twoDyMinusDx;
		}
		setPixel(x, y);
	}
	glClearColor(1.0, 1.0, 1.0, 1.0);
}

void drawMyLine()
{
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	GLint x1 = 1;
	GLint y1 = 11;
	GLint xEnd = 8;
	GLint yEnd = 2;
	lineBres(x1, y1, xEnd, yEnd);
	glClearColor(1.0, 1.0, 1.0, 1.0);
}

void display()
{
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 50.0, 0.0, 50.0);
	glClearColor(1.0, 1.0, 1.0, 1.0);
}

int main(int argc, char** argv)
{
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("2018112 - Raflizar Deswandi Yahya");
	display();
	glutDisplayFunc(drawMyLine);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glutMainLoop();
	return 0;
}
