#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include "drow_teks.h"



void seg4(float titikA1, float titikB1, float titikA2, float titikB2, float titikA3, float titikB3, float titikA4, float titikB4) {
	glLineWidth(3);
	glBegin(GL_QUADS);
	glVertex2f(titikA1, titikB1);
	glVertex2f(titikA2, titikB2);
	glVertex2f(titikA3, titikB3);
	glVertex2f(titikA4, titikB4);
	glEnd();
}


void button(){
    glBegin(GL_QUADS);
        glColor3ub(0, 158, 18);
        glVertex2f(225, 185);
        glVertex2f(375, 185);
        glColor3ub(115, 255, 131);
        glVertex2f(375, 215);
        glVertex2f(225, 215);
    glEnd();
    //seg4(225, 215, 225, 185, 375, 185, 375, 215);
    glColor3b(0, 0, 0);
    seg4(220, 210, 225, 210, 225, 190, 220, 190);
    seg4(225, 185, 230, 185, 230, 190, 225, 190);
    seg4(225, 210, 230, 210, 230, 215, 225, 215);

    seg4(230, 185, 230, 180, 370, 180, 370, 185);
    seg4(230, 220, 230, 215, 370, 215, 370, 220);

    seg4(370, 185, 375, 185, 375, 190, 370, 190);
    seg4(375, 190, 380, 190, 380, 210, 375, 210);
    seg4(370, 210, 375, 210, 375, 215, 370, 215);
}

void play(){
    seg4(265, 207, 265, 211, 252, 211, 252, 207);
    seg4(252, 207, 252, 190, 256, 190, 256, 207);
    seg4(256, 194, 265, 194, 265, 198, 256, 198);
    seg4(265, 198, 269, 198, 269, 207, 265, 207);

    seg4(282, 212, 278, 212, 278, 190, 282, 190);
    seg4(294, 190, 294, 194, 282, 194, 282, 190);

    seg4(308, 207, 304, 207, 304, 190, 308, 190);
    seg4(308, 198, 317, 198, 317, 202, 308, 202);
    seg4(308, 207, 317, 207, 317, 211, 308, 211);
    seg4(317, 190, 321, 190, 321, 207, 317, 207);

    seg4(334, 211, 330, 211, 330, 198, 334, 198);
    seg4(334, 198, 344, 198, 344, 202, 334, 202);
    seg4(344, 198, 348, 198, 348, 211, 344, 211);
    seg4(337, 190, 341, 190, 341, 198, 337, 198);
}


void button2(){
    glBegin(GL_QUADS);
        glColor3ub(232, 2, 2);
        glVertex2f(225, 185);
        glVertex2f(375, 185);
        glColor3ub(255, 130, 130);
        glVertex2f(375, 215);
        glVertex2f(225, 215);
    glEnd();
    //seg4(225, 215, 225, 185, 375, 185, 375, 215);
    glColor3b(0, 0, 0);
    seg4(220, 210, 225, 210, 225, 190, 220, 190);
    seg4(225, 185, 230, 185, 230, 190, 225, 190);
    seg4(225, 210, 230, 210, 230, 215, 225, 215);

    seg4(230, 185, 230, 180, 370, 180, 370, 185);
    seg4(230, 220, 230, 215, 370, 215, 370, 220);

    seg4(370, 185, 375, 185, 375, 190, 370, 190);
    seg4(375, 190, 380, 190, 380, 210, 375, 210);
    seg4(370, 210, 375, 210, 375, 215, 370, 215);
}

void play2(){
    seg4(275, 226, 288, 226, 288, 230, 275, 230);
    seg4(275, 226, 275, 214, 279, 214, 279, 226);
    seg4(279, 218, 288, 218, 288, 222, 278, 222);
    seg4(275, 210, 288, 210, 288, 214, 275, 214);
    seg4(288, 222, 292, 222, 292, 226, 288, 226);
    seg4(288, 214, 292, 214, 292, 218, 288, 218);

    seg4(300, 210, 304, 210, 304, 226, 300, 226);
    seg4(314, 210, 318, 210, 318, 226, 314, 226);
    seg4(304, 226, 314, 226, 314, 230, 304, 230);
    seg4(304, 218, 314, 218, 314, 222, 304, 222);

    seg4(326, 212, 330, 212, 330, 226, 326, 226);
    seg4(330, 226, 342, 226, 342, 230, 330, 230);
    seg4(330, 208, 342, 208, 342, 212, 330, 212);

    seg4(352, 210, 356, 210, 356, 230, 352, 230);
    seg4(356, 218, 360, 218, 360, 222, 356, 222);
    seg4(360, 214, 364, 214, 364, 218, 360, 218);
    seg4(360, 222, 364, 222, 364, 226, 360, 226);
    seg4(364, 210, 368, 210, 368, 214, 364, 214);
    seg4(364, 226, 368, 226, 368, 230, 364, 230);
}


void gameMenu(){

    glClearColor(10,10,10,10);
    glClear(GL_COLOR_BUFFER_BIT);

    drawText("Press F2", GLUT_BITMAP_TIMES_ROMAN_24, 150, 285, 255, 0, 0);
    glPushMatrix();
        glColor3ub(0, 0, 0);
        glTranslatef(20, 15, 0);
        button();
        play();
	glPopMatrix();

    drawText("Press F1", GLUT_BITMAP_TIMES_ROMAN_24, 150, 210, 0, 255, 0);
    glPushMatrix();
        glColor3ub(0, 0, 0);
        glTranslatef(20, 90, 0);
        button2();

        glPushMatrix();
            glTranslatef(-20, -20, 0);
            play2();
        glPopMatrix();
	glPopMatrix();

    glFlush();
    glutSwapBuffers();
}

#endif // MENU_H_INCLUDED
