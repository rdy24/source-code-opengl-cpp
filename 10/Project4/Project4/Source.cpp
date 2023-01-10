#include "stdlib.h"
#include "glut.h"

int w = 640, h = 450;

int x1 = 0, y1 = 0, sudut = 0, z1 = 0, skalaX = 0, skalaY = 0, z = -20;

void init() {
	glClearColor(0, 0, 0, 0);
	GLfloat modelambient[] = { 0, 0.2, 0.2, 0.2 };
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glColorMaterial(GL_FRONT_AND_BACK, GL_POSITION);
	glEnable(GL_COLOR_MATERIAL);
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, modelambient);


	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (GLdouble)w / (GLdouble)h, 1.0, 300.0);
	glMatrixMode(GL_MODELVIEW);
}

void renderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0, 1, 1, 0);
	glLoadIdentity();
	glTranslatef(0, 0, z);
	glRotatef(sudut, x1, y1, z1);

	// kepala
	glPushMatrix();
	glTranslatef(0, 4, 0);
	glColor3f(0.5, 0.24, 1.0);
	glScalef(1.0, 0.8, 0.8);
	glutSolidSphere(4.6, 100, 100);
	glPopMatrix();

	// mata
	glPushMatrix();
	glColor3f(-0.9, -0.9, -0.9);
	glScalef(0.6, 0.6, 0.6);
	glTranslatef(2.75, 7, 5.0);
	glutSolidSphere(1, 100, 10);
	glPopMatrix();

	glPushMatrix();
	glColor3f(-0.9, -0.9, -0.9);
	glScalef(0.6, 0.6, 0.6);
	glTranslatef(-2.75, 7, 5.0);
	glutSolidSphere(1, 100, 10);
	glPopMatrix();

	// mulut
	glPushMatrix();
	glColor3f(1.0, 0.25, 0);
	glRotatef(90, 7, 0, 0);
	glTranslatef(0, 3.5, -4);
	glScalef(1, 1.0, 0.5);
	glutSolidSphere(1, 5, 500);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1.0, 0.25, 0);
	glRotatef(90, 7, 0, 0);
	glTranslatef(0, 3.5, -3.5);
	glScalef(1, 1.0, 0.5);
	glutSolidSphere(0.7, 5, 500);
	glPopMatrix();

	//sayap
	glPushMatrix();
	glRotatef(3, 0, 0, 1);
	glTranslatef(4.6, 3.2, -0.1);
	glColor3f(0.5, 0.24, 1.0);
	glScalef(0.2, 0.6, 0.4);
	glutSolidSphere(3, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glRotatef(-3, 0, 0, 1);
	glTranslatef(-4.6, 3.2, -0.1);
	glColor3f(0.5, 0.24, 1.0);
	glScalef(0.2, 0.6, 0.4);
	glutSolidSphere(3, 100, 100);
	glPopMatrix();

	glutSwapBuffers();
}

int main(int args, char**argv) {
	glutInit(&args, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(w, h);
	glutCreateWindow("angry bird");
	glutDisplayFunc(renderScene);
	init();
	glutMainLoop();
}

