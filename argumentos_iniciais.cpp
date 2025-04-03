#include <GL/glut.h>
#include <cstdlib> // Para std::atoi
#include <iostream>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(100, 300);
    glVertex2f(100, 100);
    glVertex2f(200, 100);
    glVertex2f(200, 300);
    glEnd();
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    // Definições padrão
    int windowWidth = 640;
    int windowHeight = 640;
    const char* windowTitle = "OpenGL";

    // Processando argumentos da linha de comando
    if (argc > 1) windowWidth = std::atoi(argv[1]);
    if (argc > 2) windowHeight = std::atoi(argv[2]);
    if (argc > 3) windowTitle = argv[3];

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow(windowTitle);
    glutDisplayFunc(display);
    gluOrtho2D(0, windowWidth, 0, windowHeight);
    glClearColor(0.5, 0.7, 0.5, 0);
    glutMainLoop();
    return 0;
}
