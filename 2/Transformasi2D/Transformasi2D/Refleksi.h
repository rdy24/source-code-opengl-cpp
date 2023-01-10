#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector> // membuat matriks
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
void drawPolygonMirrorReflection(char reflectionAxis)
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);
	if (reflectionAxis == 'x' || reflectionAxis == 'X')
	{
		for (int i = 0; i < edges; i++)
		{
			glVertex2i((pntX[i]), (pntY[i] * -1));
		}
	}
	else if (reflectionAxis == 'y' || reflectionAxis == 'Y')
	{
		for (int i = 0; i < edges; i++)
		{
			glVertex2i((pntX[i] * -1), (pntY[i]));
		}
	}
	glEnd();
	glFlush();
}
void myInit(void)
{
	glClearColor(2.0, 4.0, 3.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0); // ukuran objek
	gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
}
void myDisplay()
{
	drawPolygon();
	drawPolygonMirrorReflection(reflectionAxis);
}