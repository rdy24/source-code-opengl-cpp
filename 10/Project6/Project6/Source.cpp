#include <windows.h>
#include <glut.h>

float _angle = -70.0f;

void teapot() {
	glTranslatef(1.5, 1.5, 0);
	glRotatef(30, 0, 0, 1);
	glutSolidTeapot(1);
}

void bola() {
	glTranslatef(1.5, 1.5, 0);
	glutSolidSphere(1, 10, 10);
}

void meja() {
	glColor3f(0.9f, 0.1f, 0.3f);
	glBegin(GL_QUADS);

	//Front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-3.0f, -0.3f, 3.0f);
	glVertex3f(3.0f, -0.3f, 3.0f);
	glVertex3f(3.0f, 0.3f, 3.0f);
	glVertex3f(-3.0f, 0.3f, 3.0f);

	//Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(3.0f, -0.3f, -3.0f);
	glVertex3f(3.0f, 0.3f, -3.0f);
	glVertex3f(3.0f, 0.3f, 3.0f);
	glVertex3f(3.0f, -0.3f, 3.0f);

	//Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glVertex3f(-3.0f, -0.3f, -3.0f);
	glVertex3f(-3.0f, 0.3f, -3.0f);
	glVertex3f(3.0f, 0.3f, -3.0f);
	glVertex3f(3.0f, -0.3f, -3.0f);

	//Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glVertex3f(-3.0f, -0.3f, -3.0f);
	glVertex3f(-3.0f, -0.3f, 3.0f);
	glVertex3f(-3.0f, 0.3f, 3.0f);
	glVertex3f(-3.0f, 0.3f, -3.0f);

	//top
	glNormal3f(0.0f, 1.0f, 0.0f);

	glVertex3f(3.0f, 0.3f, 3.0f);
	glVertex3f(-3.0f, 0.3f, 3.0f);
	glVertex3f(-3.0f, 0.3f, -3.0f);
	glVertex3f(3.0f, 0.3f, -3.0f);

	//bottom
	glNormal3f(0.0f, -1.0f, 0.0f);

	glVertex3f(3.0f, -0.3f, 3.0f);
	glVertex3f(-3.0f, -0.3f, 3.0f);
	glVertex3f(-3.0f, -0.3f, -3.0f);
	glVertex3f(3.0f, -0.3f, -3.0f);

	//table front leg
	//front
	glNormal3f(0.0f, 0.0f, 1.0f);

	glVertex3f(1.9f, -0.3f, 1.7f);
	glVertex3f(1.5f, -0.3f, 1.7f);
	glVertex3f(1.5f, -4.0f, 1.7f);
	glVertex3f(1.9f, -4.0f, 1.7f);

	//back
	glNormal3f(0.0f, 0.0f, -1.0f);

	glVertex3f(1.9f, -0.3f, 1.3f);
	glVertex3f(1.5f, -0.3f, 1.3f);
	glVertex3f(1.5f, -4.0f, 1.3f);
	glVertex3f(1.9f, -4.0f, 1.3f);

	//right
	glNormal3f(1.0f, 0.0f, 0.0f);

	glVertex3f(1.9f, -0.3f, 1.7f);
	glVertex3f(1.9f, -0.3f, 1.3f);
	glVertex3f(1.9f, -4.0f, 1.3f);
	glVertex3f(1.9f, -4.0f, 1.7f);

	//left
	glNormal3f(-1.0f, 0.0f, 0.0f);

	glVertex3f(1.5f, -0.3f, 1.7f);
	glVertex3f(1.5f, -0.3f, 1.3f);
	glVertex3f(1.5f, -4.0f, 1.3f);
	glVertex3f(1.5f, -4.0f, 1.7f);

	//back leg back
	//front
	glNormal3f(0.0f, 0.0f, -1.0f);

	glVertex3f(1.9f, -0.3f, -1.3f);
	glVertex3f(1.5f, -0.3f, -1.3f);
	glVertex3f(1.5f, -4.0f, -1.3f);
	glVertex3f(1.9f, -4.0f, -1.3f);

	//back
	glNormal3f(0.0f, 0.0f, -1.0f);

	glVertex3f(1.9f, -0.3f, -1.7f);
	glVertex3f(1.5f, -0.3f, -1.7f);
	glVertex3f(1.5f, -4.0f, -1.7f);
	glVertex3f(1.9f, -4.0f, -1.7f);

	//right
	glNormal3f(1.0f, 0.0f, 0.0f);

	glVertex3f(1.9f, -0.3f, -1.7f);
	glVertex3f(1.9f, -0.3f, -1.3f);
	glVertex3f(1.9f, -4.0f, -1.3f);
	glVertex3f(1.9f, -4.0f, -1.7f);

	//left
	glNormal3f(1.0f, 0.0f, 0.0f);

	glVertex3f(1.5f, -0.3f, -1.7f);
	glVertex3f(1.5f, -0.3f, -1.3f);
	glVertex3f(1.5f, -4.0f, -1.3f);
	glVertex3f(1.5f, -4.0f, -1.7f);

	//leg left front
	glNormal3f(0.0f, 0.0f, 1.0f);

	glVertex3f(-1.9f, -0.3f, 1.7f);
	glVertex3f(-1.5f, -0.3f, 1.7f);
	glVertex3f(-1.5f, -4.0f, 1.7f);
	glVertex3f(-1.9f, -4.0f, 1.7f);

	//back
	glNormal3f(0.0f, 0.0f, -1.0f);

	glVertex3f(-1.9f, -0.3f, 1.5f);
	glVertex3f(-1.5f, -0.3f, 1.5f);
	glVertex3f(-1.5f, -4.0f, 1.5f);
	glVertex3f(-1.9f, -4.0f, 1.5f);

	//right
	glNormal3f(1.0f, 0.0f, 0.0f);

	glVertex3f(-1.9f, -0.3f, 1.7f);
	glVertex3f(-1.9f, -0.3f, 1.3f);
	glVertex3f(-1.9f, -4.0f, 1.3f);
	glVertex3f(-1.9f, -4.0f, 1.7f);

	//left
	glNormal3f(-1.0f, 0.0f, 0.0f);

	glVertex3f(-1.5f, -0.3f, 1.7f);
	glVertex3f(-1.5f, -0.3f, 1.3f);
	glVertex3f(-1.5f, -4.0f, 1.3f);
	glVertex3f(-1.5f, -4.0f, 1.7f);

	//left leg back front

	//front
	glNormal3f(0.0f, 0.0f, -1.0f);

	glVertex3f(-1.9f, -0.3f, -1.3f);
	glVertex3f(-1.5f, -0.3f, -1.3f);
	glVertex3f(-1.5f, -4.0f, -1.3f);
	glVertex3f(-1.9f, -4.0f, -1.3f);

	//back
	glNormal3f(0.0f, 0.0f, -1.0f);

	glVertex3f(-1.9f, -0.3f, -1.7f);
	glVertex3f(-1.5f, -0.3f, -1.7f);
	glVertex3f(-1.5f, -4.0f, -1.7f);
	glVertex3f(-1.9f, -4.0f, -1.7f);

	//right
	glNormal3f(1.0f, 0.0f, 0.0f);

	glVertex3f(-1.9f, -0.3f, -1.7f);
	glVertex3f(-1.9f, -0.3f, -1.3f);
	glVertex3f(-1.9f, -4.0f, -1.3f);
	glVertex3f(-1.9f, -4.0f, -1.7f);

	//left
	glNormal3f(-1.0f, 0.0f, 0.0f);

	glVertex3f(-1.5f, -0.3f, -1.7f);
	glVertex3f(-1.5f, -0.3f, -1.3f);
	glVertex3f(-1.5f, -4.0f, -1.3f);
	glVertex3f(-1.5f, -4.0f, -1.7f);


	glEnd();
}


//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING); //Enable lighting
	glEnable(GL_LIGHT0); //Enable light #0
	glEnable(GL_LIGHT1); //Enable light #1
	glEnable(GL_NORMALIZE); //Automatically normalize normals
	glShadeModel(GL_SMOOTH); //Enable smooth shading
}

//Called when the window is resized
void handleResize(int w, int h) {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}



//Draws the 3D scene
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW); // keep it like this
	glLoadIdentity();

	glTranslatef(0.0f, 0.0f, -14.0f);

	//Add ambient light
	GLfloat ambientColor[] = { 0.2f, 0.2f, 0.2f, 1.0f }; //Color (0.2, 0.2, 0.2)
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientColor);

	//Add positioned light
	GLfloat lightColor0[] = { 0.5f, 0.5f, 0.5f, 1.0f }; //Color (0.5, 0.5, 0.5)
	GLfloat lightPos0[] = { 0.0f, -8.0f, 8.0f, 1.0f }; //Positioned at (4, 0, 8)
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor0);
	glLightfv(GL_LIGHT0, GL_POSITION, lightPos0);

	//Add directed light
	GLfloat lightColor1[] = { 0.5f, 0.2f, 0.2f, 1.0f }; //Color (0.5, 0.2, 0.2)
	//Coming from the direction (-1, 0.5, 0.5)
	GLfloat lightPos1[] = { -1.0f, 0.5f, 0.5f, 0.0f };
	glLightfv(GL_LIGHT1, GL_DIFFUSE, lightColor1);
	glLightfv(GL_LIGHT1, GL_POSITION, lightPos1);

	
	meja();
	teapot();
	// memulai definisi objek
	glBegin(GL_TRIANGLE_STRIP);

	// membuat sisi atas mangkuk
	glColor3f(1.0, 0.0, 0.0); // warna merah
	glVertex3f(0.0, 1.0, 0.0);
	glVertex3f(-1.0, 0.0, 1.0);
	glVertex3f(1.0, 0.0, 1.0);

	// membuat sisi depan mangkuk
	glColor3f(0.0, 1.0, 0.0); // warna hijau
	glVertex3f(1.0, 0.0, -1.0);

	// membuat sisi bawah mangkuk
	glColor3f(0.0, 0.0, 1.0); // warna biru
	glVertex3f(-1.0, 0.0, -1.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();
	glutSwapBuffers();
}

void update(int value) {
	_angle += 1.5f;
	if (_angle > 360) {
		_angle -= 360;
	}

	glutPostRedisplay();
	glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(600, 600);

	//Create the window
	glutCreateWindow("Lighting");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);

	update(0);

	glutMainLoop();
	return 0;
}