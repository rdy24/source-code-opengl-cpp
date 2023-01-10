#include<stdlib.h>
#include<glut.h>
float w = 480, h = 480;
float sudut = 0, sx = 0, sy = 0, sz = 0, t = -100, tepot = 10;

void teapot() {
	glColor3d(1, 0, 0);
	glutWireTeapot(tepot);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0, 0, t); // digunakan untuk translasi
	glRotatef(sudut, sx, sy, sz); // digunakan untuk rotasi
	teapot();
	glutSwapBuffers();
}

void init() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45., (GLdouble)w / (GLdouble)h, 1., 300.);
	glMatrixMode(GL_MODELVIEW);
}

/**
*	custom key secara manual tanpa dibuat oleh device
*	fungsi rotasi
*/
void myKeyboard(unsigned char key, int x, int y) {
	if ((key == 'x') || (key == 'X')) {
		sx = 0;
		sy = 1;
		sz = 0;
		sudut += 10;
	} else if ((key == 'y') || (key == 'Y')) {
		sx = 1;
		sy = 0;
		sz = 0;
		sudut += 10;
	} else if ((key == 'z') || (key == 'Z')) {
		sx = 0;
		sy = 0;
		sz = 1;
		sudut += 10;
	}
}

/**
*	membuat key device
*	fungsi scalling
*/
void mySpecialKeyboard(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_UP:
		tepot += 1;
		break;
	case GLUT_KEY_DOWN:
		tepot -= 1;
		break;
	case GLUT_KEY_PAGE_UP:
		sx = 1;
		sy = 0;
		sz = 0;
		sudut += 10;
		break;
	case GLUT_KEY_PAGE_DOWN:
		sx = 0;
		sy = 1;
		sz = 0;
		sudut += 10;
		break;
	case GLUT_KEY_LEFT:
		sx = 0;
		sy = 0;
		sz = 1;
		sudut += 10;
		break;
	}
}
void update(int value) {
	glutPostRedisplay();
	glutTimerFunc(50, update, 0);
}
