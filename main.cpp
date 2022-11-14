#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>

double Txval=0;
double Tyval=0;
double sval=1.5;
double txval=0,txval1=0,txvalC=0,txval1C=0, txvalS=0,txval1S=0,txvalCC=0,txvallCC=0;
bool flagScale=false;
double  r=0.07,s=0.1,l=0.03;
int i;
float  tx=10,bx=10,rx=10;

void road()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.3,0.1,0);
    glVertex2f(-65,-40);
    glVertex2f(-65,-60);
    glVertex2f(65,-60);
    glVertex2f(65,-40);
    glEnd();
    glPopMatrix();

}

void Zebra()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-60,-50.5);
    glVertex2f(-55,-50.5);
    glVertex2f(-55,-49.5);
    glVertex2f(-60,-49.5);
    glEnd();
    glPopMatrix();
}


void car()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(-45,-55);
    glVertex2f(-28,-55);
    glVertex2f(-28,-50);
    glVertex2f(-45,-50);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,1,0);
    glVertex2f(-42,-50);
    glVertex2f(-37,-50);
    glVertex2f(-37,-47);
    glVertex2f(-40,-47);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);

    glVertex2f(-36,-50);
    glVertex2f(-31,-50);
    glVertex2f(-33,-47);
    glVertex2f(-36,-47);
    glEnd();
    glPopMatrix();

        glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(-37,-50);
    glVertex2f(-36,-50);
    glVertex2f(-36,-47);
    glVertex2f(-37,-47);
    glEnd();
    glPopMatrix();


}

void cakka(double x, double y)
{


    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*l;
            y=y+sin((i*3.14)/180)*l;

            glVertex2d(x,y);

        }


    glEnd();



}

void field1()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.9,0);
    glVertex2f(-65,-40);
    glVertex2f(-40,-40);
    glVertex2f(-53,-30);
    glVertex2f(-49,-25);
    glVertex2f(-60,-10);
    glVertex2f(-55,0);
    glVertex2f(-65,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.9,0);
    glVertex2f(-7,-40);
    glVertex2f(65,-40);
    glVertex2f(65,-25);
    glVertex2f(55,-20);
    glVertex2f(25,-20);
    glVertex2f(20,-25);
    glVertex2f(15,-20);
    glVertex2f(-12,-20);
    glVertex2f(-8,-27);
    glVertex2f(-17,-33);
    glEnd();
    glPopMatrix();

}
void river()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3f(0.3,0.8,1);
     glVertex2f(-55,0);
     glVertex2f(-12,-20);
     glVertex2f(15,-20);
     glVertex2f(20,-25);
     glVertex2f(25,-20);
     glVertex2f(55,-20);
     glVertex2f(65,-25);
     glVertex2f(65,10);
     glVertex2f(-65,10);
     glVertex2f(-65,0);
    glEnd();
    glPopMatrix();
}
void boat()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(17,0);
    glVertex2f(23,-5);
    glVertex2f(35,-5);
    glVertex2f(40,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0,0,1);
    glVertex2f(20,0);
    glVertex2f(23,5);
    glVertex2f(25,0);
    glEnd();
    glPopMatrix();

   glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1 ,0,0);
    glVertex2f(23,5);
    glVertex2f(25,0);
    glVertex2f(37,0);
    glVertex2f(34,5);
    glEnd();
    glPopMatrix();

}
void khuti()
{
    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(6.5,-10);
    glVertex2f(6.5,-23);
    glEnd();
    glPopMatrix();
}

void house_1()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(-55,0);
    glVertex2f(-60,-6);
    glVertex2f(-42,-6);
    glVertex2f(-37,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex2f(-59,-6);
    glVertex2f(-59,-16);
    glVertex2f(-42,-16);
    glVertex2f(-42,-6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,0);
    glVertex2f(-42,-6);
    glVertex2f(-42,-16);
    glVertex2f(-32,-16);
    glVertex2f(-32,-6);
    glVertex2f(-37,0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-42,-6);
    glVertex2f(-32,-6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0,1);
    glVertex2f(-53,-16);
    glVertex2f(-48,-16);
    glVertex2f(-48,-9);
    glVertex2f(-53,-9);
    glEnd();
    glPopMatrix();



}

void house_2()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,0,1);
    glVertex2f(-30,-5);
    glVertex2f(-35,-10);
    glVertex2f(-20,-10);
    glVertex2f(-15,-5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8,0.4,0.1);
    glVertex2f(-34,-10);
    glVertex2f(-34,-20);
    glVertex2f(-20,-20);
    glVertex2f(-20,-10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2f(-15,-5);
    glVertex2f(-20,-10);
    glVertex2f(-20,-20);
    glVertex2f(-10,-20);
    glVertex2f(-10,-10);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-20,-10);
    glVertex2f(-10,-10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(-29,-20);
    glVertex2f(-24,-20);
    glVertex2f(-24,-15);
    glVertex2f(-29,-15);
    glEnd();
    glPopMatrix();


}

void field_2()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.2,0.2);
    glVertex2f(-56,-16);
    glVertex2f(-49,-25);
    glVertex2f(-53,-30);
    glVertex2f(-40,-40);
    glVertex2f(-7,-40);
    glVertex2f(-17,-33);
    glVertex2f(-8,-27);
    glVertex2f(-12,-20);
    glVertex2f(-34,-20.5);
    glVertex2f(-34,-16);
    glEnd();
    glPopMatrix();
}

void sky()
{
    glPushMatrix();
    glBegin(GL_QUADS);
   glColor3f(0,0.3,0.9);
   glVertex2f(-65,10);
   glVertex2f(65,10);
   glVertex2f(65,60);
   glVertex2f(-65,60);
   glEnd();
   glPopMatrix();
}

void sun(double x, double y)
{


    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*s;
            y=y+sin((i*3.14)/180)*s;

            glVertex2f(x,y);

        }


    glEnd();



}

void cloud(double x, double y)
{


    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*r;
            y=y+sin((i*3.14)/180)*r;

            glVertex2d(x,y);

        }


    glEnd();



}

void tree()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.2,0,0);
    glVertex2f(-60,0);
    glVertex2f(-60,-25);
    glVertex2f(-55,-25);
    glVertex2f(-55,0);


    glEnd();
    glPopMatrix();
}

void hill()
{
    glPushMatrix;
    glBegin(GL_TRIANGLES);
    glColor3f(0.4,0.1,0.1);
    glVertex2f(-15,10);
    glVertex2f(0,40);
    glVertex2f(40,10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4,0.1,0.2);
    glVertex2f(20,10);
    glVertex2f(40,33);
    glVertex2f(65,10);
    glVertex2f(65,20);
    glEnd();
    glPopMatrix();

}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-65,65,-60,60);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glPushMatrix();
    road();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    Zebra();
    glEnd();

    glPushMatrix();

    Zebra();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(10,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(20,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(30,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(40,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(50,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(60,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(70,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(80,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(90,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(100,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

        glPushMatrix();
    glTranslatef(110,0,0);
    Zebra();
    glPopMatrix();
    glEnd();

    glPushMatrix();
     glTranslatef(txvalC,0,0);
    car();
     glColor3f(0,0,0);
       cakka(-40.5,-57);
    cakka(-32,-57);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    field1();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    river();
    glEnd();
    glPopMatrix();

    glPushMatrix();
      glTranslatef(txvalS,0,0);
    boat();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-12,-15,0);
    boat();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    khuti();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    house_1();
    glEnd();
    glPopMatrix();

        glPushMatrix();
    field_2();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    house_2();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    sky();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,215,0);
    glTranslatef(txvalS,0,0);
    sun(35,45);
    glPopMatrix();

        glPushMatrix();
	glColor3ub(220,220,220);
	glTranslatef(txvalC,0,0);
	cloud(-45,45);
	cloud(-47,43);
	cloud(-40,42);
	cloud(-48,47);
	cloud(-39,48);
	cloud(-36,45);
	glPopMatrix();

    glPushMatrix();
    tree();
    glTranslatef(-10,0,0);
    glColor3ub(3, 75, 3);

    cloud(-47,3);
    cloud(-44,-2);
    cloud(-48,-2);
    cloud(-52,-2);
     cloud(-50,3);
     cloud(-45,3);
     cloud(-47,9);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    hill();
    glEnd();
    glPopMatrix();

           glFlush();
    glutSwapBuffers();
}

void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {

    case 'R':
        flagScale=true;
        break;
    case 'r':
        flagScale=false;
        break;



    case 27:	// Escape key
        exit(1);
    }
    glutPostRedisplay();
}

void animate()
{
	if (flagScale == true)
	{
		//txval-= 0.005;
		txval+= 0.2;
		if(txval > 60){
           txval = -60;
			//txval1 = 1;
		}

		txvalC += 0.01;
		if(txvalC >= 120){
           txvalC = -120;
			//txval1 = 1;
		}

		txvalS -= 0.01;
		if(txvalS <= -120){
           txvalS = 60;
			//txval1 = 1;
		}

		//cloud circle txvalCC
		 txvalCC-= 0.01;
		if(txvalCC < -60){
           txvalCC = 60;
			//txval1 = 1;
		}



	}
	if (flagScale == false)
	{
		txval = 0;
		txval1 = 0;

		txvalC = 0;
		txval1C = 0;

		txvalS = 0;
		txval1S = 0;

		//circle cloud

		txvalCC=0;
		txvallCC=0;

	}

	glutPostRedisplay();
}


int main (int argc, char **argv)
{
glutInit(&argc, argv);
glutInitWindowSize(1200,800);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode

glutInitWindowPosition(10,10);
//glutInitWindowSize(windowWidth, windowHeight);
glutCreateWindow("fainal senario");
glShadeModel( GL_SMOOTH );
glEnable( GL_DEPTH_TEST );

//car animation
glutKeyboardFunc(myKeyboardFunc);
glutIdleFunc(animate);



glutDisplayFunc(display);



glDepthFunc(GL_LEQUAL);    // Set the type of depth-test

glutMainLoop();
return 0;
}
