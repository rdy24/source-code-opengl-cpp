#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <glut.h>
//Deklarasi Variable
float z_pos = -10.0f;
float y_pos = 0;
float x_pos = 0;
float rot = 0.0f;
//Membuat Method resize
void resize(int width, int height)
{
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (float)width / (float)height,
		1.0, 300.0);
	glMatrixMode(GL_MODELVIEW);

		glLoadIdentity();
}
//Membuat Method timeout
void myTimeOut(int id)
{
	// called if timer event
	// ...advance the state of animationincrementally...
		rot += 3;
	glutPostRedisplay(); // request redisplay
	glutTimerFunc(10, myTimeOut, 0); // request nexttimer event
}
void myKeyboard(unsigned char key, int x, int y)
{
	if (key == 'x'){
		z_pos = 1;
		y_pos = 0;
		x_pos = 0;
		rot += 10;
	}
	else if (key == 'y'){
		z_pos = 0;
		y_pos = 1;
		x_pos = 0;
		rot += 10;
	}
	else if (key == 'z'){
		z_pos = 0;
		y_pos = 0;
		x_pos = 1;
		rot += 10;
	}
	if ((key == 'd')) z_pos -= 1.0f;
}
void cylinder(float alas, float atas, float tinggi)
{
	float i;
	glPushMatrix();
	glTranslatef(1.0, 0.0, -alas / 8);
	glutSolidCone(alas, 0, 32, 4);
	for (i = 0; i <= tinggi; i += alas / 24)
	{
		glTranslatef(0.0, 0.0, alas / 24);
		glutSolidTorus(alas / 4, alas - ((i*(alas -

			atas)) / tinggi), 16, 16);
	}
	glTranslatef(0.0, 0.0, alas / 4);
	glutSolidCone(atas, 0, 20, 1);
	glColor3f(1, 1, 0.);
	glPopMatrix();
}


//Membuat Method display
void mydisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0.0, 0.0f, z_pos);
	glRotatef(rot, 0, 1, 0);
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 0.0);
	glRotatef(0, 0, 0, 0);
	glTranslatef(0, -12, 0);
	cylinder(2, 2, 3);
	glEnd();
	glFlush();
	glutSwapBuffers();
}
//Membuat Method inisialisasi
void init()
{
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.0, 0.0, 0.0, 1.0); // A BackgroundClear Color
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, (GLdouble)500.0 /
		(GLdouble)500.0, 0, 100);
	glMatrixMode(GL_MODELVIEW);
	return;
}
//Program Utama
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	//glutInitDisplayMode( GLUT_DOUBLE /| GLUT_DEPTH/);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("1918111 - Arga Enusjaya Putra");
	// callbacks
	glutDisplayFunc(mydisplay);
	glutKeyboardFunc(myKeyboard);
	glutTimerFunc(100, myTimeOut, 0);
	glutReshapeFunc(resize);
	init();
	glutMainLoop();
	return 0;
}