#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glLineWidth(2.0f);
    glColor3ub(0, 255, 0);
    //glutWireCube(50);
    //glutSolidCube(50);
    //glRotatef(-90, 1, 0, 0);
    //glutWireCone(20, 60, 6, 2);
    //glutWireSphere(30, 40, 40);
    //glutWireTorus(20, 60, 30, 30);
    //glutWireTeapot(30);
    //glutSolidTeapot(30);

    glBegin(GL_QUADS);
    // Frente
    glVertex3f(-25.0f, -25.0f, 25.0f);
    glVertex3f(25.0f, -25.0f, 25.0f);
    glVertex3f(25.0f, 25.0f, 25.0f);
    glVertex3f(-25.0f, 25.0f, 25.0f);

    // Trás
    glVertex3f(-25.0f, -25.0f, -25.0f);
    glVertex3f(-25.0f, 25.0f, -25.0f);
    glVertex3f(25.0f, 25.0f, -25.0f);
    glVertex3f(25.0f, -25.0f, -25.0f);

    // Esquerda
    glVertex3f(-25.0f, -25.0f, -25.0f);
    glVertex3f(-25.0f, -25.0f, 25.0f);
    glVertex3f(-25.0f, 25.0f, 25.0f);
    glVertex3f(-25.0f, 25.0f, -25.0f);

    // Direita
    glVertex3f(25.0f, -25.0f, -25.0f);
    glVertex3f(25.0f, 25.0f, -25.0f);
    glVertex3f(25.0f, 25.0f, 25.0f);
    glVertex3f(25.0f, -25.0f, 25.0f);

    // Topo
    glVertex3f(-25.0f, 25.0f, -25.0f);
    glVertex3f(-25.0f, 25.0f, 25.0f);
    glVertex3f(25.0f, 25.0f, 25.0f);
    glVertex3f(25.0f, 25.0f, -25.0f);

    // Base
    glVertex3f(-25.0f, -25.0f, -25.0f);
    glVertex3f(25.0f, -25.0f, -25.0f);
    glVertex3f(25.0f, -25.0f, 25.0f);
    glVertex3f(-25.0f, -25.0f, 25.0f);
    glEnd();

    glFlush();
}

void tela(GLsizei largura, GLsizei altura) {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluPerspective(50, largura / altura, 0.4f, 500);
    gluLookAt(100, 100, 200,
        0, 0, 0,
        0, 1, 0);
}

int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(640, 640);
    glutCreateWindow("3D");
    glutDisplayFunc(display);
    glutReshapeFunc(tela);
    glClearColor(0, 0, 0, 0);
    glutMainLoop();
    return 0;
}
