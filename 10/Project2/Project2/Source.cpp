#include <glut.h>

float rot = 0.0f;
void teapot()
{
	glPushMatrix();
	glTranslated(0.0, 1.1, 0.0);
	glutSolidTeapot(0.5);
	glPopMatrix();
}

void cube()
{
	glPushMatrix();
	glutSolidCube(1.5);
	glPopMatrix();
}

void setMaterial()
{
	GLfloat mat_ambient[] =
	{
		0.0f, 0.0f, 1.0f, 1.0f
	};
	GLfloat mat_diffuse[] =
	{
		1.0f, 0.6f, 0.6f, 1.0f
	};
	GLfloat mat_specular[] =
	{
		1.0f, 1.0f, 1.0f, 1.0f
	};
	GLfloat mat_shininess[] = { 50.0f };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
}
void setLighting()
{
	GLfloat lightIntensity[] =
	{
		0.7f, 0.7f, 0.7f, 1.0f
	};
	GLfloat light_position[] =
	{
		6.0f, 3.0f, 3.0f, 0.0f
	};
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightIntensity);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
}
void setViewport()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	double winHt = 1.9;
	glOrtho(-winHt * 64 / 48, winHt * 64 / 48, -winHt, winHt, 0.1, 100.0);
}
void setCamera()
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(3.3, 3.3, 3.0, 0, 0.25, 0, 0.0, 1.0, 0.0);
}

void displayObject()
{
	setMaterial();
	setLighting();
	setViewport();
	setCamera();
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glRotatef(rot, 1, 0, 0);
	cube();
	teapot();
	glFlush();
}

void myTimeOut(int id)
{
	rot += 10;
	glutPostRedisplay();
	glutTimerFunc(50, myTimeOut, 0);

}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("2018112 Raflizar Deswandi Yahya");
	glutDisplayFunc(displayObject);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_NORMALIZE);
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
	glViewport(0, 0, 640, 480);
	glutTimerFunc(50, myTimeOut, 0);
	glutMainLoop();
}
