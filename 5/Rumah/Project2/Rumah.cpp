#include<Windows.h>       
#include<glut.h>       

void init()
{
	glClearColor(0.5, 1, 0, 0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(100, 900, 100, 700);
}
void drawHome()
{
	glClear(GL_COLOR_BUFFER_BIT);    

	//Tembok
	glColor3f(0, 0.5, 1);
	glBegin(GL_POLYGON);
	glVertex2i(250, 660);
	glVertex2i(750, 660);
	glVertex2i(750, 200);
	glVertex2i(250, 200);
	glEnd();

	// jendela 1
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2i(260, 650);
	glVertex2i(350, 650);
	glVertex2i(350, 580);
	glVertex2i(260, 580);
	glEnd();
	
	// garis jendela 1
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(305, 650);
	glVertex2i(305, 580);
	glVertex2i(260, 615);
	glVertex2i(350, 615);
	glEnd();
	
	// jendela 2
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2i(460, 650);
	glVertex2i(550, 650);
	glVertex2i(550, 580);
	glVertex2i(460, 580);
	glEnd();

	// garis jendela 2
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(505, 650);
	glVertex2i(505, 580);
	glVertex2i(460, 615);
	glVertex2i(550, 615);
	glEnd();

	// jendela 3
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2i(650, 650);
	glVertex2i(740, 650);
	glVertex2i(740, 580);
	glVertex2i(650, 580);
	glEnd();

	// garis jendela 3
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(695, 650);
	glVertex2i(695, 580);
	glVertex2i(650, 615);
	glVertex2i(740, 615);
	glEnd();

	// jendela 4
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2i(260, 500);
	glVertex2i(350, 500);
	glVertex2i(350, 430);
	glVertex2i(260, 430);
	glEnd();

	// garis jendela 4
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(305, 500);
	glVertex2i(305, 430);
	glVertex2i(260, 465);
	glVertex2i(350, 465);
	glEnd();

	// jendela 5
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2i(460, 500);
	glVertex2i(550, 500);
	glVertex2i(550, 430);
	glVertex2i(460, 430);
	glEnd();

	// garis jendela 5
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(505, 500);
	glVertex2i(505, 430);
	glVertex2i(460, 465);
	glVertex2i(550, 465);
	glEnd();

	// jendela 6
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2i(650, 500);
	glVertex2i(740, 500);
	glVertex2i(740, 430);
	glVertex2i(650, 430);
	glEnd();

	// garis jendela 6
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(695, 500);
	glVertex2i(695, 430);
	glVertex2i(650, 465);
	glVertex2i(740, 465);
	glEnd();

	// jendela 7
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2i(260, 350);
	glVertex2i(350, 350);
	glVertex2i(350, 280);
	glVertex2i(260, 280);
	glEnd();

	// jendela 8
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2i(650, 350);
	glVertex2i(740, 350);
	glVertex2i(740, 280);
	glVertex2i(650, 280);
	glEnd();

	// garis jendela 7
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(695, 350);
	glVertex2i(695, 280);
	glVertex2i(650, 315);
	glVertex2i(740, 315);
	glEnd();
	
	// garis jendela 8
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(305, 350);
	glVertex2i(305, 280);
	glVertex2i(260, 315);
	glVertex2i(350, 315);
	glEnd();

	// pintu
	glColor3f(0.7, 0.2, 0.9);
	glBegin(GL_POLYGON);
	glVertex2i(450, 370);
	glVertex2i(560, 370);
	glVertex2i(560, 200);
	glVertex2i(450, 200);
	glEnd();

	// gagang pintu
	glColor3f(0.3, 0.7, 0.9);
	glPointSize(13);
	glBegin(GL_POINTS);
	glVertex2i(460, 300);
	glEnd();

	// jalan
	glColor3f(0.3, 0.5, 0.7);
	glLineWidth(5);
	glBegin(GL_POLYGON);
	glVertex2i(450, 200);
	glVertex2i(560, 200);
	glVertex2i(520, 100);
	glVertex2i(230, 100);
	glEnd();

	glFlush();
}
int main(int argc, char ** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(900, 700);
	glutCreateWindow("Raflizar Deswandi Yahya 2018112");
	init();
	glutDisplayFunc(drawHome);
	glutMainLoop();
}