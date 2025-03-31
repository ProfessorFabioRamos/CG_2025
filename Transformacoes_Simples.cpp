#include <GL/glut.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glTranslatef(0.01f, 0.01f, 0);
	//glRotatef(0.1f, 0, 0, 1);
	//glScalef(1.001f,1.001f, 1);

	glColor3f(0, 0, 1);
	glBegin(GL_QUADS);
		glVertex2f(10, 10);
		glVertex2f(10, -10);
		glVertex2f(-10, -10);
		glVertex2f(-10, 10);
	glEnd();
	glFlush();
}

void animar(int timer) {
	glutPostRedisplay();
	glutTimerFunc(timer, animar, 0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(640, 640);
	glutCreateWindow("Transformacoes");
	glutDisplayFunc(display);
	glutTimerFunc(200, animar, 0);
	gluOrtho2D(-100, 100, -100, 100);
	glClearColor(1, 1, 1, 0);
	glutMainLoop();
	return 0;
}
