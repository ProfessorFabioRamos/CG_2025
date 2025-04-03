#include <GL/glut.h>
#include <iostream>

using namespace std;

float x_position;
float y_position;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
		glVertex2f(10 + x_position, 10 + y_position);
		glVertex2f(10 + x_position, -10 + y_position);
		glVertex2f(-10 + x_position, -10 + y_position);
		glVertex2f(-10 + x_position, 10 + y_position);
	glEnd();
	glFlush();
}
void teclado(unsigned char key, int x, int y) {
	cout << int(key)<<"\n";
	if (key == 100) // letra d
		x_position += 1.0f;
	else if (key == 97) //letra a
		x_position -= 1.0f;
	else if (key == 119) //letra w
		y_position += 1.0f;
	else if (key == 115) //letra s
		y_position -= 1.0f;
	else if (key == 27)
		exit(0);
	glutPostRedisplay();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(640, 640);
	glutCreateWindow("Keyboard");
	glutDisplayFunc(display);
	glutKeyboardFunc(teclado);
	gluOrtho2D(-100, 100, -100, 100);
	glClearColor(1, 1, 1, 0);
	glutMainLoop();
	return 0;
}
