#include<stdlib.h>
#include<glut.h>
float w = 480, h = 480;
float sudut = 0, sx = 0, sy = 0, sz = 0, t = -100, tl = 0, t2 = 0, tx = 2, ty = 2, tz = 5;
void Dodecahedron() {
	glColor3d(0.4, 0.9, 1);
	glutWireDodecahedron();
}
void cube(){
	glColor3d(0.5, 1, 0);
	glutWireCube(8); 
}
void display() {
	glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(tl, t2, t);
	glRotatef(sudut, sx, sy, sz);
	glScalef(tx, ty, tz);
	Dodecahedron();
	cube();
	glutSwapBuffers();
}
void init() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50., (GLdouble)w / (GLdouble)h, 1.,300.);
	glMatrixMode(GL_MODELVIEW);
}

void mySpecialKeyboard(int key, int x, int y) {
	switch (key) {
		case GLUT_KEY_UP:
			t2 += 1;
		break;
		case GLUT_KEY_DOWN:
			t2 += -1;
		break;
		case GLUT_KEY_LEFT:
			tl += -1;
		break;
		case GLUT_KEY_RIGHT:
			tl += 1;
		break;
		case GLUT_KEY_PAGE_UP:
			tx += 1;
			ty += 1;
			tz += 1;
		break;
		case GLUT_KEY_PAGE_DOWN:
			tz -= 1;
			tx -= 1;
			ty -= 1;
		break;
		case GLUT_KEY_HOME:
			sx = 0;
			sy = 1;
			sz = 0;
			sudut += 10;
		break;
		case GLUT_KEY_END:
			sx = 1;
			sy = 0;
			sz = 0;
			sudut += 10;
		break;
	}
}
void update(int value) {
	glutPostRedisplay();
	glutTimerFunc(50, update, 0);
}
void main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH |
		GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(w, h);
	glutCreateWindow("2018112 Raflizar Deswandi Yahya");
	glutDisplayFunc(display);
	init();
	glutTimerFunc(50, update, 0);
	glutSpecialFunc(mySpecialKeyboard);
	glutMainLoop();
}