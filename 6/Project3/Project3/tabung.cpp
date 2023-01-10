#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <glut.h>

float z_pos = -10.0f;
float rot = 0.0f;

void tabung(float alas, float atas, float tinggi)
{
	glPushMatrix();
	glColor3f(0.63, 0.71, 0.8);
	glutSolidCone(alas, 0, 32, 4);
	glTranslatef(0.0, 0.0, - alas / 8);
	for (float i = 0; i <= tinggi; i += alas / 24)
	{
		glTranslatef(0.0, 0.0, alas / 24);
		glColor3f(0, 0.67, 0.7);
		glutSolidTorus(alas / 4, alas - ((i*(alas - atas)) / tinggi), 16, 16);
	}
	glColor3f(0.63, 0.71, 0.8);
	glutSolidCone(alas, 0, 32, 4);
	glTranslatef(0.0, 0.0, alas / 8);
	glPopMatrix();
}

void resize(int width, int height)
{
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (float)width / (float)height, 1.0, 300.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void myTimeOut(int id)
{
	rot += 1;
	glutPostRedisplay();
	glutTimerFunc(10, myTimeOut, 0);
}

void myKeyboard(unsigned char key, int x, int y)
{
	if ((key == '<') || (key == ',')) z_pos -= 0.1f;
	if ((key == '>') || (key == '.')) z_pos += 0.1f;
}

void mydisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0.0, 0.0f, z_pos);
	glRotatef(rot, 1, 0, 0);
	tabung(1.5, 1.5, 2.5);
	glFlush();
	glutSwapBuffers();
}

void init()
{
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, (GLdouble)500.0 / (GLdouble)500.0, 0, 100);
	glMatrixMode(GL_MODELVIEW);
	return;
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("2018112 Raflizar Deswandi Yahya");
	glutDisplayFunc(mydisplay);
	glutKeyboardFunc(myKeyboard);
	glutTimerFunc(10, myTimeOut, 0);
	glutReshapeFunc(resize);
	init();
	glutMainLoop();
	return 0;
}
