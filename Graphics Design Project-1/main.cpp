#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

float p = 0;
float r = 0;
float q = 0;
void init(void)
{
    glClearColor(0.3,0.5,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,1000.0,0.0,1000.0);

}
void circle(GLfloat rx,GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0; i<=100; i++)
    {
        float angle = 2.0f*3.1416f*i/100;
        float x = rx*cosf(angle);
        float y = ry*sinf(angle);
        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}
void ship()
{
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);///small boat1
    glVertex2f(q, 570);
    glVertex2f(q+100, 570);
    glVertex2f(q+70, 530);
    glVertex2f(q+30,530);
    glVertex2f(q,560);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(3.5, 0.0, 0.6);///small boat1 part1
    glVertex2f(q+10, 575);
    glVertex2f(q+40, 575);
    glVertex2f(q+40,600);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(3.5, 0.0, 0.6);///small boat1 part2
    glVertex2f(q+45, 575);
    glVertex2f(q+90, 575);
    glVertex2f(q+45,610);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);///small boat2
    glVertex2f(r, 550);
    glVertex2f(r+100, 550);
    glVertex2f(r+70, 510);
    glVertex2f(r+30,510);
    glVertex2f(r,500);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.0, 0.6);///small boat2 part1
    glVertex2f(r+10, 555);
    glVertex2f(r+40, 555);
    glVertex2f(r+40,590);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.0, 0.6);///small boat2 part2
    glVertex2f(r+45, 555);
    glVertex2f(r+90, 555);
    glVertex2f(r+45,600);
    glEnd();



    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);///ship
    glVertex2f(p, 550);
    glVertex2f(p+200, 550);
    glVertex2f(p+150, 450);
    glVertex2f(p+50,450);
    glVertex2f(p,550);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.5);///ship
    glVertex2f(p+40, 550);
    glVertex2f(p+160, 550);
    glVertex2f(p+160, 600);
    glVertex2f(p+40,600);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);///ship window1
    glVertex2f(p+50, 580);
    glVertex2f(p+60, 580);
    glVertex2f(p+60, 560);
    glVertex2f(p+50,560);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);///ship window2
    glVertex2f(p+70, 580);
    glVertex2f(p+80, 580);
    glVertex2f(p+80, 560);
    glVertex2f(p+70,560);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);///ship window3
    glVertex2f(p+90, 580);
    glVertex2f(p+100, 580);
    glVertex2f(p+100, 560);
    glVertex2f(p+90,560);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);///ship window4
    glVertex2f(p+110, 580);
    glVertex2f(p+120, 580);
    glVertex2f(p+120, 560);
    glVertex2f(p+110,560);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);///ship window5
    glVertex2f(p+130, 580);
    glVertex2f(p+150, 580);
    glVertex2f(p+150, 560);
    glVertex2f(p+130,560);
    glEnd();



    glBegin(GL_QUADS);
    glColor3f(0.5, 0.3, 0.0);///tower1
    glVertex2f(p+50, 600);
    glVertex2f(p+70, 600);
    glVertex2f(p+70, 650);
    glVertex2f(p+50,650);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.3, 0.0);///tower2
    glVertex2f(p+80, 600);
    glVertex2f(p+100, 600);
    glVertex2f(p+100, 650);
    glVertex2f(p+80,650);
    glEnd();

    if(q<=1000)
    {
        q = q+0.02;
    }
    else
        q = 0;

    if(p<=1000)
    {
        p = p+0.04;
    }
    else
        p = 0;

    if(r<=1000)
    {
        r = r+0.03;
    }
    else
        r = 0;
}

void mountains()
{
    glColor3f(0.0,0.4,0.0);///mountain1
    glBegin(GL_POLYGON);
    glVertex2f(0,600);
    glVertex2f(200,600);
    glVertex2f(100,700);
    glEnd();

    glColor3f(0.0,0.4,0.0);///mountain2
    glBegin(GL_POLYGON);
    glVertex2f(150,600);
    glVertex2f(400,600);
    glVertex2f(275,700);
    glEnd();

    glColor3f(0.0,0.4,0.0);///mountain1
    glBegin(GL_POLYGON);
    glVertex2f(600,600);
    glVertex2f(700,600);
    glVertex2f(650,650);
    glEnd();
}

void house_1()
{
    glColor3f(1.0,1.0,1.0);///house
    glBegin(GL_POLYGON);
    glVertex2f(250,200);
    glVertex2f(400,200);
    glVertex2f(400,350);
    glVertex2f(250,350);
    glEnd();

    glColor3f(0.7,0.5,0.5);///house
    glBegin(GL_POLYGON);
    glVertex2f(400,200);
    glVertex2f(460,200);
    glVertex2f(460,350);
    glVertex2f(400,350);
    glEnd();

    glColor3f(0.5,0.5,0.5);///window1
    glBegin(GL_POLYGON);
    glVertex2f(270,250);
    glVertex2f(305,250);
    glVertex2f(305,340);
    glVertex2f(270,340);
    glEnd();

    glColor3f(0.5,0.5,0.5);///window2
    glBegin(GL_POLYGON);
    glVertex2f(345,250);
    glVertex2f(380,250);
    glVertex2f(380,340);
    glVertex2f(345,340);
    glEnd();


    glColor3f(1.3,0.5,0.0);///shade
    glBegin(GL_POLYGON);
    glVertex2f(240,350);
    glVertex2f(400,350);
    glVertex2f(430,480);
    glVertex2f(270,480);
    glEnd();

    glColor3f(1.0,1.0,1.0);///shade
    glBegin(GL_POLYGON);
    glVertex2f(400,350);
    glVertex2f(460,350);
    glVertex2f(430,480);
    glEnd();

    glColor3f(0.5,0.5,0.5);///door
    glBegin(GL_POLYGON);
    glVertex2f(420,300);
    glVertex2f(440,300);
    glVertex2f(440,200);
    glVertex2f(420,200);
    glEnd();
}
void house_2()
{
    glColor3f(1.0,1.0,1.0);///house
    glBegin(GL_POLYGON);
    glVertex2f(480,200);
    glVertex2f(600,200);
    glVertex2f(600,450);
    glVertex2f(480,450);
    glEnd();

    glColor3f(0.7,0.5,0.5);///house
    glBegin(GL_POLYGON);
    glVertex2f(600,200);
    glVertex2f(700,200);
    glVertex2f(700,450);
    glVertex2f(600,450);
    glEnd();

    glColor3f(0.5,0.5,0.5);///window1 up left
    glBegin(GL_POLYGON);
    glVertex2f(500,380);
    glVertex2f(520,380);
    glVertex2f(520,410);
    glVertex2f(500,410);
    glEnd();

    glColor3f(0.5,0.5,0.5);///window1 down left
    glBegin(GL_POLYGON);
    glVertex2f(500,340);
    glVertex2f(520,340);
    glVertex2f(520,370);
    glVertex2f(500,370);
    glEnd();

    glColor3f(0.5,0.5,0.5);///window2 up right
    glBegin(GL_POLYGON);
    glVertex2f(560,380);
    glVertex2f(580,380);
    glVertex2f(580,410);
    glVertex2f(560,410);
    glEnd();

    glColor3f(0.5,0.5,0.5);///window2 down right
    glBegin(GL_POLYGON);
    glVertex2f(560,340);
    glVertex2f(580,340);
    glVertex2f(580,370);
    glVertex2f(560,370);
    glEnd();

    glColor3f(0.5,0.5,0.5);///window3 up left
    glBegin(GL_POLYGON);
    glVertex2f(500,300);
    glVertex2f(520,300);
    glVertex2f(520,270);
    glVertex2f(500,270);
    glEnd();

    glColor3f(0.5,0.5,0.5);///window3 down left
    glBegin(GL_POLYGON);
    glVertex2f(500,260);
    glVertex2f(520,260);
    glVertex2f(520,230);
    glVertex2f(500,230);
    glEnd();

    glColor3f(0.5,0.5,0.5);///window4 up right
    glBegin(GL_POLYGON);
    glVertex2f(560,300);
    glVertex2f(580,300);
    glVertex2f(580,270);
    glVertex2f(560,270);
    glEnd();

    glColor3f(0.5,0.5,0.5);///window4 down right
    glBegin(GL_POLYGON);
    glVertex2f(560,260);
    glVertex2f(580,260);
    glVertex2f(580,230);
    glVertex2f(560,230);
    glEnd();

    glColor3f(0.5,0.5,0.5);///window5 up right
    glBegin(GL_POLYGON);
    glVertex2f(630,410);
    glVertex2f(670,410);
    glVertex2f(670,340);
    glVertex2f(630,340);
    glEnd();

    glColor3f(1.3,0.5,0.0);///house shade1
    glBegin(GL_POLYGON);
    glVertex2f(470,450);
    glVertex2f(600,450);
    glVertex2f(650,550);
    glVertex2f(520,550);
    glEnd();

    glColor3f(1.0,1.0,1.0);///house shade2
    glBegin(GL_POLYGON);
    glVertex2f(600,450);
    glVertex2f(700,450);
    glVertex2f(650,550);
    glEnd();
}

void trees()
{
    glColor3f(0.5,0.2,0.0);///tree1
    glBegin(GL_POLYGON);
    glVertex2f(795,200);
    glVertex2f(825,200);
    glVertex2f(825,450);
    glVertex2f(795,450);
    glEnd();

    glColor3f(0.0,0.4,0.0);///tree1 leaf1
    glBegin(GL_POLYGON);
    glVertex2f(720,450);
    glVertex2f(900,450);
    glVertex2f(810,570);
    glEnd();

    glColor3f(0.0,0.4,0.0);///tree1 leaf2
    glBegin(GL_POLYGON);
    glVertex2f(740,490);
    glVertex2f(880,490);
    glVertex2f(810,600);
    glEnd();

    glColor3f(0.0,0.4,0.0);///tree1 leaf3
    glBegin(GL_POLYGON);
    glVertex2f(760,530);
    glVertex2f(860,530);
    glVertex2f(810,630);
    glEnd();

    glColor3f(0.5,0.2,0.0);///tree2
    glBegin(GL_POLYGON);
    glVertex2f(900,250);
    glVertex2f(920,250);
    glVertex2f(920,500);
    glVertex2f(900,500);
    glEnd();

    glColor3f(0.0,0.4,0.0);///tree2 leaf1
    glBegin(GL_POLYGON);
    glVertex2f(840,500);
    glVertex2f(980,500);
    glVertex2f(910,600);
    glEnd();

    glColor3f(0.0,0.4,0.0);///tree2 leaf2
    glBegin(GL_POLYGON);
    glVertex2f(860,540);
    glVertex2f(960,540);
    glVertex2f(910,640);
    glEnd();

    glColor3f(0.0,0.4,0.0);///tree2 leaf3
    glBegin(GL_POLYGON);
    glVertex2f(875,580);
    glVertex2f(945,580);
    glVertex2f(910,680);
    glEnd();

    glColor3f(0.5,0.2,0.0);///tree3
    glBegin(GL_POLYGON);
    glVertex2f(150,200);
    glVertex2f(160,200);
    glVertex2f(160,240);
    glVertex2f(150,240);
    glEnd();

    glColor3f(0.0,0.4,0.0);///tree3 leaf
    glBegin(GL_POLYGON);
    glVertex2f(130,240);
    glVertex2f(180,240);
    glVertex2f(155,400);
    glEnd();

    glColor3f(0.5,0.2,0.0);///tree4
    glBegin(GL_POLYGON);
    glVertex2f(200,200);
    glVertex2f(210,200);
    glVertex2f(210,240);
    glVertex2f(200,240);
    glEnd();

    glColor3f(1.5,0.5,0.0);///tree4 leaf
    glBegin(GL_POLYGON);
    glVertex2f(185,240);
    glVertex2f(225,240);
    glVertex2f(205,400);
    glEnd();
}
void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.5,0.5);///sky
    glBegin(GL_POLYGON);
    glVertex2f(0,400);
    glVertex2f(1000,400);
    glVertex2f(1000,1000);
    glVertex2f(0,1000);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);///sun
    circle(20,40,500,700);

    glColor3f(0.0,0.5,1.0);///river
    glBegin(GL_POLYGON);
    glVertex2f(0,400);
    glVertex2f(1000,400);
    glVertex2f(1000,600);
    glVertex2f(0,600);
    glEnd();

    mountains();
    glutPostRedisplay();
    ship();
    house_1();
    house_2();
    trees();

    glFlush();
    glutSwapBuffers();

}
int main( int argc,char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1500,1500);
    glutCreateWindow("Seaside scenery");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}

