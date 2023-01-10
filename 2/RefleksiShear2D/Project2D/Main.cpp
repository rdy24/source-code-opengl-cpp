#include "Header.h"

void main(int argc, char** argv) {
	garis();
	cout << "\n\tPilih salah satu" << endl;
	cout << "1. Refleksi" << endl;
	cout << "2. Shear" << endl;
	garis();

	cout << "\nMasukan Pilihan anda : "; cin >> choice;
	switch (choice) {
	case 1: 
		cout << "Masukan Jumlah titik : "; cin >> edges;
		for (int i = 0; i < edges; i++) {
			cout << "Masukan Koordinat " << i + 1 << " : "; cin >> pntX1 >> pntY1;
			pntX.push_back(pntX1);
			pntY.push_back(pntY1);
		}
		garis();

		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(500, 500);
		glutInitWindowPosition(100, 150);
		glutCreateWindow("2018112"); 
		glutDisplayFunc(displayMirror);
		myInit();
		glutMainLoop();
		break;
	case 2:
		cout << "masukan jumlah titik: "; cin >> edges;
		for (int i = 0; i < edges; i++)
		{
			cout << "masukan kordinat : " << i + 1 << " : "; cin >> pntX1 >> pntY1;
			pntX.push_back(pntX1);
			pntY.push_back(pntY1);
		}
		garis();
		cout << "\nmasukan shearing factor untuk X: "; cin >> shearingX;
		cout << "\nmasukan shearing factor untuk Y: "; cin >> shearingY;

		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(500, 500);
		glutInitWindowPosition(100, 150);
		glutCreateWindow("2018112");
		glutDisplayFunc(displayShearing);
		myInit();
		glutMainLoop();
		break;

	default:
		break;
	}
}
