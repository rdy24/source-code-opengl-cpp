//#include "Refleksi.h"
//void main(int argc, char** argv)
//{
//	cout << "masukan jumlah titik: "; cin >> edges;
//	for (int i = 0; i < edges; i++)
//	{
//		cout << "masukkan koordinat :" << i + 1 << ":";
//		cin >> pntX1 >> pntY1; // nilai koordinat
//		pntX.push_back(pntX1); //memasukkan nilai koordinat kedalam vektor
//		pntY.push_back(pntY1);
//	}
//	cout << "Pilih sumbu refleksi (x or y) :";
//	cin >> reflectionAxis;
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowSize(640, 480);
//	glutInitWindowPosition(100, 150);
//	glutCreateWindow("tes");
//	glutDisplayFunc(myDisplay);
//	myInit();
//	glutMainLoop();
//}


#include "Shear.h"
void main(int argc, char** argv)
{
	cout << "masukan jumlah titik: "; cin >> edges;
	for (int i = 0; i < edges; i++)
	{
		cout << "masukan kordinat : " << i + 1 << " : ";
		cin >> pntX1 >> pntY1;
		pntX.push_back(pntX1);
		pntY.push_back(pntY1);
	}
	cout << "Enter reflection axis ( x or y ): "; cin >>
		shearingAxis;
	if (shearingAxis == 'x' || shearingAxis == 'X')
	{
		cout << "masukan shearing factor untuk X: ";
		cin >> shearingX;
	}
	else
	{
		cout << "masukan shearing factor untuk Y: ";
		cin >> shearingY;
	}
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("2018049");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}