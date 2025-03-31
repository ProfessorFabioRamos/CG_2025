#include <GL/glut.h>
float x_position;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
		glVertex2f(10 + x_position, 10);
		glVertex2f(10 + x_position, -10);
		glVertex2f(-10 + x_position, -10);
		glVertex2f(-10+ x_position, 10);
	glEnd();
	glFlush();
}
void teclado(unsigned char key, int x, int y) {
	if (key == 100) { // letra d
		x_position += 1.0f;
	}
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
