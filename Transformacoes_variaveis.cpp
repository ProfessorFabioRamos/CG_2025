#include <GL/glut.h>

float x_position = 0.0f;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 0, 1);
	//glTranslatef(x_position, 0, 0);
	//glRotatef(0.1f, 0, 0, 1);
	//glScalef(1, 1, 1.1f);

	glBegin(GL_QUADS);
		glVertex2f(10 + x_position, 10);
		glVertex2f(10 + x_position, -10);
		glVertex2f(-10 + x_position, -10);
		glVertex2f(-10 + x_position, 10);
	glEnd();
	glFlush();
}
void animar(int timer) {
	glutPostRedisplay();
	x_position += 0.00001f;
	glutTimerFunc(timer, animar, 0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE| GLUT_RGBA);
	glutInitWindowSize(640, 640);
	glutCreateWindow("Transformacoes");
	glutDisplayFunc(display);
	glutTimerFunc(1000, animar, 0);
	gluOrtho2D(-100, 100, -100, 100);
	glClearColor(1, 1, 1, 0);
	glutMainLoop();
	return 0;
}
