#include <GL/glut.h>
#include <math.h>
#include <iostream>

using namespace std;

float pi = 3.14159;

void circulo(float raio) {
	float angle;
	int i;
	glBegin(GL_POLYGON);
	for (i = 0; i < 360; i++) {
		angle = i * pi / 180;
		glVertex2f(raio * cos(angle), raio * sin(angle));
		cout <<" X: "<< raio * cos(angle)<<" Y: "<< raio * sin(angle)<<"\n";
	}
	glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);
	circulo(50.0f);
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE| GLUT_RGBA);
	glutInitWindowSize(640, 640);
	glutCreateWindow("Circulo");
	glutDisplayFunc(display);
	gluOrtho2D(-100, 100, -100, 100);
	glClearColor(1, 1, 1, 0);
	glutMainLoop();
	return 0;
}
