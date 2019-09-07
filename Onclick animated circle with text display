#include<GL/Glut.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>


int flag = 0;
float x,y,theta=0,red,grn,blu=0.5;


      
void Click(int button,int state, int bx , int by)
{
if(button==GLUT_LEFT_BUTTON && state == GLUT_UP)
{
flag = 1;
x=bx;
y=480-by;

}

glutPostRedisplay();
}

void BitmapText(char * string , float x , float y)
{
char c;
int i=0;
glRasterPos2f(x,y);

for(i=0;string[i]!='\0';i++)
{   
   c= string[i];
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,c);
}
}

void render()
{
//glClear(GL_COLOR_BUFFER_BIT); 
//glLoadIdentity();
    glColor3f(1,0,0);
BitmapText("Anukruti Mathur",550,30);
BitmapText("500060308",550,20);
glutSwapBuffers();
    
}

float r=10;
int i=0,state=1;

void display()
{
glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
     
render();   
glClear(GL_COLOR_BUFFER_BIT);

 if(flag==1)
  {

glBegin(GL_POLYGON);  
glColor3f(red,grn,blu);

 for (i=0;i<360;i+=45)
 {
   theta = 3.14*i/90;
   glVertex2f(x+r*cos(theta),y+r*sin(theta));
 }
 
 glEnd();
  }
 glutSwapBuffers();
render(); 
}


void timer()
{

glutPostRedisplay();
glutTimerFunc(500/60,timer,0);

switch(state)
{
case 1:
if(r>0&&r<100)
{
 r=r+0.9;
   }
else
state=-1;
break;

case -1:
if(r>=1)
{
r=r-0.9;
   }
else
state=1;
break;	
}
}


void main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitWindowSize(640,480);
glutInitWindowPosition(10,10);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
glutCreateWindow("MousClick Increasing Diamond");

glClearColor(0.9,0.9,0.9,0);
glClear(GL_COLOR_BUFFER_BIT); 
    glutMouseFunc(Click);//keyboard event handler
    glutDisplayFunc(display);
    glutTimerFunc(500,timer,0);
    glutMainLoop();//loops the current event
}

