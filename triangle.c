#include<GL/glut.h>
#include<stdio.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_TRIANGLES);
glColor3f(0.00,1.00,0.00);
glVertex2f(0.0, 0.0);
glVertex2f(0.5,0.0);
glVertex2f(0.25, 0.25);
glEnd();
glFlush();
}

int main(int argc,char** argv)
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(0,0);
    glutCreateWindow("triangle");
    glutDisplayFunc(display);
   
    glutMainLoop();
    return 0;
} 
