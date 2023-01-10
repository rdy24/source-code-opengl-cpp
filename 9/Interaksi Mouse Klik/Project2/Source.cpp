#include <stdlib.h> 
#include <glut.h> 
#include <stdio.h> 

void Triangles(){

	glBegin(GL_TRIANGLES);
	glVertex2i(0, 0);
	glVertex2i(100, -30);
	glVertex2i(100, 30);
	glEnd();
}

void mouseku(int button, int state, int x, int y){
	if (button == GLUT_LEFT_BUTTON){
		printf("tombol KIRI (%i,%i)\n", x, y);
	}
	else if (button == GLUT_MIDDLE_BUTTON){
		printf("tombol TENGAH (%d,%d)\n", x, y);
	}
	else{
		printf("tombol KANAN (%d,%d)\n", x, y);
	}
	if (state == GLUT_DOWN){
		printf("tombol DITEKAN\n");
	}
	else{
		printf("tombol DILEPAS\n");
	}
} void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glRotatef(10, 0., 0., 1.);
	Triangles();
	glFlush();
}
void Timer(int value){
	glutPostRedisplay();
	glutTimerFunc(30, Timer, 0);
}
void main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(320, 320);
	glClearColor(0.0, 0.0, 0.0, 1.0); // A Background Clear Color
	glutCreateWindow("coba");
	glutDisplayFunc(display);
	gluOrtho2D(-320.0, 320.0, -320.0, 320.0);
	glutTimerFunc(10, Timer, 0);
	glutMouseFunc(mouseku);
	glutMainLoop();
}
