//
//  main.cpp
//  merryChristmas
//
//  Created by 余炜 on 2021/12/19.
//

#include <iostream>
#include <GLUT/glut.h>


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
//    先画一个小三角形试一下
//    glColor3f(1.0f, 0.0f, 0.0f);
//    glVertex3f(-0.1f, -0.1f, 0.0f);
//    glColor3f(0.0f, 1.0f, 0.0f);
//    glVertex3f(0.0f, 0.1f, 0.0f);
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glVertex3f(0.1f, -0.1f, 0.0f);
//    glEnd();
//    glFlush();
//
//////    tree1
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.1f, 0.7f, 0.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, 0.9f, 0.0f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.1f, 0.7f, 0.0f);
    glEnd();
    glFlush();
//    tree2
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.15f, 0.6f, 0.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-0.08f, 0.7f, 0.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.08f, 0.7f, 0.0f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.15f, 0.6f, 0.0f);
    glEnd();
    glFlush();
//    tree3
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.2f, 0.5f, 0.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-0.13f, 0.6f, 0.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.13f, 0.6f, 0.0f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.2f, 0.5f, 0.0f);
    glEnd();
    glFlush();
//    tree4
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.25f, 0.4f, 0.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-0.18f, 0.5f, 0.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.18f, 0.5f, 0.0f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.25f, 0.4f, 0.0f);
    glEnd();
    glFlush();
//    tree5
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.3f, 0.3f, 0.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-0.23f, 0.4f, 0.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.23f, 0.4f, 0.0f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.3f, 0.3f, 0.0f);
    glEnd();
    glFlush();
//    树桩
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.08f, 0.3f, 0.0f);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.08f, 0.1f, 0.0f);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.08f, 0.1f, 0.0f);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.08f, 0.3f, 0.0f);
    glEnd();
    glFlush();
}
int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(800, 800);
    glutCreateWindow("merryChristmas!!!");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

