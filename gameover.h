#ifndef GAMEOVER_H_INCLUDED
#define GAMEOVER_H_INCLUDED

void hurufp1(){
    //glClearColor(10,10,10,10);
    //glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(25);
    //warna biru merah
    glBegin(GL_POLYGON);
    glColor3ub(240, 232, 10);
    glVertex2f(440,255);
    glVertex2f(220,255);

    glColor3ub(232, 81, 96);
    glVertex2f(220,327);
    glVertex2f(440,327);
    glEnd();

     //warna merah biru
    glBegin(GL_POLYGON);
    glColor3ub(232, 81, 96);
    glVertex2f(220,170);
    glVertex2f(440,170);

    glColor3ub(240, 232, 10);
    glVertex2f(440,255);
    glVertex2f(220,255);
    glEnd();

    //huruf p
    glBegin(GL_LINE_STRIP);
    glColor3ub(125, 130, 126);
    glVertex2f(280, 250);
	glVertex2f(280, 280);
	glVertex2f(280, 310);
	glVertex2f(315, 310);
	glVertex2f(315, 280);
	glVertex2f(280, 280);
	glEnd();

    //angka 1
    glBegin(GL_LINE_STRIP);
    glColor3ub(125, 130, 126);
    glVertex2f(350, 290);
	glVertex2f(370, 310);
	glVertex2f(370, 260);
	glVertex2f(350, 260);
	glVertex2f(390, 260);
	glEnd();

	//huruf w
	glBegin(GL_LINE_STRIP);
    glColor3ub(125, 130, 126);
    glVertex2f(240, 240);
	glVertex2f(240, 180);
	//glVertex2f(260, 200);
	glVertex2f(280, 240);
	//glVertex2f(300, 200);
	glVertex2f(320, 180);
	glVertex2f(320, 240);
	glEnd();

	//huruf i
	glBegin(GL_LINE_STRIP);
    glColor3ub(125, 130, 126);
    glVertex2f(345.5, 240);
	glVertex2f(345.5, 180);
	glEnd();

	//huruf n
	glBegin(GL_LINE_STRIP);
    glColor3ub(125, 130, 126);
    glVertex2f(370, 180);
	glVertex2f(370.11025, 239.86798);
	glVertex2f(420, 180);
	glVertex2f(420, 240);
	glEnd();

    glFlush();
    glutSwapBuffers();

}
void hurufp2(){
    //glClearColor(10,10,10,10);
    //glClear(GL_COLOR_BUFFER_BIT);
    //warna merah biru
    glBegin(GL_POLYGON);
    glColor3ub(232, 81, 96);
    glVertex2f(220,170);
    glVertex2f(440,170);

    glColor3ub(240, 232, 10);
    glVertex2f(440,255);
    glVertex2f(220,255);
    glEnd();
    //warna biru merah
    glBegin(GL_POLYGON);
    glColor3ub(240, 232, 10);
    glVertex2f(440,255);
    glVertex2f(220,255);

    glColor3ub(232, 81, 96);
    glVertex2f(220,320);
    glVertex2f(440,320);
    glEnd();


    glLineWidth(25);
    glBegin(GL_LINE_STRIP);
    //huruf p
    glColor3ub(125, 130, 126);
    glVertex2f(280, 250);
	glVertex2f(280, 280);
	glVertex2f(280, 310);
	glVertex2f(315, 310);
	glVertex2f(315, 280);
	glVertex2f(280, 280);
	glEnd();

    //angka 2
    glBegin(GL_LINE_STRIP);
    glColor3ub(125, 130, 126);
    glVertex2f(335, 285);
	glVertex2f(355, 310);
	glVertex2f(390, 310);
	//glVertex2f(369.93875, 295.03205);
	glVertex2f(350, 270);
	glVertex2f(340, 260);
	glVertex2f(390, 260);
	glEnd();

	//huruf w
	glBegin(GL_LINE_STRIP);
    glColor3ub(125, 130, 126);
    glVertex2f(240, 240);
	glVertex2f(240, 180);
	//glVertex2f(260, 200);
	glVertex2f(280, 240);
	//glVertex2f(300, 200);
	glVertex2f(320, 180);
	glVertex2f(320, 240);
	glEnd();

	//huruf i
	glBegin(GL_LINE_STRIP);
    glColor3ub(125, 130, 126);
    glVertex2f(345.5, 240);
	glVertex2f(345.5, 180);
	glEnd();

	//huruf n
	glBegin(GL_LINE_STRIP);
    glColor3ub(125, 130, 126);
    glVertex2f(370, 180);
	glVertex2f(370.11025, 239.86798);
	glVertex2f(420, 180);
	glVertex2f(420, 240);
	glEnd();

    glFlush();
    glutSwapBuffers();

}

void hurufd(){

    //warna biru merah
    glBegin(GL_POLYGON);
    glColor3ub(232, 81, 96);
    glVertex2f(440,255);
    glVertex2f(220,255);

    glColor3ub(240, 232, 10);
    glVertex2f(220,295);
    glVertex2f(440,295);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(240, 232, 10);
    glVertex2f(220,295);
    glVertex2f(440,295);
    glColor3ub(232, 81, 96);
    glVertex2f(440,320);
    glVertex2f(220,320);
    glEnd();

    //huruf d
    glLineWidth(7);
    glBegin(GL_LINE_STRIP);
    glColor3ub(125, 130, 126);
    glVertex2f(260, 270);
	glVertex2f(260, 300);
	glVertex2f(280, 300);
	glVertex2f(290, 295);
	glVertex2f(290, 275);
	glVertex2f(280, 270);
	glVertex2f(260, 270);
	glEnd();

	//huruf r
	glBegin(GL_LINE_STRIP);
	glColor3ub(125, 130, 126);
    glVertex2f(300, 270);
	glVertex2f(300, 282);
	glVertex2f(300, 300);
	glVertex2f(318, 300);
	glVertex2f(320, 296);
	glVertex2f(320, 286);
	glVertex2f(318, 282);
	glVertex2f(300, 282);
	glVertex2f(320, 270);
	glEnd();

	//huruf a
	glBegin(GL_LINE_STRIP);
	glColor3ub(125, 130, 126);
    glVertex2f(330, 270);
	glVertex2f(345, 300);
	glVertex2f(360, 270);
	glVertex2f(345, 280);
	glVertex2f(330, 270);
	glEnd();

	//huruf w
	glBegin(GL_LINE_STRIP);
	glColor3ub(125, 130, 126);
    glVertex2f(365, 300);
	glVertex2f(370, 270);
	glVertex2f(385, 300);
	glVertex2f(400, 270);
	glVertex2f(405, 300);
	glEnd();

    glFlush();
    glutSwapBuffers();


}

void transek(){
    glPushMatrix();
		//glColor3f(0.65, 0.75, 0.44);
		glTranslatef(0, -50, 0);
		hurufd();
	glPopMatrix();
}



#endif // GAMEOVER_H_INCLUDED
