#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>
#include <glut.h>
using namespace std;
int pntX1, pntY1, choice = 0, edges;
vector<int> pntX;
vector<int> pntY;
char reflectionAxis, shearingAxis;
int shearingX, shearingY;
void drawPolygon()
{
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	for (int i = 0; i < edges; i++)
	{
		glVertex2i(pntX[i], pntY[i]);
	}
	glEnd();
	glFlush();
}
void drawPolygonShearing()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	if (shearingAxis == 'x' || shearingAxis == 'X')
	{
		for (int i = 0; i < edges; i++)
		{
			glVertex2i(pntX[i] + shearingX * pntY[i],
				pntY[i]);
		}
	}
	else if (shearingAxis == 'y' || shearingAxis == 'Y')
	{
		for (int i = 0; i < edges; i++)
		{
			glVertex2i(pntX[i], pntY[i] + shearingY
				*pntX[i]);
		}
	}
	glEnd();
	glFlush();
}
void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
}
void myDisplay()
{
	drawPolygon();
	drawPolygonShearing();
}