#include<stdlib.h>
#include<stdio.h>
#include<GL/glut.h>
#define dx 10
#define dy 10
GLfloat r=0.0,g=0.0,b=0.0,br=0.0,bg=0.0,bb=0.0;
void display()
{
  GLint i,j;
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(r,g,b);
for(i=10;i<300;i+=dx)
 for(j=10;j<300;j+=dy)
{  
glBegin(GL_LINE_LOOP);
   glVertex2i(i,j);
   glVertex2i(i+dx,j);
   glVertex2i(i+dx,j+dy);
   glVertex2i(i,j+dy);
glEnd();
}
glFlush();
}


//Main program
int main(int argc, char **argv)
{
printf("enter r g b color");
scanf("%f%f%f",&r,&g,&b);
printf("enter backround color\n");
scanf("%f%f%f",&br,&bg,&bb);
  glutInit(&argc, argv);
  //Simple buffer
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
  glutInitWindowPosition(100,200);
  glutInitWindowSize(1000,700);
  glutCreateWindow("Rectanglur mesh");
  glClearColor(br,bg,bb,0.0);
  glMatrixMode(GL_PROJECTION);
  
gluOrtho2D(0.0,500.0,500.0,0.0);

  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
