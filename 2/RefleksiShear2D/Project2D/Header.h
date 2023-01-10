#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>
#include <glut.h>

using namespace std;

int pntX1, pntY1, choice, edges;
vector<int> pntX;
vector<int> pntY;
char reflectionAxis, shearingAxis;
int shearingX, shearingY;

void drawPolygon() {
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	for (int i = 0; i < edges; i++) {
		glVertex2i(pntX[i], pntY[i]);
	}
	glEnd();
	glFlush();
}


void garis() {
	for (int i = 1; i <= 30;i++) {
		cout << "=";
	}
}

void drawPolygonMirrorX() {
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);
	for (int i = 0; i < edges; i++) {
		glVertex2i(pntX[i], (pntY[i] * -1));
	}

	glEnd();
	glFlush();
}

void drawPolygonMirrorY() {
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	for (int i = 0; i < edges; i++) {
		glVertex2i((pntX[i] * - 1), pntY[i]);
	}

	glEnd();
	glFlush();
}

void drawPolygonShearingX() {
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);
	for (int i = 0; i < edges; i++) {
		glVertex2i((pntX[i] + shearingX * pntY[i]), pntY[i]);
	}

	glEnd();
	glFlush();
}

void drawPolygonShearingY() {
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	for (int i = 0; i < edges; i++) {
		glVertex2i(pntX[i], (pntY[i] + shearingY * pntX[i]));
	}

	glEnd();
	glFlush();
}

void myInit(void) {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-50, 20, -50, 20);
}

void displayShearing() {
	drawPolygon();
	drawPolygonShearingX();
	drawPolygonShearingY();
}

void displayMirror() {
	drawPolygon();
	drawPolygonMirrorX();
	drawPolygonMirrorY();
}