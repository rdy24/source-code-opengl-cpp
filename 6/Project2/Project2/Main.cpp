#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <glut.h>

float z_pos = -10.0f;
float rot = 0.0f;

void bola() {
	glColor3d(0.6, 0.2, 0.9);
	glutWireSphere(3, 4, 5);
}

void donat(){
	glColor3d(0.3, 0.5, 0.2);
	glutWireTorus(3, 8, 8, 10);
}

void dodeca(){
	glColor3d(0.9, 0.4, 0.2);
	glTranslatef(10, 0, 0);
	glutWireDodecahedron();
}

void octa() {
	glColor3d(0.5, 0.9, 0);
	glutSolidOctahedron();
}

void dodeca1(){
	glColor3d(0.9, 0.4, 0.2);
	glTranslatef(-20, 0, 0);
	glutWireDodecahedron();
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
	if ((key == '-') || (key == '_')) z_pos -= 0.1f;
	if ((key == '+') || (key == '=')) z_pos += 0.1f;
}

void mydisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
	glLoadIdentity(); 
	glTranslatef(0.0f, 0.0f, z_pos);
	glRotatef(rot, 1, 0, 0); 
	bola();
	octa();
	glRotatef(rot, 0, 1, 0);
	donat();
	dodeca();
	octa();
	dodeca1();
	octa();
	glutSwapBuffers(); 
}

void init()
{
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, (GLdouble)500.0 / (GLdouble)500.0, 0, 500);
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
