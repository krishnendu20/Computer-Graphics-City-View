#include <windows.h>  // for MS Windows
#include<GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
#include<cstdio>
#include <GL/gl.h>



GLfloat position = 0.0f;
GLfloat speed = 0.01f;
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.011f;//c4
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.018f;//car
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.015f;//car2
GLfloat position4 = 0.0f;
GLfloat speed4 = 0.07f;//bcarl
GLfloat position5 = 0.0f;
GLfloat speed5 = 0.08f;
GLfloat position6 = 0.0f;
GLfloat speed6 = 0.01f;
GLfloat position7 = 0.0f;
GLfloat speed7 = 0.015f;
GLfloat position8 = 0.0f;
GLfloat speed8 = 0.017f;
GLfloat position9 = 0.0f;
GLfloat speed9 = 0.016f;
GLfloat position10 = 0.0f;
GLfloat speed10 = 0.07f;
GLfloat position11 = 0.0f;
GLfloat speed11 = 0.04f;
GLfloat position12 = 0.0f;
GLfloat speed12 = 0.09f;

GLfloat position13 = 0.0f;//car3-4
GLfloat speed13 = 0.03f;

GLfloat position14 = 0.0f;//car3-4
GLfloat speed14 = 0.04f;

GLfloat position15 = 0.0f;//car3-4
GLfloat speed15 = 0.03f;


void update(int value) {

    if(position > 1.0)
        position = -1.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}


void update1(int value) {

    if(position1 > 1.50)
        position1 = -1.0f;

    position1 += speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

void update2(int value) {

    if(position2 < -1.20)
        position2 = .99f;

    position2 -= speed2;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}

void update3(int value) {

    if(position3 < -1.50)
        position3 = 1.0f;

    position3 -= speed3;

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}

void update4(int value) {

    if(position4 > 1.0)
        position4 = -1.0f;

    position4 += speed4;

	glutPostRedisplay();


	glutTimerFunc(100, update4, 0);
}

void update5(int value) {

    if(position5 < -1.20)
        position5 = .99f;

    position5 -= speed5;

	glutPostRedisplay();


	glutTimerFunc(100, update5, 0);
}

void update6(int value) {

    if(position6 > 1.0)
        position6 = -1.0f;

    position6 += speed6;

	glutPostRedisplay();


	glutTimerFunc(100, update6, 0);
}
void update7(int value) {

    if(position7 < -1.20)
        position7 = .99f;

    position7 -= speed7;

	glutPostRedisplay();


	glutTimerFunc(100, update7, 0);
}
void update8(int value) {

    if(position8 > 1.0)
        position8 = -1.0f;

    position8 += speed8;

	glutPostRedisplay();


	glutTimerFunc(100, update8, 0);
}
void update9(int value) {

    if(position9 < -1.20)
        position9 = .99f;

    position9 -= speed9;

	glutPostRedisplay();


	glutTimerFunc(100, update9, 0);
}
void update10(int value) {

    if(position10 < -1.20)
        position10 = .99f;

    position10 -= speed10;

	glutPostRedisplay();


	glutTimerFunc(100, update10, 0);
}
void update11(int value) {

    if(position11 > 1.0)
        position11 = -1.0f;

    position11 += speed11;

	glutPostRedisplay();


	glutTimerFunc(100, update11, 0);
}

void update12(int value) {

    if(position12 > 1.0)
        position12 = -1.0f;

    position12 += speed12;

	glutPostRedisplay();


	glutTimerFunc(100, update12, 0);
}

void update13(int value) //car3-4
{

    if(position13 > 1.50)
        position13 = -1.50f;

    position13 += speed13;

	glutPostRedisplay();


	glutTimerFunc(100, update13, 0);
}

void update14(int value) //car3-4
{

    if(position14 > 1.50)
        position14 = -1.50f;

    position14 += speed14;

	glutPostRedisplay();


	glutTimerFunc(100, update14, 0);
}

void update15(int value) {

    if(position15 <-1.5)
        position15 = 2.0f;

    position15 -= speed15;

	glutPostRedisplay();


	glutTimerFunc(100, update15, 0);
}





 void display()
 {
    glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);

//SKY

     glBegin(GL_QUADS);
     glColor3ub(128, 223, 255);  //bright sky color
     glVertex2f(1.0,-0.4);
     glVertex2f(1.0,1.0);
     glVertex2f(-1.0,1.0);
     glVertex2f(-1.0,-0.4);
     glEnd();
//sun
  glColor3ub(242, 255, 0);

    int k;
    GLfloat x=.8f; GLfloat y=.8f;GLfloat radius =.1f;
	 int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(k = 0; k <= triangleAmount;k++) {
			glVertex2f(
		            x + (radius * cos(k *  twicePi / triangleAmount)),
			    y + (radius * sin(k * twicePi / triangleAmount))
			);
		}
	glEnd();

//cloud
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

 glColor3ub(255, 255, 255);

    int f;
     x=.6f; y=.7f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(f = 0; f <= triangleAmount;f++) {
			glVertex2f(
		            x + (radius * cos(f *  twicePi / triangleAmount)),
			    y + (radius * sin(f * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int g;
     x=.64f; y=.7f;radius =.04f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(g = 0; g <= triangleAmount;g++) {
			glVertex2f(
		            x + (radius * cos(g *  twicePi / triangleAmount)),
			    y + (radius * sin(g * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int h;
     x=.67f; y=.675f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(h = 0; h <= triangleAmount;h++) {
			glVertex2f(
		            x + (radius * cos(h *  twicePi / triangleAmount)),
			    y + (radius * sin(h * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int l;
     x=.625f; y=.665f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(l = 0; l <= triangleAmount;l++) {
			glVertex2f(
		            x + (radius * cos(l *  twicePi / triangleAmount)),
			    y + (radius * sin(l * twicePi / triangleAmount))
			);
		}
	glEnd();

//c2

glColor3ub(255, 255, 255);

    int F;
     x=.06f; y=.55f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(F = 0; F <= triangleAmount;F++) {
			glVertex2f(
		            x + (radius * cos(F *  twicePi / triangleAmount)),
			    y + (radius * sin(F * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);


    int G;
     x=.1f; y=.55f;radius =.04f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(G = 0; G <= triangleAmount;G++) {
			glVertex2f(
		            x + (radius * cos(G *  twicePi / triangleAmount)),
			    y + (radius * sin(G * twicePi / triangleAmount))
			);
		}
	glEnd();

int H;
     x=.13f; y=.525f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(H = 0; H <= triangleAmount;H++) {
			glVertex2f(
		            x + (radius * cos(H *  twicePi / triangleAmount)),
			    y + (radius * sin(H * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int L;
     x=.08f; y=.515f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(L = 0; L <= triangleAmount;L++) {
			glVertex2f(
		            x + (radius * cos(L *  twicePi / triangleAmount)),
			    y + (radius * sin(L * twicePi / triangleAmount))
			);
		}
	glEnd();

//c3
glColor3ub(255, 255, 255);

    int Q;
     x=-.2f; y=.8f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(Q = 0; Q <= triangleAmount;Q++) {
			glVertex2f(
		            x + (radius * cos(Q *  twicePi / triangleAmount)),
			    y + (radius * sin(Q * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int W;
     x=-.16f; y=.8f;radius =.04f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(W = 0; W <= triangleAmount;W++) {
			glVertex2f(
		            x + (radius * cos(W *  twicePi / triangleAmount)),
			    y + (radius * sin(W * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int E;
     x=-.13f; y=.775f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(E = 0; E <= triangleAmount;E++) {
			glVertex2f(
		            x + (radius * cos(E *  twicePi / triangleAmount)),
			    y + (radius * sin(E * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int R;
     x=-.175f; y=.765f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(R = 0; R <= triangleAmount;R++) {
			glVertex2f(
		            x + (radius * cos(R *  twicePi / triangleAmount)),
			    y + (radius * sin(R * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();
//c4
glPushMatrix();
glTranslatef(position1,0.0f, 0.0f);
glColor3ub(255, 255, 255);

    int T;
     x=-.7f; y=.7f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(T = 0; T <= triangleAmount;T++) {
			glVertex2f(
		            x + (radius * cos(T *  twicePi / triangleAmount)),
			    y + (radius * sin(T * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int U;
     x=-.66f; y=.7f;radius =.04f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(U = 0; U <= triangleAmount;U++) {
			glVertex2f(
		            x + (radius * cos(U *  twicePi / triangleAmount)),
			    y + (radius * sin(U * twicePi / triangleAmount))
			);
		}
	glEnd();

	int I;
     x=-.63f; y=.675f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(I = 0; I <= triangleAmount;I++) {
			glVertex2f(
		            x + (radius * cos(I *  twicePi / triangleAmount)),
			    y + (radius * sin(I * twicePi / triangleAmount))
			);
		}
	glEnd();

int O;
     x=-.675f; y=.665f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(O = 0; O <= triangleAmount;O++) {
			glVertex2f(
		            x + (radius * cos(O *  twicePi / triangleAmount)),
			    y + (radius * sin(O * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();


//right blding 1


//right blding 1






     glBegin(GL_QUADS);
     glColor3ub(163, 163, 194);
     glVertex2f(0.05,-0.50);
     glVertex2f(0.05,0.15);
     glVertex2f(-0.05,0.15);
     glVertex2f(-0.05,-0.50);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(179, 179, 204);
     glVertex2f(0.17,-0.50);
     glVertex2f(0.17,0.15);
     glVertex2f(0.05,0.15);
     glVertex2f(0.05,-0.50);
     glEnd();
//glass
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.12);
     glVertex2f(0.16,0.13);
     glVertex2f(0.06,0.13);
     glVertex2f(0.06,0.12);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.12);
     glVertex2f(0.16,0.13);
     glVertex2f(0.06,0.13);
     glVertex2f(0.06,0.12);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.10);
     glVertex2f(0.16,0.11);
     glVertex2f(0.06,0.11);
     glVertex2f(0.06,0.10);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.08);
     glVertex2f(0.16,0.09);
     glVertex2f(0.06,0.09);
     glVertex2f(0.06,0.08);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.06);
     glVertex2f(0.16,0.07);
     glVertex2f(0.06,0.07);
     glVertex2f(0.06,0.06);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.04);
     glVertex2f(0.16,0.05);
     glVertex2f(0.06,0.05);
     glVertex2f(0.06,0.04);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.02);
     glVertex2f(0.16,0.03);
     glVertex2f(0.06,0.03);
     glVertex2f(0.06,0.02);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.0);
     glVertex2f(0.16,0.01);
     glVertex2f(0.06,0.01);
     glVertex2f(0.06,0.0);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.02);
     glVertex2f(0.16,-0.01);
     glVertex2f(0.06,-0.01);
     glVertex2f(0.06,-0.02);
     glEnd();
 glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.04);
     glVertex2f(0.16,-0.03);
     glVertex2f(0.06,-0.03);
     glVertex2f(0.06,-0.04);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.06);
     glVertex2f(0.16,-0.05);
     glVertex2f(0.06,-0.05);
     glVertex2f(0.06,-0.06);
     glEnd();//
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.08);
     glVertex2f(0.16,-0.07);
     glVertex2f(0.06,-0.07);
     glVertex2f(0.06,-0.08);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.10);
     glVertex2f(0.16,-0.09);
     glVertex2f(0.06,-0.09);
     glVertex2f(0.06,-0.10);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.12);
     glVertex2f(0.16,-0.11);
     glVertex2f(0.06,-0.11);
     glVertex2f(0.06,-0.12);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.14);
     glVertex2f(0.16,-0.13);
     glVertex2f(0.06,-0.13);
     glVertex2f(0.06,-0.14);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.16);
     glVertex2f(0.16,-0.15);
     glVertex2f(0.06,-0.15);
     glVertex2f(0.06,-0.16);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.18);
     glVertex2f(0.16,-0.17);
     glVertex2f(0.06,-0.17);
     glVertex2f(0.06,-0.18);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.20);
     glVertex2f(0.16,-0.19);
     glVertex2f(0.06,-0.19);
     glVertex2f(0.06,-0.20);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.22);
     glVertex2f(0.16,-0.21);
     glVertex2f(0.06,-0.21);
     glVertex2f(0.06,-0.22);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.24);
     glVertex2f(0.16,-0.23);
     glVertex2f(0.06,-0.23);
     glVertex2f(0.06,-0.24);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.26);
     glVertex2f(0.16,-0.25);
     glVertex2f(0.06,-0.25);
     glVertex2f(0.06,-0.26);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.28);
     glVertex2f(0.16,-0.27);
     glVertex2f(0.06,-0.27);
     glVertex2f(0.06,-0.28);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.30);
     glVertex2f(0.16,-0.29);
     glVertex2f(0.06,-0.29);
     glVertex2f(0.06,-0.30);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.32);
     glVertex2f(0.16,-0.31);
     glVertex2f(0.06,-0.31);
     glVertex2f(0.06,-0.32);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.34);
     glVertex2f(0.16,-0.33);
     glVertex2f(0.06,-0.33);
     glVertex2f(0.06,-0.34);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.36);
     glVertex2f(0.16,-0.35);
     glVertex2f(0.06,-0.35);
     glVertex2f(0.06,-0.36);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.06);
     glVertex2f(0.16,-0.05);
     glVertex2f(0.06,-0.05);
     glVertex2f(0.06,-0.06);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.06);
     glVertex2f(0.16,-0.05);
     glVertex2f(0.06,-0.05);
     glVertex2f(0.06,-0.06);
     glEnd();


//Right blding 2

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(0.25,-0.50);
     glVertex2f(0.25,0.05);
     glVertex2f(0.17,0.05);
     glVertex2f(0.17,-0.50);
     glEnd();

//Right blding 3

     glBegin(GL_QUADS);
     glColor3ub(133, 173, 173);
     glVertex2f(0.37,-0.50);
     glVertex2f(0.37,0.1);
     glVertex2f(0.25,0.1);
     glVertex2f(0.25,-0.50);
     glEnd();

//GLASS
      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.365,-0.50);
     glVertex2f(0.365,0.085);
     glVertex2f(0.30,0.085);
     glVertex2f(0.30,-0.50);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.29,-0.50);
     glVertex2f(0.29,0.085);
     glVertex2f(0.255,0.085);
     glVertex2f(0.255,-0.50);
     glEnd();



//Right blding 5

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(0.53,-0.50);
     glVertex2f(0.53,0.3);
     glVertex2f(0.37,0.3);
     glVertex2f(0.37,-0.50);
     glEnd();


//glass
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.29);
     glVertex2f(0.525,0.28);
     glVertex2f(0.42,0.28);
     glVertex2f(0.42,0.29);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.27);
     glVertex2f(0.525,0.26);
     glVertex2f(0.42,0.26);
     glVertex2f(0.42,0.27);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.25);
     glVertex2f(0.525,0.24);
     glVertex2f(0.42,0.24);
     glVertex2f(0.42,0.25);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.23);
     glVertex2f(0.525,0.22);
     glVertex2f(0.42,0.22);
     glVertex2f(0.42,0.23);
     glEnd();



     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.21);
     glVertex2f(0.525,0.20);
     glVertex2f(0.42,0.20);
     glVertex2f(0.42,0.21);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.19);
     glVertex2f(0.525,0.18);
     glVertex2f(0.42,0.18);
     glVertex2f(0.42,0.19);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.17);
     glVertex2f(0.525,0.16);
     glVertex2f(0.42,0.16);
     glVertex2f(0.42,0.17);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.15);
     glVertex2f(0.525,0.14);
     glVertex2f(0.42,0.14);
     glVertex2f(0.42,0.15);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.13);
     glVertex2f(0.525,0.12);
     glVertex2f(0.42,0.12);
     glVertex2f(0.42,0.13);
     glEnd();



     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.11);
     glVertex2f(0.525,0.10);
     glVertex2f(0.42,0.10);
     glVertex2f(0.42,0.11);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.09);
     glVertex2f(0.525,0.08);
     glVertex2f(0.42,0.08);
     glVertex2f(0.42,0.09);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.07);
     glVertex2f(0.525,0.06);
     glVertex2f(0.42,0.06);
     glVertex2f(0.42,0.07);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.05);
     glVertex2f(0.525,0.04);
     glVertex2f(0.42,0.04);
     glVertex2f(0.42,0.05);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.03);
     glVertex2f(0.525,0.02);
     glVertex2f(0.42,0.02);
     glVertex2f(0.42,0.03);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.01);
     glVertex2f(0.525,0.00);
     glVertex2f(0.42,0.00);
     glVertex2f(0.42,0.01);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.01);
     glVertex2f(0.525,-0.02);
     glVertex2f(0.42,-0.02);
     glVertex2f(0.42,-0.01);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.03);
     glVertex2f(0.525,-0.04);
     glVertex2f(0.42,-0.04);
     glVertex2f(0.42,-0.03);
     glEnd();


 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.05);
     glVertex2f(0.525,-0.06);
     glVertex2f(0.42,-0.06);
     glVertex2f(0.42,-0.05);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.07);
     glVertex2f(0.525,-0.08);
     glVertex2f(0.42,-0.08);
     glVertex2f(0.42,-0.07);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.09);
     glVertex2f(0.525,-0.10);
     glVertex2f(0.42,-0.10);
     glVertex2f(0.42,-0.09);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.11);
     glVertex2f(0.525,-0.12);
     glVertex2f(0.42,-0.12);
     glVertex2f(0.42,-0.11);
     glEnd();


    glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.13);
     glVertex2f(0.525,-0.14);
     glVertex2f(0.42,-0.14);
     glVertex2f(0.42,-0.13);
     glEnd();

    glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.15);
     glVertex2f(0.525,-0.16);
     glVertex2f(0.42,-0.16);
     glVertex2f(0.42,-0.15);
     glEnd();

    glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.17);
     glVertex2f(0.525,-0.18);
     glVertex2f(0.42,-0.18);
     glVertex2f(0.42,-0.17);
     glEnd();


      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.19);
     glVertex2f(0.525,-0.20);
     glVertex2f(0.42,-0.20);
     glVertex2f(0.42,-0.19);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.21);
     glVertex2f(0.525,-0.22);
     glVertex2f(0.42,-0.22);
     glVertex2f(0.42,-0.21);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.23);
     glVertex2f(0.525,-0.24);
     glVertex2f(0.42,-0.24);
     glVertex2f(0.42,-0.23);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.25);
     glVertex2f(0.525,-0.26);
     glVertex2f(0.42,-0.26);
     glVertex2f(0.42,-0.25);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.27);
     glVertex2f(0.525,-0.28);
     glVertex2f(0.42,-0.28);
     glVertex2f(0.42,-0.27);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.29);
     glVertex2f(0.525,-0.30);
     glVertex2f(0.42,-0.30);
     glVertex2f(0.42,-0.29);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.31);
     glVertex2f(0.525,-0.32);
     glVertex2f(0.42,-0.32);
     glVertex2f(0.42,-0.31);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.33);
     glVertex2f(0.525,-0.34);
     glVertex2f(0.42,-0.34);
     glVertex2f(0.42,-0.33);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.35);
     glVertex2f(0.525,-0.36);
     glVertex2f(0.42,-0.36);
     glVertex2f(0.42,-0.35);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.37);
     glVertex2f(0.525,-0.38);
     glVertex2f(0.42,-0.38);
     glVertex2f(0.42,-0.37);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.39);
     glVertex2f(0.525,-0.40);
     glVertex2f(0.42,-0.40);
     glVertex2f(0.42,-0.39);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.41);
     glVertex2f(0.525,-0.42);
     glVertex2f(0.42,-0.42);
     glVertex2f(0.42,-0.41);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.43);
     glVertex2f(0.525,-0.44);
     glVertex2f(0.42,-0.44);
     glVertex2f(0.42,-0.43);
     glEnd();

// Right blding 4

  glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(0.5,-0.50);
     glVertex2f(0.5,-0.21);
     glVertex2f(0.3,-0.21);
     glVertex2f(0.3,-0.50);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(0.75,-0.50);
     glVertex2f(0.75,-0.21);
     glVertex2f(0.5,-0.21);
     glVertex2f(0.5,-0.50);
     glEnd();

 //glass

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.23);
     glVertex2f(0.74,-0.22);
     glVertex2f(0.51,-0.22);
     glVertex2f(0.51,-0.23);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.25);
     glVertex2f(0.74,-0.24);
     glVertex2f(0.51,-0.24);
     glVertex2f(0.51,-0.25);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.27);
     glVertex2f(0.74,-0.26);
     glVertex2f(0.51,-0.26);
     glVertex2f(0.51,-0.27);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.29);
     glVertex2f(0.74,-0.28);
     glVertex2f(0.51,-0.28);
     glVertex2f(0.51,-0.29);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.31);
     glVertex2f(0.74,-0.30);
     glVertex2f(0.51,-0.30);
     glVertex2f(0.51,-0.31);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.33);
     glVertex2f(0.74,-0.32);
     glVertex2f(0.51,-0.32);
     glVertex2f(0.51,-0.33);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.35);
     glVertex2f(0.74,-0.34);
     glVertex2f(0.51,-0.34);
     glVertex2f(0.51,-0.35);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.37);
     glVertex2f(0.74,-0.36);
     glVertex2f(0.51,-0.36);
     glVertex2f(0.51,-0.37);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.39);
     glVertex2f(0.74,-0.38);
     glVertex2f(0.51,-0.38);
     glVertex2f(0.51,-0.39);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.41);
     glVertex2f(0.74,-0.40);
     glVertex2f(0.51,-0.40);
     glVertex2f(0.51,-0.41);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.43);
     glVertex2f(0.74,-0.42);
     glVertex2f(0.51,-0.42);
     glVertex2f(0.51,-0.43);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.45);
     glVertex2f(0.74,-0.44);
     glVertex2f(0.51,-0.44);
     glVertex2f(0.51,-0.45);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.47);
     glVertex2f(0.74,-0.46);
     glVertex2f(0.51,-0.46);
     glVertex2f(0.51,-0.47);
     glEnd();

//Right blding 8
    glBegin(GL_QUADS);
     glColor3ub(133, 173, 173);
     glVertex2f(0.85,-0.50);
     glVertex2f(0.85,-0.25);
     glVertex2f(0.8,-0.25);
     glVertex2f(0.8,-0.50);
     glEnd();
//Right blding 6
     glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(0.85,-0.50);
     glVertex2f(0.85,-0.27);
     glVertex2f(0.75,-0.27);
     glVertex2f(0.75,-0.50);
     glEnd();
//glass
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.45);
     glVertex2f(0.84,-0.44);
     glVertex2f(0.76,-0.44);
     glVertex2f(0.76,-0.45);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.43);
     glVertex2f(0.84,-0.42);
     glVertex2f(0.76,-0.42);
     glVertex2f(0.76,-0.43);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.41);
     glVertex2f(0.84,-0.40);
     glVertex2f(0.76,-0.40);
     glVertex2f(0.76,-0.41);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.39);
     glVertex2f(0.84,-0.38);
     glVertex2f(0.76,-0.38);
     glVertex2f(0.76,-0.39);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.37);
     glVertex2f(0.84,-0.36);
     glVertex2f(0.76,-0.36);
     glVertex2f(0.76,-0.37);
     glEnd();
   glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.34);
     glVertex2f(0.84,-0.35);
     glVertex2f(0.76,-0.35);
     glVertex2f(0.76,-0.34);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.32);
     glVertex2f(0.84,-0.33);
     glVertex2f(0.76,-0.33);
     glVertex2f(0.76,-0.32);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.30);
     glVertex2f(0.84,-0.31);
     glVertex2f(0.76,-0.31);
     glVertex2f(0.76,-0.30);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.28);
     glVertex2f(0.84,-0.29);
     glVertex2f(0.76,-0.29);
     glVertex2f(0.76,-0.28);
     glEnd();

//Right blding 7


     glBegin(GL_QUADS);
     glColor3ub(92, 138, 138);
     glVertex2f(0.9,-0.50);
     glVertex2f(0.9,-0.105);
     glVertex2f(0.85,-0.1);
     glVertex2f(0.85,-0.50);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(1.,-0.50);
     glVertex2f(1.0,-0.105);
     glVertex2f(0.9,-0.105);
     glVertex2f(0.9,-0.50);
     glEnd();
//glass
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.45);
     glVertex2f(.995,-0.44);
     glVertex2f(0.91,-0.44);
     glVertex2f(0.91,-0.45);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.43);
     glVertex2f(.995,-0.42);
     glVertex2f(0.91,-0.42);
     glVertex2f(0.91,-0.43);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.41);
     glVertex2f(.995,-0.40);
     glVertex2f(0.91,-0.40);
     glVertex2f(0.91,-0.41);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.39);
     glVertex2f(.995,-0.38);
     glVertex2f(0.91,-0.38);
     glVertex2f(0.91,-0.39);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.37);
     glVertex2f(.995,-0.36);
     glVertex2f(0.91,-0.36);
     glVertex2f(0.91,-0.37);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.35);
     glVertex2f(.995,-0.34);
     glVertex2f(0.91,-0.34);
     glVertex2f(0.91,-0.35);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.33);
     glVertex2f(.995,-0.32);
     glVertex2f(0.91,-0.32);
     glVertex2f(0.91,-0.33);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.31);
     glVertex2f(.995,-0.30);
     glVertex2f(0.91,-0.30);
     glVertex2f(0.91,-0.31);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.29);
     glVertex2f(.995,-0.28);
     glVertex2f(0.91,-0.28);
     glVertex2f(0.91,-0.29);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.27);
     glVertex2f(.995,-0.26);
     glVertex2f(0.91,-0.26);
     glVertex2f(0.91,-0.27);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.25);
     glVertex2f(.995,-0.24);
     glVertex2f(0.91,-0.24);
     glVertex2f(0.91,-0.25);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.23);
     glVertex2f(.995,-0.22);
     glVertex2f(0.91,-0.22);
     glVertex2f(0.91,-0.23);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.21);
     glVertex2f(.995,-0.20);
     glVertex2f(0.91,-0.20);
     glVertex2f(0.91,-0.21);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.19);
     glVertex2f(.995,-0.18);
     glVertex2f(0.91,-0.18);
     glVertex2f(0.91,-0.19);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.17);
     glVertex2f(.995,-0.16);
     glVertex2f(0.91,-0.16);
     glVertex2f(0.91,-0.17);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.15);
     glVertex2f(.995,-0.14);
     glVertex2f(0.91,-0.14);
     glVertex2f(0.91,-0.15);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.13);
     glVertex2f(.995,-0.12);
     glVertex2f(0.91,-0.12);
     glVertex2f(0.91,-0.13);
     glEnd();


//LEFT SIDE BLDING 1  //************************


     glBegin(GL_QUADS);
     glColor3ub(204, 51, 0);
     glVertex2f(-.95,-0.4);
     glVertex2f(-.95,0.17);
     glVertex2f(-1.0,0.17);
     glVertex2f(-1.0,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(230, 57, 0);
     glVertex2f(-.8,-0.4);
     glVertex2f(-.8,0.17);
     glVertex2f(-.950,0.17);
     glVertex2f(-.950,-0.4);
     glEnd();



//glass#####
glBegin(GL_QUADS);
     glColor3ub(255, 128, 0);
     glVertex2f(-.81,-0.4);
     glVertex2f(-.81,0.15);
     glVertex2f(-.945,0.15);
     glVertex2f(-.945,-0.4);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(230, 115, 0);
     glVertex2f(-.96,-0.4);
     glVertex2f(-.96,0.15);
     glVertex2f(-.995,0.15);
     glVertex2f(-.995,-0.4);
     glEnd();


//LEFT SIDE BLDING 2


glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(-.75,-0.4);
     glVertex2f(-.75,-0.13);
     glVertex2f(-0.8,-0.13);
     glVertex2f(-.8,-0.4);
     glEnd();
//LEFT SIDE BLDING 3

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(-.65,-0.4);
     glVertex2f(-.65,-0.08);
     glVertex2f(-0.75,-0.08);
     glVertex2f(-.75,-0.4);
     glEnd();

//LEFT SIDE BLDING 4


//bldingside

     glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.6,-0.4);
     glVertex2f(-.6,0.31);
     glVertex2f(-0.65,0.31);
     glVertex2f(-.65,-0.4);
     glEnd();
//miror 1


glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(-.59,-0.4);
     glVertex2f(-.59,0.29);
     glVertex2f(-0.64,0.29);
     glVertex2f(-.64,-0.4);
     glEnd();

//blding

     glBegin(GL_QUADS);
     glColor3ub(204, 204, 204);
     glVertex2f(-.5,-0.4);
     glVertex2f(-.5,0.31);
     glVertex2f(-0.6,0.31);
     glVertex2f(-.6,-0.4);
     glEnd();

//miror 2
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(-.51,-0.4);
     glVertex2f(-.51,0.29);
     glVertex2f(-0.59,0.29);
     glVertex2f(-.59,-0.4);
     glEnd();

//LEFT SIDE BLDING 5

      glBegin(GL_QUADS);
     glColor3ub(198, 140, 83);
     glVertex2f(-.45,-0.4);
     glVertex2f(-.45,0.09);
     glVertex2f(-0.5,0.09);
     glVertex2f(-0.5,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(204, 153, 102);
     glVertex2f(-.4,-0.4);
     glVertex2f(-.4,0.09);
     glVertex2f(-0.45,0.09);
     glVertex2f(-0.45,-0.4);
     glEnd();
//Glass
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.405,-0.4);
     glVertex2f(-.405,0.08);
     glVertex2f(-0.447,0.08);
     glVertex2f(-0.447,-0.4);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.457,-0.4);
     glVertex2f(-.457,0.08);
     glVertex2f(-0.495,0.08);
     glVertex2f(-0.495,-0.4);
     glEnd();

//thamba

glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.35,-0.4);
     glVertex2f(-.35,0.35);
     glVertex2f(-0.4,0.35);
    glVertex2f(-0.4,-0.4);
      glEnd();
glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.36,0.35);
     glVertex2f(-.36,0.37);
     glVertex2f(-0.39,0.37);
    glVertex2f(-0.39,0.35);
      glEnd();


      glBegin(GL_QUADS);//fst mota
     glColor3ub(89, 89, 89);
     glVertex2f(-.345,0.37);
     glVertex2f(-.345,0.45);
     glVertex2f(-0.405,0.45);
    glVertex2f(-0.405,0.37);
      glEnd();

      glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.36,0.45);
     glVertex2f(-.36,0.47);
     glVertex2f(-0.39,0.47);
    glVertex2f(-0.39,0.45);
      glEnd();

       glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.35,0.47);
     glVertex2f(-.35,0.48);
     glVertex2f(-0.40,0.48);
    glVertex2f(-0.40,0.47);
      glEnd();


       glBegin(GL_QUADS);//2nd mota
     glColor3ub(89, 89, 89);
     glVertex2f(-.33,0.48);
     glVertex2f(-.33,0.54);
     glVertex2f(-0.42,0.54);
    glVertex2f(-0.42,0.48);
      glEnd();
glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.36,0.54);
     glVertex2f(-.36,0.56);
     glVertex2f(-0.39,0.56);
    glVertex2f(-0.39,0.54);
      glEnd();

      glBegin(GL_QUADS);//dandi
     glColor3ub(89, 89, 89);
     glVertex2f(-.38,0.56);
     glVertex2f(-.38,0.8);
     glVertex2f(-0.385,0.8);
    glVertex2f(-0.385,0.56);
      glEnd();


      glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.365,0.56);
     glVertex2f(-.365,0.8);
     glVertex2f(-0.37,0.8);
    glVertex2f(-0.37,0.56);
      glEnd();




      glBegin(GL_QUADS);//dandi matha
     glColor3ub(89, 89, 89);
     glVertex2f(-.365,0.8);
     glVertex2f(-.365,0.81);
     glVertex2f(-0.385,0.81);
    glVertex2f(-0.385,0.8);
      glEnd();

  //thamba dim

//left blding 6


     glBegin(GL_QUADS);
     glColor3ub(204, 153, 102);
     glVertex2f(-.2,-0.4);
     glVertex2f(-.2,-0.09);
     glVertex2f(-0.3,-0.09);
     glVertex2f(-0.3,-0.4);
      glEnd();

     glBegin(GL_QUADS);
     glColor3ub(198, 140, 83);
     glVertex2f(-.3,-0.4);
     glVertex2f(-.3,-0.09);
     glVertex2f(-0.37,-0.09);
     glVertex2f(-0.37,-0.4);
      glEnd();
//Glass
glBegin(GL_QUADS);
     glColor3ub(214, 214, 194);
     glVertex2f(-.31,-0.4);
     glVertex2f(-.31,-0.10);
     glVertex2f(-0.365,-0.10);
     glVertex2f(-0.365,-0.4);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.21,-0.4);
     glVertex2f(-.21,-0.10);
     glVertex2f(-0.29,-0.10);
     glVertex2f(-0.29,-0.4);
      glEnd();




//left blding 7


glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(-.1,-0.4);
     glVertex2f(-.1,-0.15);
     glVertex2f(-0.15,-0.15);
    glVertex2f(-0.15,-0.4);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(-.15,-0.4);
     glVertex2f(-.15,-0.15);
     glVertex2f(-0.2,-0.15);
    glVertex2f(-0.2,-0.4);
      glEnd();
//Glass
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.16);
     glVertex2f(-.103,-0.17);
     glVertex2f(-0.145,-0.17);
    glVertex2f(-0.145,-0.16);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.18);
     glVertex2f(-.103,-0.19);
     glVertex2f(-0.145,-0.19);
    glVertex2f(-0.145,-0.18);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.20);
     glVertex2f(-.103,-0.21);
     glVertex2f(-0.145,-0.21);
    glVertex2f(-0.145,-0.20);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.22);
     glVertex2f(-.103,-0.23);
     glVertex2f(-0.145,-0.23);
    glVertex2f(-0.145,-0.22);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.24);
     glVertex2f(-.103,-0.25);
     glVertex2f(-0.145,-0.25);
    glVertex2f(-0.145,-0.24);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.26);
     glVertex2f(-.103,-0.27);
     glVertex2f(-0.145,-0.27);
    glVertex2f(-0.145,-0.26);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.28);
     glVertex2f(-.103,-0.29);
     glVertex2f(-0.145,-0.29);
    glVertex2f(-0.145,-0.28);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.30);
     glVertex2f(-.103,-0.31);
     glVertex2f(-0.145,-0.31);
    glVertex2f(-0.145,-0.30);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.32);
     glVertex2f(-.103,-0.33);
     glVertex2f(-0.145,-0.33);
    glVertex2f(-0.145,-0.32);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.34);
     glVertex2f(-.103,-0.35);
     glVertex2f(-0.145,-0.35);
    glVertex2f(-0.145,-0.34);
      glEnd();
       glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.36);
     glVertex2f(-.103,-0.37);
     glVertex2f(-0.145,-0.37);
    glVertex2f(-0.145,-0.36);
      glEnd();


glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.16);
     glVertex2f(-.155,-0.17);
     glVertex2f(-0.195,-0.17);
    glVertex2f(-0.195,-0.16);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.18);
     glVertex2f(-.155,-0.19);
     glVertex2f(-0.195,-0.19);
    glVertex2f(-0.195,-0.18);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.20);
     glVertex2f(-.155,-0.21);
     glVertex2f(-0.195,-0.21);
     glVertex2f(-0.195,-0.20);
      glEnd();
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.22);
     glVertex2f(-.155,-0.23);
     glVertex2f(-0.195,-0.23);
    glVertex2f(-0.195,-0.22);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.24);
     glVertex2f(-.155,-0.25);
     glVertex2f(-0.195,-0.25);
    glVertex2f(-0.195,-0.24);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.26);
     glVertex2f(-.155,-0.27);
     glVertex2f(-0.195,-0.27);
    glVertex2f(-0.195,-0.26);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.28);
     glVertex2f(-.155,-0.29);
     glVertex2f(-0.195,-0.29);
    glVertex2f(-0.195,-0.28);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.30);
     glVertex2f(-.155,-0.31);
     glVertex2f(-0.195,-0.31);
    glVertex2f(-0.195,-0.30);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.32);
     glVertex2f(-.155,-0.33);
     glVertex2f(-0.195,-0.33);
    glVertex2f(-0.195,-0.32);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.34);
     glVertex2f(-.155,-0.35);
     glVertex2f(-0.195,-0.35);
    glVertex2f(-0.195,-0.34);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.36);
     glVertex2f(-.155,-0.37);
     glVertex2f(-0.195,-0.37);
    glVertex2f(-0.195,-0.36);
      glEnd();

//choto thamba

      glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.14,-0.15);
     glVertex2f(-.14,0.05);
     glVertex2f(-0.144,0.05);
    glVertex2f(-0.144,-0.15);
      glEnd();

 glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.16,-0.15);
     glVertex2f(-.16,0.05);
     glVertex2f(-0.164,0.05);
    glVertex2f(-0.164,-0.15);
      glEnd();


       glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.14,-0.0);
     glVertex2f(-.14,0.05);
     glVertex2f(-0.164,0.05);
    glVertex2f(-0.164,-0.0);
      glEnd();

      glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.151,0.05);
     glVertex2f(-.151,0.09);
     glVertex2f(-0.153,0.09);
    glVertex2f(-0.153,0.05);
      glEnd();


glBegin(GL_QUADS);//lite
     glColor3ub(255, 0, 0);
     glVertex2f(-.151,0.09);
     glVertex2f(-.151,0.095);
     glVertex2f(-0.153,0.095);
     glVertex2f(-0.153,0.09);
     glEnd();
//left blding 8


glBegin(GL_QUADS);
     glColor3ub(179, 179, 204);
     glVertex2f(-.05,-0.5);
     glVertex2f(-.05,-0.1);
     glVertex2f(-0.1,-0.1);
     glVertex2f(-0.1,-0.5);
     glEnd();


   //land blding

   /*glBegin(GL_POLYGON);
     glColor3ub(115, 115, 115);
     glVertex2f(-0.195,-0.3);
     glVertex2f(-0.2,-0.285);
     glVertex2f(-0.30,-0.2);
     glVertex2f(-0.40,-0.185);
     glVertex2f(-0.550,-0.2);
     glVertex2f(-0.60,-0.25);
     glEnd();*/
//BRIZ

 glBegin(GL_QUADS);//1
     glColor3ub(179, 179, 179);
     glVertex2f(0.35,-0.5);
     glVertex2f(0.35,-0.48);
     glVertex2f(0.335,-0.48);
     glVertex2f(.335,-0.50);
     glEnd();
glBegin(GL_QUADS);//11
     glColor3ub(179, 179, 179);
     glVertex2f(0.355,-0.48);
     glVertex2f(0.355,-0.477);
     glVertex2f(0.330,-0.477);
     glVertex2f(.330,-0.48);
     glEnd();


glBegin(GL_QUADS);//2
     glColor3ub(179, 179, 179);
     glVertex2f(0.7,-0.5);
     glVertex2f(0.7,-0.48);
     glVertex2f(0.685,-0.48);
     glVertex2f(.685,-0.50);
     glEnd();

glBegin(GL_QUADS);//21
     glColor3ub(179, 179, 179);
     glVertex2f(0.705,-0.48);
     glVertex2f(0.706,-0.477);
     glVertex2f(0.680,-0.477);
     glVertex2f(.680,-0.48);
     glEnd();



glBegin(GL_QUADS);//3
     glColor3ub(179, 179, 179);
     glVertex2f(0.999,-0.5);
     glVertex2f(0.999,-0.48);
     glVertex2f(0.985,-0.48);
     glVertex2f(.985,-0.50);
     glEnd();


glBegin(GL_QUADS);//31
     glColor3ub(179, 179, 179);
     glVertex2f(0.99905,-0.48);
     glVertex2f(0.99905,-0.477);
     glVertex2f(0.980,-0.477);
     glVertex2f(.980,-0.48);
     glEnd();

glBegin(GL_QUADS);//BRZ road
     glColor3ub(179, 179, 179);
     glVertex2f(1.0,-0.477);
     glVertex2f(1.0,-0.457);
     glVertex2f(0.17,-0.457);
     glVertex2f(.17,-0.477);
     glEnd();

//BRIZ CAR
glPushMatrix();
glTranslatef(position4,0.0f, 0.0f);
glBegin(GL_QUADS);//c1
     glColor3ub(255, 0, 0);
     glVertex2f(.99,-0.47);
     glVertex2f(.99,-0.460);
     glVertex2f(0.985,-0.460);
     glVertex2f(.985,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position5,0.0f, 0.0f);
glBegin(GL_QUADS);//c2
     glColor3ub(0, 0, 0);
     glVertex2f(.980,-0.47);
     glVertex2f(.980,-0.460);
     glVertex2f(0.975,-0.460);
     glVertex2f(.975,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position6,0.0f, 0.0f);
glBegin(GL_QUADS);//c3
     glColor3ub(0, 0, 153);
     glVertex2f(.780,-0.47);
     glVertex2f(.780,-0.460);
     glVertex2f(0.775,-0.460);
     glVertex2f(.775,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position7,0.0f, 0.0f);
glBegin(GL_QUADS);//c3
     glColor3ub(255, 0, 0);
     glVertex2f(.790,-0.47);
     glVertex2f(.790,-0.460);
     glVertex2f(0.785,-0.460);
     glVertex2f(.785,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position8,0.0f, 0.0f);
glBegin(GL_QUADS);//c4
     glColor3ub(0, 0, 153);
     glVertex2f(.680,-0.47);
     glVertex2f(.680,-0.460);
     glVertex2f(0.675,-0.460);
     glVertex2f(.675,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position9,0.0f, 0.0f);
glBegin(GL_QUADS);//c4
     glColor3ub(255, 0, 0);
     glVertex2f(.690,-0.47);
     glVertex2f(.690,-0.460);
     glVertex2f(0.685,-0.460);
     glVertex2f(.685,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position10,0.0f, 0.0f);
glBegin(GL_QUADS);//c5
     glColor3ub(0, 0, 153);
     glVertex2f(.580,-0.47);
     glVertex2f(.580,-0.460);
     glVertex2f(0.575,-0.460);
     glVertex2f(.575,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position11,0.0f, 0.0f);
glBegin(GL_QUADS);//c5
     glColor3ub(255, 0, 0);
     glVertex2f(.5950,-0.47);
     glVertex2f(.5950,-0.460);
     glVertex2f(0.590,-0.460);
     glVertex2f(.590,-0.47);
     glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(position12,0.0f, 0.0f);
glBegin(GL_QUADS);//c6
     glColor3ub(0, 0, 153);
     glVertex2f(.480,-0.47);
     glVertex2f(.480,-0.460);
     glVertex2f(0.475,-0.460);
     glVertex2f(.475,-0.47);
   glEnd();
glPopMatrix();


//Land yellow bulding================================================







glColor3ub(51, 102, 0);
    int e;

	 x=0.10f;  y=-.45f;  radius =.04f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(e = 0; e <= triangleAmount;e++) {
			glVertex2f(
		            x + (radius * cos(e *  twicePi / triangleAmount)),
			    y + (radius * sin(e * twicePi / triangleAmount))
			);
		}
	glEnd();
glColor3ub(64, 128, 0);
    int w;

	 x=0.14f;  y=-.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(w = 0; w <= triangleAmount;w++) {
			glVertex2f(
		            x + (radius * cos(w *  twicePi / triangleAmount)),
			    y + (radius * sin(w * twicePi / triangleAmount))
			);
		}
	glEnd();











glBegin(GL_QUADS);//yellow
     glColor3ub(255, 209, 26);
     glVertex2f(-0.18,-0.30);
     glVertex2f(-0.18,-0.40);
     glVertex2f(-.62,-0.40);
     glVertex2f(-.62,-0.30);
     glEnd();

//glass
glBegin(GL_QUADS);//yellow
     glColor3ub(179, 204, 204);
     glVertex2f(-0.19,-0.32);
     glVertex2f(-0.19,-0.39);
     glVertex2f(-.61,-0.39);
     glVertex2f(-.61,-0.32);
     glEnd();





glBegin(GL_QUADS);//yellow
     glColor3ub(255, 214, 51);
     glVertex2f(0.12,-0.50);
     glVertex2f(0.12,-0.38);
     glVertex2f(-0.20,-0.38);
     glVertex2f(-0.20,-0.50);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);//white
     glVertex2f(0.12,-0.50);
     glVertex2f(0.12,-0.38);
     glVertex2f(0.115,-0.38);
     glVertex2f(0.115,-0.50);
     glEnd();
glBegin(GL_QUADS);//yellow
     glColor3ub(255, 214, 51);
     glVertex2f(-0.6,-0.50);
     glVertex2f(-0.6,-0.38);
     glVertex2f(-1.0,-0.38);
     glVertex2f(-1.0,-0.50);
     glEnd();






glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(0.10,-0.50);
     glVertex2f(0.10,-0.40);
     glVertex2f(-0.98,-0.40);
     glVertex2f(-0.98,-0.50);
     glEnd();


glBegin(GL_QUADS);//glass
     glColor3ub(221, 204, 255);
     glVertex2f(0.10,-0.50);
     glVertex2f(0.10,-0.41);
     glVertex2f(-0.98,-0.41);
     glVertex2f(-.98,-0.50);
     glEnd();

//side black
glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(0.10,-0.50);
     glVertex2f(0.10,-0.40);
     glVertex2f(0.08,-0.40);
     glVertex2f(.08,-0.50);
     glEnd();









//GLASS border yellow


glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//black yellow
     glVertex2f(0.08,-0.42);
     glVertex2f(0.08,-0.41);
     glVertex2f(-0.98,-0.41);
     glVertex2f(-.98,-0.42);
     glEnd();

glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//black yellow y1
     glVertex2f(0.08,-0.5);
     glVertex2f(0.08,-0.42);
     glVertex2f(.076,-0.42);
     glVertex2f(.076,-0.5);
     glEnd();

glBegin(GL_QUADS);//glass
     glColor3ub(198, 83, 198);//violet
     glVertex2f(0.076,-0.425);
     glVertex2f(0.076,-0.42);
     glVertex2f(-0.98,-0.42);
     glVertex2f(-.98,-0.425);
     glEnd();
glBegin(GL_QUADS);//glass
     glColor3ub(198, 83, 198);//v1
     glVertex2f(0.076,-0.5);
     glVertex2f(0.076,-0.42);
     glVertex2f(.072,-0.42);
     glVertex2f(.072,-0.5);
     glEnd();

/*glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y2
     glVertex2f(0.058,-0.5);
     glVertex2f(0.058,-0.42);
     glVertex2f(.055,-0.42);
     glVertex2f(.055,-0.5);
   glEnd();




glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y3
     glVertex2f(0.037,-0.5);
     glVertex2f(0.037,-0.42);
     glVertex2f(.034,-0.42);
     glVertex2f(.034,-0.5);
   glEnd();



glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y4
     glVertex2f(0.016,-0.5);
     glVertex2f(0.016,-0.42);
     glVertex2f(.013,-0.42);
     glVertex2f(.013,-0.5);
   glEnd();


glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y5
     glVertex2f(-0.005,-0.5);
     glVertex2f(-0.005,-0.42);
     glVertex2f(-.002,-0.42);
     glVertex2f(-.002,-0.5);
   glEnd();



glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y6
     glVertex2f(-0.02,-0.5);
     glVertex2f(-0.02,-0.42);
     glVertex2f(-.023,-0.42);
     glVertex2f(-.023,-0.5);
   glEnd();




glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y7
     glVertex2f(-0.041,-0.5);
     glVertex2f(-0.041,-0.42);
     glVertex2f(-.044,-0.42);
     glVertex2f(-.044,-0.5);
   glEnd();



glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y8
     glVertex2f(-0.062,-0.5);
     glVertex2f(-0.062,-0.42);
     glVertex2f(-.065,-0.42);
     glVertex2f(-.065,-0.5);
   glEnd();





glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y9
     glVertex2f(-0.083,-0.5);
     glVertex2f(-0.083,-0.42);
     glVertex2f(-.086,-0.42);
     glVertex2f(-.086,-0.5);
   glEnd();




glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y10
     glVertex2f(-0.104,-0.5);
     glVertex2f(-0.104,-0.42);
     glVertex2f(-.107,-0.42);
     glVertex2f(-.107,-0.5);
   glEnd();





glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y11
     glVertex2f(-0.125,-0.5);
     glVertex2f(-0.125,-0.42);
     glVertex2f(-.128,-0.42);
     glVertex2f(-.128,-0.5);
   glEnd();




glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y12
     glVertex2f(-0.146,-0.5);
     glVertex2f(-0.146,-0.42);
     glVertex2f(-.149,-0.42);
     glVertex2f(-.149,-0.5);
   glEnd();




   glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y13
     glVertex2f(-0.167,-0.5);
     glVertex2f(-0.167,-0.42);
     glVertex2f(-.17,-0.42);
     glVertex2f(-.17,-0.5);
   glEnd();




   glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y14
     glVertex2f(-0.188,-0.5);
     glVertex2f(-0.188,-0.42);
     glVertex2f(-.191,-0.42);
     glVertex2f(-.191,-0.5);
   glEnd();




   glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y15
     glVertex2f(-0.209,-0.5);
     glVertex2f(-0.209,-0.42);
     glVertex2f(-.212,-0.42);
     glVertex2f(-.212,-0.5);
   glEnd();


 glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y16
     glVertex2f(-0.23,-0.5);
     glVertex2f(-0.23,-0.42);
     glVertex2f(-.235,-0.42);
     glVertex2f(-.235,-0.5);
   glEnd();

glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y17
     glVertex2f(-0.271,-0.5);
     glVertex2f(-0.271,-0.42);
     glVertex2f(-.276,-0.42);
     glVertex2f(-.276,-0.5);
   glEnd();
   */




//tree@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

   glColor3ub(51, 102, 0);
    int q;

	 x=0.19f;  y=-.5f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount;q++) {
			glVertex2f(
		            x + (radius * cos(q *  twicePi / triangleAmount)),
			    y + (radius * sin(q * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(51, 102, 0);
    int r;

	 x=0.22f;  y=-.48f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(r = 0; r <= triangleAmount;r++) {
			glVertex2f(
		            x + (radius * cos(r *  twicePi / triangleAmount)),
			    y + (radius * sin(r * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(51, 102, 0);
    int t;

	 x=0.25f;  y=-.5f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(t = 0; t <= triangleAmount;t++) {
			glVertex2f(
		            x + (radius * cos(t *  twicePi / triangleAmount)),
			    y + (radius * sin(t * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(77, 153, 0);
    int u;

	 x=0.28f;  y=-.49f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(u = 0; u <= triangleAmount;u++) {
			glVertex2f(
		            x + (radius * cos(u *  twicePi / triangleAmount)),
			    y + (radius * sin(u * twicePi / triangleAmount))
			);
		}
	glEnd();


glColor3ub(77, 153, 0);
    int o;

	 x=0.31f;  y=-.48f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(o = 0; o <= triangleAmount;o++) {
			glVertex2f(
		            x + (radius * cos(o *  twicePi / triangleAmount)),
			    y + (radius * sin(o * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(77, 153, 0);
    int p;

	 x=0.34f;  y=-.49f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(p = 0; p <= triangleAmount;p++) {
			glVertex2f(
		            x + (radius * cos(p *  twicePi / triangleAmount)),
			    y + (radius * sin(p * twicePi / triangleAmount))
			);
		}
	glEnd();















   glBegin(GL_QUADS);//side line
     glColor3ub(255, 214, 51);//yellow
     glVertex2f(0.75,-0.5);
     glVertex2f(0.75,-0.49);
     glVertex2f(0.12,-0.49);
     glVertex2f(.12,-0.50);
   glEnd();

//grass


glBegin(GL_QUADS);
     glColor3ub(102, 153, 0);
     glVertex2f(1.0,-0.53);
     glVertex2f(1.0,-0.50);
     glVertex2f(-1.0,-0.50);
     glVertex2f(-1.0,-0.53);
     glEnd();
//mati

glBegin(GL_QUADS);
     glColor3ub(102, 51, 0);
     glVertex2f(1.0,-0.52);
     glVertex2f(1.0,-0.53);
     glVertex2f(-1.0,-0.53);
     glVertex2f(-1.0,-0.52);
     glEnd();


 //road1

glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(1.0,-0.6);
     glVertex2f(1.0,-0.53);
     glVertex2f(-1.0,-0.53);
     glVertex2f(-1.0,-0.6);
     glEnd();

glBegin(GL_QUADS);//road line
     glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.54);
     glVertex2f(1.0,-0.5390);
     glVertex2f(-1.0,-0.5390);
     glVertex2f(-1.0,-0.54);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255 );
     glVertex2f(-0.50,-0.565);
     glVertex2f(-0.50,-0.557);
     glVertex2f(-1.0,-0.557);
     glVertex2f(-1.0,-0.565);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(0.20,-0.565);
     glVertex2f(0.20,-0.557);
     glVertex2f(-0.30,-0.557);
     glVertex2f(-0.30,-0.565);
     glEnd();
      glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(0.40,-0.565);
     glVertex2f(0.40,-0.557);
     glVertex2f(0.90,-0.557);
     glVertex2f(0.90,-0.565);
     glEnd();






//car
glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_QUADS);
     glColor3ub(230, 255, 255);
     glVertex2f(.23,-0.58);
     glVertex2f(.23,-0.55);
     glVertex2f(.32,-0.55);
     glVertex2f(.32,-0.58);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(230, 255, 255);
     glVertex2f(.26,-0.55);
     glVertex2f(.26,-0.51);
     glVertex2f(.313,-0.51);
     glVertex2f(.313,-0.55);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(.265,-0.55);
     glVertex2f(.265,-0.515);
     glVertex2f(.309,-0.515);
     glVertex2f(.309,-0.55);
     glEnd();
/*glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(.29,-0.51);
     glVertex2f(.29,-0.502);
     glVertex2f(.3,-0.502);
     glVertex2f(.3,-0.51);
     glEnd();
*/

    glColor3ub(7, 8, 7);
    int i;

	 x=.25f;  y=-.578f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glColor3ub(7, 8, 7);
    int j;

	 x=.30f;  y=-.578f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();


glBegin(GL_QUADS);
     glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.595);
     glVertex2f(1.0,-0.590);
     glVertex2f(-1.0,-0.590);
     glVertex2f(-1.0,-0.595);
     glEnd();

//grass 2

glBegin(GL_QUADS);
     glColor3ub(102, 153, 0);
     glVertex2f(1.0,-0.61);
     glVertex2f(1.0,-0.6);
     glVertex2f(-1.0,-0.6);
     glVertex2f(-1.0,-0.61);
     glEnd();
//mati 2

   glBegin(GL_QUADS);
     glColor3ub(102, 51, 0);
     glVertex2f(1.0,-0.6195);
     glVertex2f(1.0,-0.61);
     glVertex2f(-1.0,-0.61);
     glVertex2f(-1.0,-0.6195);
     glEnd();


//road 2

glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(1.0,-0.7);
     glVertex2f(1.0,-0.6195);
     glVertex2f(-1.0,-0.6195);
     glVertex2f(-1.0,-0.7);
     glEnd();

glBegin(GL_QUADS);
      glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.6295);
     glVertex2f(1.0,-0.625);
     glVertex2f(-1.0,-0.625);
     glVertex2f(-1.0,-0.6295);
     glEnd();

glBegin(GL_QUADS);
      glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.695);
     glVertex2f(1.0,-0.69);
     glVertex2f(-1.0,-0.69);
     glVertex2f(-1.0,-0.695);
     glEnd();


glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(-.5,-0.66);
     glVertex2f(-.50,-0.67);
     glVertex2f(-1.0,-0.67);
     glVertex2f(-1.0,-0.66);
     glEnd();


glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.2,-0.66);
     glVertex2f(.20,-0.67);
     glVertex2f(-.30,-0.67);
     glVertex2f(-.30,-0.66);
     glEnd();
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.4,-0.66);
     glVertex2f(.40,-0.67);
     glVertex2f(.90,-0.67);
     glVertex2f(.90,-0.66);
     glEnd();

//car3
glPushMatrix();
glTranslatef(position13,0.0f, 0.0f);

     glBegin(GL_QUADS);
     glColor3ub(184, 0, 230);
     glVertex2f(-.23,-0.68);
     glVertex2f(-.23,-0.65);
     glVertex2f(-.32,-0.65);
     glVertex2f(-.32,-0.68);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(184, 0, 230);
     glVertex2f(-.26,-0.65);
     glVertex2f(-.26,-0.61);
     glVertex2f(-.313,-0.61);
     glVertex2f(-.313,-0.65);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-.265,-0.65);
     glVertex2f(-.265,-0.615);
     glVertex2f(-.309,-0.615);
     glVertex2f(-.309,-0.65);
     glEnd();
/*glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(-.29,-0.61);
     glVertex2f(-.29,-0.602);
     glVertex2f(-.3,-0.602);
     glVertex2f(-.3,-0.61);
     glEnd();*/


    glColor3ub(7, 8, 7);
    int m;

	 x=-.25f;  y=-.678f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(m = 0; m <= triangleAmount;m++) {
			glVertex2f(
		            x + (radius * cos(m *  twicePi / triangleAmount)),
			    y + (radius * sin(m * twicePi / triangleAmount))
			);
		}
	glEnd();


glColor3ub(7, 8, 7);
    int M;

	 x=-.30f;  y=-.678f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(M = 0; M <= triangleAmount;M++) {
			glVertex2f(
		            x + (radius * cos(M *  twicePi / triangleAmount)),
			    y + (radius * sin(M * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position14,0.0f, 0.0f);
//car4
     glBegin(GL_QUADS);
     glColor3ub(255, 77, 136);
     glVertex2f(.23,-0.68);
     glVertex2f(.23,-0.65);
     glVertex2f(.32,-0.65);
     glVertex2f(.32,-0.68);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 77, 136);
     glVertex2f(.29,-0.65);
     glVertex2f(.29,-0.61);
     glVertex2f(.24,-0.61);
     glVertex2f(.24,-0.65);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(.285,-0.65);
     glVertex2f(.285,-0.615);
     glVertex2f(.245,-0.615);
     glVertex2f(.245,-0.65);
     glEnd();
/*glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(-.29,-0.61);
     glVertex2f(-.29,-0.602);
     glVertex2f(-.3,-0.602);
     glVertex2f(-.3,-0.61);
     glEnd();*/


    glColor3ub(7, 8, 7);
    int n;

	 x=.25f;  y=-.678f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(n = 0; n <= triangleAmount;n++) {
			glVertex2f(
		            x + (radius * cos(n *  twicePi / triangleAmount)),
			    y + (radius * sin(n * twicePi / triangleAmount))
			);
		}
	glEnd();


glColor3ub(7, 8, 7);
    int N;

	 x=.30f;  y=-.678f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(N = 0; N <= triangleAmount;N++) {
			glVertex2f(
		            x + (radius * cos(N *  twicePi / triangleAmount)),
			    y + (radius * sin(N * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();


//grass 3

glBegin(GL_QUADS);
     glColor3ub(102, 153, 0);
     glVertex2f(1.0,-0.71);
     glVertex2f(1.0,-0.7);
     glVertex2f(-1.0,-0.7);
     glVertex2f(-1.0,-0.71);
     glEnd();
//mati 3

glBegin(GL_QUADS);
     glColor3ub(102, 51, 0);
     glVertex2f(1.0,-0.7195);
     glVertex2f(1.0,-0.71);
     glVertex2f(-1.0,-0.71);
     glVertex2f(-1.0,-0.7195);
     glEnd();

//road 3
glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(1.0,-0.8);
     glVertex2f(1.0,-0.7195);
     glVertex2f(-1.0,-0.7195);
     glVertex2f(-1.0,-0.8);
     glEnd();


     glBegin(GL_QUADS);
      glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.7295);
     glVertex2f(1.0,-0.725);
     glVertex2f(-1.0,-0.725);
     glVertex2f(-1.0,-0.7295);
     glEnd();


glBegin(GL_QUADS);
      glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.795);
     glVertex2f(1.0,-0.79);
     glVertex2f(-1.0,-0.79);
     glVertex2f(-1.0,-0.795);
     glEnd();


glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(-.5,-0.76);
     glVertex2f(-.50,-0.77);
     glVertex2f(-1.0,-0.77);
     glVertex2f(-1.0,-0.76);
     glEnd();

     glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.2,-0.76);
     glVertex2f(.20,-0.77);
     glVertex2f(-.30,-0.77);
     glVertex2f(-.30,-0.76);
     glEnd();


     glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.4,-0.76);
     glVertex2f(.40,-0.77);
     glVertex2f(.90,-0.77);
     glVertex2f(.90,-0.76);
     glEnd();
 //lal thomba

  glBegin(GL_QUADS);
glColor3ub(255, 0, 0);
     glVertex2f(.43,-0.8);
     glVertex2f(.43,-0.7);
     glVertex2f(.42,-0.7);
     glVertex2f(.42,-0.8);
     glEnd();
 glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
     glVertex2f(.43,-0.7);
     glVertex2f(.43,-0.6);
     glVertex2f(.42,-0.6);
     glVertex2f(.42,-0.7);
     glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 0, 0);
     glVertex2f(.43,-0.6);
     glVertex2f(.43,-0.5);
     glVertex2f(.42,-0.5);
     glVertex2f(.42,-0.6);
     glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
     glVertex2f(.43,-0.5);
     glVertex2f(.43,-0.45);
     glVertex2f(.42,-0.45);
     glVertex2f(.42,-0.5);
     glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
     glVertex2f(.43,-0.45);
     glVertex2f(.43,-0.4);
     glVertex2f(.42,-0.4);
     glVertex2f(.42,-0.45);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(.44,-0.43);
     glVertex2f(.435,-0.45);
     glVertex2f(.405,-0.45);
     glVertex2f(.41,-0.43);
     glEnd();
//car2
glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
glBegin(GL_QUADS);
     glColor3f(0,0,1);
     glVertex2f(.43,-0.78);
     glVertex2f(.43,-0.75);
     glVertex2f(.52,-0.75);
     glVertex2f(.52,-0.78);
     glEnd();
glBegin(GL_QUADS);
     glColor3f(0,0,1);
     glVertex2f(.46,-0.75);
     glVertex2f(.46,-0.71);
     glVertex2f(.513,-0.71);
     glVertex2f(.513,-0.75);
     glVertex2f(.465,-0.715);
     glVertex2f(.509,-0.715);
     glVertex2f(.509,-0.75);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(.49,-0.71);
     glVertex2f(.49,-0.702);
     glVertex2f(.5,-0.702);
     glVertex2f(.5,-0.71);
     glEnd();

glBegin(GL_QUADS);
     glColor3f(0, 0, 0);
     glVertex2f(.465,-0.75);
     glVertex2f(.465,-0.715);
     glVertex2f(.509,-0.715);
     glVertex2f(.509,-0.75);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(.49,-0.71);
     glVertex2f(.49,-0.702);
     glVertex2f(.5,-0.702);
     glVertex2f(.5,-0.71);
     glEnd();

    glColor3ub(7, 8, 7);
    int a;

	 x=.45f;  y=-.778f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(a = 0; a <= triangleAmount;a++) {
			glVertex2f(
		            x + (radius * cos(a *  twicePi / triangleAmount)),
			    y + (radius * sin(a * twicePi / triangleAmount))
			);
		}
	glEnd();


    glColor3ub(7, 8, 7);
    int s;

	 x=.50f;  y=-.778f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(s = 0; s <= triangleAmount;s++) {
			glVertex2f(
		            x + (radius * cos(s *  twicePi / triangleAmount)),
			    y + (radius * sin(s * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();








//GRASS 4
glBegin(GL_QUADS);
glColor3ub(102, 153, 0);
     glVertex2f(1.0,-0.85);
     glVertex2f(1.0,-0.8);
     glVertex2f(-1.0,-0.8);
     glVertex2f(-1.0,-0.85);
     glEnd();

//mati 4
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
     glVertex2f(1.0,-0.86);
     glVertex2f(1.0,-0.85);
     glVertex2f(-1.0,-0.85);
     glVertex2f(-1.0,-0.86);
     glEnd();

//road4
glBegin(GL_QUADS);
glColor3ub(115, 115, 115);
     glVertex2f(1.0,-0.86);
     glVertex2f(1.0,-0.97);
     glVertex2f(-1.0,-0.97);
     glVertex2f(-1.0,-0.86);
     glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
     glVertex2f(1.0,-0.87);
     glVertex2f(1.0,-0.875);
     glVertex2f(-1.0,-0.875);
     glVertex2f(-1.0,-0.87);
     glEnd();

     glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(-.5,-0.91);
     glVertex2f(-.50,-0.92);
     glVertex2f(-1.0,-0.92);
     glVertex2f(-1.0,-0.91);
     glEnd();

     glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.2,-0.91);
     glVertex2f(.20,-0.92);
     glVertex2f(-.30,-0.92);
     glVertex2f(-.30,-0.91);
     glEnd();


     glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.4,-0.91);
     glVertex2f(.40,-0.92);
     glVertex2f(.90,-0.92);
     glVertex2f(.90,-0.91);
     glEnd();



//grass4
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
     glVertex2f(1.0,-0.965);
     glVertex2f(1.0,-0.96);
     glVertex2f(-1.0,-0.96);
     glVertex2f(-1.0,-0.965);
     glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 153, 0);
     glVertex2f(1.0,-0.97);
     glVertex2f(1.0,-1.0);
     glVertex2f(-1.0,-1.0);
     glVertex2f(-1.0,-0.97);
     glEnd();
     glFlush();


 }
void display2()
{
     glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);

//SKY

     glBegin(GL_QUADS);
     glColor3ub(255, 133, 51);  //bright sky color
     glVertex2f(1.0,-0.4);
     glVertex2f(1.0,1.0);
     glVertex2f(-1.0,1.0);
     glVertex2f(-1.0,-0.4);
     glEnd();
//sun
 glColor3ub(242, 255, 0);

    int k;
    GLfloat x=.8f; GLfloat y=.06f;GLfloat radius =.1f;
	 int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(k = 0; k <= triangleAmount;k++) {
			glVertex2f(
		            x + (radius * cos(k *  twicePi / triangleAmount)),
			    y + (radius * sin(k * twicePi / triangleAmount))
			);
		}
	glEnd();


//cloud
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

 glColor3ub(255, 255, 255);

    int f;
     x=.6f; y=.7f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(f = 0; f <= triangleAmount;f++) {
			glVertex2f(
		            x + (radius * cos(f *  twicePi / triangleAmount)),
			    y + (radius * sin(f * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int g;
     x=.64f; y=.7f;radius =.04f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(g = 0; g <= triangleAmount;g++) {
			glVertex2f(
		            x + (radius * cos(g *  twicePi / triangleAmount)),
			    y + (radius * sin(g * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int h;
     x=.67f; y=.675f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(h = 0; h <= triangleAmount;h++) {
			glVertex2f(
		            x + (radius * cos(h *  twicePi / triangleAmount)),
			    y + (radius * sin(h * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int l;
     x=.625f; y=.665f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(l = 0; l <= triangleAmount;l++) {
			glVertex2f(
		            x + (radius * cos(l *  twicePi / triangleAmount)),
			    y + (radius * sin(l * twicePi / triangleAmount))
			);
		}
	glEnd();

//c2

glColor3ub(255, 255, 255);

    int F;
     x=.06f; y=.55f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(F = 0; F <= triangleAmount;F++) {
			glVertex2f(
		            x + (radius * cos(F *  twicePi / triangleAmount)),
			    y + (radius * sin(F * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);


    int G;
     x=.1f; y=.55f;radius =.04f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(G = 0; G <= triangleAmount;G++) {
			glVertex2f(
		            x + (radius * cos(G *  twicePi / triangleAmount)),
			    y + (radius * sin(G * twicePi / triangleAmount))
			);
		}
	glEnd();

int H;
     x=.13f; y=.525f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(H = 0; H <= triangleAmount;H++) {
			glVertex2f(
		            x + (radius * cos(H *  twicePi / triangleAmount)),
			    y + (radius * sin(H * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int L;
     x=.08f; y=.515f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(L = 0; L <= triangleAmount;L++) {
			glVertex2f(
		            x + (radius * cos(L *  twicePi / triangleAmount)),
			    y + (radius * sin(L * twicePi / triangleAmount))
			);
		}
	glEnd();

//c3
glColor3ub(255, 255, 255);

    int Q;
     x=-.2f; y=.8f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(Q = 0; Q <= triangleAmount;Q++) {
			glVertex2f(
		            x + (radius * cos(Q *  twicePi / triangleAmount)),
			    y + (radius * sin(Q * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int W;
     x=-.16f; y=.8f;radius =.04f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(W = 0; W <= triangleAmount;W++) {
			glVertex2f(
		            x + (radius * cos(W *  twicePi / triangleAmount)),
			    y + (radius * sin(W * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int E;
     x=-.13f; y=.775f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(E = 0; E <= triangleAmount;E++) {
			glVertex2f(
		            x + (radius * cos(E *  twicePi / triangleAmount)),
			    y + (radius * sin(E * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int R;
     x=-.175f; y=.765f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(R = 0; R <= triangleAmount;R++) {
			glVertex2f(
		            x + (radius * cos(R *  twicePi / triangleAmount)),
			    y + (radius * sin(R * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();
//c4
glPushMatrix();
glTranslatef(position1,0.0f, 0.0f);
glColor3ub(255, 255, 255);

    int T;
     x=-.7f; y=.7f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(T = 0; T <= triangleAmount;T++) {
			glVertex2f(
		            x + (radius * cos(T *  twicePi / triangleAmount)),
			    y + (radius * sin(T * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int U;
     x=-.66f; y=.7f;radius =.04f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(U = 0; U <= triangleAmount;U++) {
			glVertex2f(
		            x + (radius * cos(U *  twicePi / triangleAmount)),
			    y + (radius * sin(U * twicePi / triangleAmount))
			);
		}
	glEnd();

	int I;
     x=-.63f; y=.675f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(I = 0; I <= triangleAmount;I++) {
			glVertex2f(
		            x + (radius * cos(I *  twicePi / triangleAmount)),
			    y + (radius * sin(I * twicePi / triangleAmount))
			);
		}
	glEnd();

int O;
     x=-.675f; y=.665f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(O = 0; O <= triangleAmount;O++) {
			glVertex2f(
		            x + (radius * cos(O *  twicePi / triangleAmount)),
			    y + (radius * sin(O * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();


//right blding 1


//right blding 1






     glBegin(GL_QUADS);
     glColor3ub(163, 163, 194);
     glVertex2f(0.05,-0.50);
     glVertex2f(0.05,0.15);
     glVertex2f(-0.05,0.15);
     glVertex2f(-0.05,-0.50);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(179, 179, 204);
     glVertex2f(0.17,-0.50);
     glVertex2f(0.17,0.15);
     glVertex2f(0.05,0.15);
     glVertex2f(0.05,-0.50);
     glEnd();
//glass
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.12);
     glVertex2f(0.16,0.13);
     glVertex2f(0.06,0.13);
     glVertex2f(0.06,0.12);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.12);
     glVertex2f(0.16,0.13);
     glVertex2f(0.06,0.13);
     glVertex2f(0.06,0.12);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.10);
     glVertex2f(0.16,0.11);
     glVertex2f(0.06,0.11);
     glVertex2f(0.06,0.10);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.08);
     glVertex2f(0.16,0.09);
     glVertex2f(0.06,0.09);
     glVertex2f(0.06,0.08);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.06);
     glVertex2f(0.16,0.07);
     glVertex2f(0.06,0.07);
     glVertex2f(0.06,0.06);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.04);
     glVertex2f(0.16,0.05);
     glVertex2f(0.06,0.05);
     glVertex2f(0.06,0.04);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.02);
     glVertex2f(0.16,0.03);
     glVertex2f(0.06,0.03);
     glVertex2f(0.06,0.02);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.0);
     glVertex2f(0.16,0.01);
     glVertex2f(0.06,0.01);
     glVertex2f(0.06,0.0);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.02);
     glVertex2f(0.16,-0.01);
     glVertex2f(0.06,-0.01);
     glVertex2f(0.06,-0.02);
     glEnd();
 glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.04);
     glVertex2f(0.16,-0.03);
     glVertex2f(0.06,-0.03);
     glVertex2f(0.06,-0.04);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.06);
     glVertex2f(0.16,-0.05);
     glVertex2f(0.06,-0.05);
     glVertex2f(0.06,-0.06);
     glEnd();//
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.08);
     glVertex2f(0.16,-0.07);
     glVertex2f(0.06,-0.07);
     glVertex2f(0.06,-0.08);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.10);
     glVertex2f(0.16,-0.09);
     glVertex2f(0.06,-0.09);
     glVertex2f(0.06,-0.10);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.12);
     glVertex2f(0.16,-0.11);
     glVertex2f(0.06,-0.11);
     glVertex2f(0.06,-0.12);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.14);
     glVertex2f(0.16,-0.13);
     glVertex2f(0.06,-0.13);
     glVertex2f(0.06,-0.14);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.16);
     glVertex2f(0.16,-0.15);
     glVertex2f(0.06,-0.15);
     glVertex2f(0.06,-0.16);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.18);
     glVertex2f(0.16,-0.17);
     glVertex2f(0.06,-0.17);
     glVertex2f(0.06,-0.18);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.20);
     glVertex2f(0.16,-0.19);
     glVertex2f(0.06,-0.19);
     glVertex2f(0.06,-0.20);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.22);
     glVertex2f(0.16,-0.21);
     glVertex2f(0.06,-0.21);
     glVertex2f(0.06,-0.22);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.24);
     glVertex2f(0.16,-0.23);
     glVertex2f(0.06,-0.23);
     glVertex2f(0.06,-0.24);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.26);
     glVertex2f(0.16,-0.25);
     glVertex2f(0.06,-0.25);
     glVertex2f(0.06,-0.26);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.28);
     glVertex2f(0.16,-0.27);
     glVertex2f(0.06,-0.27);
     glVertex2f(0.06,-0.28);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.30);
     glVertex2f(0.16,-0.29);
     glVertex2f(0.06,-0.29);
     glVertex2f(0.06,-0.30);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.32);
     glVertex2f(0.16,-0.31);
     glVertex2f(0.06,-0.31);
     glVertex2f(0.06,-0.32);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.34);
     glVertex2f(0.16,-0.33);
     glVertex2f(0.06,-0.33);
     glVertex2f(0.06,-0.34);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.36);
     glVertex2f(0.16,-0.35);
     glVertex2f(0.06,-0.35);
     glVertex2f(0.06,-0.36);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.06);
     glVertex2f(0.16,-0.05);
     glVertex2f(0.06,-0.05);
     glVertex2f(0.06,-0.06);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.06);
     glVertex2f(0.16,-0.05);
     glVertex2f(0.06,-0.05);
     glVertex2f(0.06,-0.06);
     glEnd();


//Right blding 2

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(0.25,-0.50);
     glVertex2f(0.25,0.05);
     glVertex2f(0.17,0.05);
     glVertex2f(0.17,-0.50);
     glEnd();

//Right blding 3

     glBegin(GL_QUADS);
     glColor3ub(133, 173, 173);
     glVertex2f(0.37,-0.50);
     glVertex2f(0.37,0.1);
     glVertex2f(0.25,0.1);
     glVertex2f(0.25,-0.50);
     glEnd();

//GLASS
      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.365,-0.50);
     glVertex2f(0.365,0.085);
     glVertex2f(0.30,0.085);
     glVertex2f(0.30,-0.50);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.29,-0.50);
     glVertex2f(0.29,0.085);
     glVertex2f(0.255,0.085);
     glVertex2f(0.255,-0.50);
     glEnd();



//Right blding 5

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(0.53,-0.50);
     glVertex2f(0.53,0.3);
     glVertex2f(0.37,0.3);
     glVertex2f(0.37,-0.50);
     glEnd();


//glass
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.29);
     glVertex2f(0.525,0.28);
     glVertex2f(0.42,0.28);
     glVertex2f(0.42,0.29);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.27);
     glVertex2f(0.525,0.26);
     glVertex2f(0.42,0.26);
     glVertex2f(0.42,0.27);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.25);
     glVertex2f(0.525,0.24);
     glVertex2f(0.42,0.24);
     glVertex2f(0.42,0.25);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.23);
     glVertex2f(0.525,0.22);
     glVertex2f(0.42,0.22);
     glVertex2f(0.42,0.23);
     glEnd();



     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.21);
     glVertex2f(0.525,0.20);
     glVertex2f(0.42,0.20);
     glVertex2f(0.42,0.21);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.19);
     glVertex2f(0.525,0.18);
     glVertex2f(0.42,0.18);
     glVertex2f(0.42,0.19);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.17);
     glVertex2f(0.525,0.16);
     glVertex2f(0.42,0.16);
     glVertex2f(0.42,0.17);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.15);
     glVertex2f(0.525,0.14);
     glVertex2f(0.42,0.14);
     glVertex2f(0.42,0.15);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.13);
     glVertex2f(0.525,0.12);
     glVertex2f(0.42,0.12);
     glVertex2f(0.42,0.13);
     glEnd();



     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.11);
     glVertex2f(0.525,0.10);
     glVertex2f(0.42,0.10);
     glVertex2f(0.42,0.11);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.09);
     glVertex2f(0.525,0.08);
     glVertex2f(0.42,0.08);
     glVertex2f(0.42,0.09);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.07);
     glVertex2f(0.525,0.06);
     glVertex2f(0.42,0.06);
     glVertex2f(0.42,0.07);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.05);
     glVertex2f(0.525,0.04);
     glVertex2f(0.42,0.04);
     glVertex2f(0.42,0.05);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.03);
     glVertex2f(0.525,0.02);
     glVertex2f(0.42,0.02);
     glVertex2f(0.42,0.03);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.01);
     glVertex2f(0.525,0.00);
     glVertex2f(0.42,0.00);
     glVertex2f(0.42,0.01);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.01);
     glVertex2f(0.525,-0.02);
     glVertex2f(0.42,-0.02);
     glVertex2f(0.42,-0.01);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.03);
     glVertex2f(0.525,-0.04);
     glVertex2f(0.42,-0.04);
     glVertex2f(0.42,-0.03);
     glEnd();


 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.05);
     glVertex2f(0.525,-0.06);
     glVertex2f(0.42,-0.06);
     glVertex2f(0.42,-0.05);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.07);
     glVertex2f(0.525,-0.08);
     glVertex2f(0.42,-0.08);
     glVertex2f(0.42,-0.07);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.09);
     glVertex2f(0.525,-0.10);
     glVertex2f(0.42,-0.10);
     glVertex2f(0.42,-0.09);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.11);
     glVertex2f(0.525,-0.12);
     glVertex2f(0.42,-0.12);
     glVertex2f(0.42,-0.11);
     glEnd();


    glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.13);
     glVertex2f(0.525,-0.14);
     glVertex2f(0.42,-0.14);
     glVertex2f(0.42,-0.13);
     glEnd();

    glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.15);
     glVertex2f(0.525,-0.16);
     glVertex2f(0.42,-0.16);
     glVertex2f(0.42,-0.15);
     glEnd();

    glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.17);
     glVertex2f(0.525,-0.18);
     glVertex2f(0.42,-0.18);
     glVertex2f(0.42,-0.17);
     glEnd();


      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.19);
     glVertex2f(0.525,-0.20);
     glVertex2f(0.42,-0.20);
     glVertex2f(0.42,-0.19);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.21);
     glVertex2f(0.525,-0.22);
     glVertex2f(0.42,-0.22);
     glVertex2f(0.42,-0.21);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.23);
     glVertex2f(0.525,-0.24);
     glVertex2f(0.42,-0.24);
     glVertex2f(0.42,-0.23);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.25);
     glVertex2f(0.525,-0.26);
     glVertex2f(0.42,-0.26);
     glVertex2f(0.42,-0.25);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.27);
     glVertex2f(0.525,-0.28);
     glVertex2f(0.42,-0.28);
     glVertex2f(0.42,-0.27);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.29);
     glVertex2f(0.525,-0.30);
     glVertex2f(0.42,-0.30);
     glVertex2f(0.42,-0.29);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.31);
     glVertex2f(0.525,-0.32);
     glVertex2f(0.42,-0.32);
     glVertex2f(0.42,-0.31);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.33);
     glVertex2f(0.525,-0.34);
     glVertex2f(0.42,-0.34);
     glVertex2f(0.42,-0.33);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.35);
     glVertex2f(0.525,-0.36);
     glVertex2f(0.42,-0.36);
     glVertex2f(0.42,-0.35);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.37);
     glVertex2f(0.525,-0.38);
     glVertex2f(0.42,-0.38);
     glVertex2f(0.42,-0.37);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.39);
     glVertex2f(0.525,-0.40);
     glVertex2f(0.42,-0.40);
     glVertex2f(0.42,-0.39);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.41);
     glVertex2f(0.525,-0.42);
     glVertex2f(0.42,-0.42);
     glVertex2f(0.42,-0.41);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.43);
     glVertex2f(0.525,-0.44);
     glVertex2f(0.42,-0.44);
     glVertex2f(0.42,-0.43);
     glEnd();

// Right blding 4

  glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(0.5,-0.50);
     glVertex2f(0.5,-0.21);
     glVertex2f(0.3,-0.21);
     glVertex2f(0.3,-0.50);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(0.75,-0.50);
     glVertex2f(0.75,-0.21);
     glVertex2f(0.5,-0.21);
     glVertex2f(0.5,-0.50);
     glEnd();

 //glass

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.23);
     glVertex2f(0.74,-0.22);
     glVertex2f(0.51,-0.22);
     glVertex2f(0.51,-0.23);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.25);
     glVertex2f(0.74,-0.24);
     glVertex2f(0.51,-0.24);
     glVertex2f(0.51,-0.25);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.27);
     glVertex2f(0.74,-0.26);
     glVertex2f(0.51,-0.26);
     glVertex2f(0.51,-0.27);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.29);
     glVertex2f(0.74,-0.28);
     glVertex2f(0.51,-0.28);
     glVertex2f(0.51,-0.29);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.31);
     glVertex2f(0.74,-0.30);
     glVertex2f(0.51,-0.30);
     glVertex2f(0.51,-0.31);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.33);
     glVertex2f(0.74,-0.32);
     glVertex2f(0.51,-0.32);
     glVertex2f(0.51,-0.33);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.35);
     glVertex2f(0.74,-0.34);
     glVertex2f(0.51,-0.34);
     glVertex2f(0.51,-0.35);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.37);
     glVertex2f(0.74,-0.36);
     glVertex2f(0.51,-0.36);
     glVertex2f(0.51,-0.37);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.39);
     glVertex2f(0.74,-0.38);
     glVertex2f(0.51,-0.38);
     glVertex2f(0.51,-0.39);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.41);
     glVertex2f(0.74,-0.40);
     glVertex2f(0.51,-0.40);
     glVertex2f(0.51,-0.41);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.43);
     glVertex2f(0.74,-0.42);
     glVertex2f(0.51,-0.42);
     glVertex2f(0.51,-0.43);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.45);
     glVertex2f(0.74,-0.44);
     glVertex2f(0.51,-0.44);
     glVertex2f(0.51,-0.45);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.47);
     glVertex2f(0.74,-0.46);
     glVertex2f(0.51,-0.46);
     glVertex2f(0.51,-0.47);
     glEnd();

//Right blding 8
    glBegin(GL_QUADS);
     glColor3ub(133, 173, 173);
     glVertex2f(0.85,-0.50);
     glVertex2f(0.85,-0.25);
     glVertex2f(0.8,-0.25);
     glVertex2f(0.8,-0.50);
     glEnd();
//Right blding 6
     glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(0.85,-0.50);
     glVertex2f(0.85,-0.27);
     glVertex2f(0.75,-0.27);
     glVertex2f(0.75,-0.50);
     glEnd();
//glass
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.45);
     glVertex2f(0.84,-0.44);
     glVertex2f(0.76,-0.44);
     glVertex2f(0.76,-0.45);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.43);
     glVertex2f(0.84,-0.42);
     glVertex2f(0.76,-0.42);
     glVertex2f(0.76,-0.43);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.41);
     glVertex2f(0.84,-0.40);
     glVertex2f(0.76,-0.40);
     glVertex2f(0.76,-0.41);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.39);
     glVertex2f(0.84,-0.38);
     glVertex2f(0.76,-0.38);
     glVertex2f(0.76,-0.39);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.37);
     glVertex2f(0.84,-0.36);
     glVertex2f(0.76,-0.36);
     glVertex2f(0.76,-0.37);
     glEnd();
   glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.34);
     glVertex2f(0.84,-0.35);
     glVertex2f(0.76,-0.35);
     glVertex2f(0.76,-0.34);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.32);
     glVertex2f(0.84,-0.33);
     glVertex2f(0.76,-0.33);
     glVertex2f(0.76,-0.32);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.30);
     glVertex2f(0.84,-0.31);
     glVertex2f(0.76,-0.31);
     glVertex2f(0.76,-0.30);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.28);
     glVertex2f(0.84,-0.29);
     glVertex2f(0.76,-0.29);
     glVertex2f(0.76,-0.28);
     glEnd();

//Right blding 7


     glBegin(GL_QUADS);
     glColor3ub(92, 138, 138);
     glVertex2f(0.9,-0.50);
     glVertex2f(0.9,-0.105);
     glVertex2f(0.85,-0.1);
     glVertex2f(0.85,-0.50);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(1.,-0.50);
     glVertex2f(1.0,-0.105);
     glVertex2f(0.9,-0.105);
     glVertex2f(0.9,-0.50);
     glEnd();
//glass
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.45);
     glVertex2f(.995,-0.44);
     glVertex2f(0.91,-0.44);
     glVertex2f(0.91,-0.45);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.43);
     glVertex2f(.995,-0.42);
     glVertex2f(0.91,-0.42);
     glVertex2f(0.91,-0.43);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.41);
     glVertex2f(.995,-0.40);
     glVertex2f(0.91,-0.40);
     glVertex2f(0.91,-0.41);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.39);
     glVertex2f(.995,-0.38);
     glVertex2f(0.91,-0.38);
     glVertex2f(0.91,-0.39);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.37);
     glVertex2f(.995,-0.36);
     glVertex2f(0.91,-0.36);
     glVertex2f(0.91,-0.37);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.35);
     glVertex2f(.995,-0.34);
     glVertex2f(0.91,-0.34);
     glVertex2f(0.91,-0.35);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.33);
     glVertex2f(.995,-0.32);
     glVertex2f(0.91,-0.32);
     glVertex2f(0.91,-0.33);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.31);
     glVertex2f(.995,-0.30);
     glVertex2f(0.91,-0.30);
     glVertex2f(0.91,-0.31);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.29);
     glVertex2f(.995,-0.28);
     glVertex2f(0.91,-0.28);
     glVertex2f(0.91,-0.29);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.27);
     glVertex2f(.995,-0.26);
     glVertex2f(0.91,-0.26);
     glVertex2f(0.91,-0.27);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.25);
     glVertex2f(.995,-0.24);
     glVertex2f(0.91,-0.24);
     glVertex2f(0.91,-0.25);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.23);
     glVertex2f(.995,-0.22);
     glVertex2f(0.91,-0.22);
     glVertex2f(0.91,-0.23);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.21);
     glVertex2f(.995,-0.20);
     glVertex2f(0.91,-0.20);
     glVertex2f(0.91,-0.21);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.19);
     glVertex2f(.995,-0.18);
     glVertex2f(0.91,-0.18);
     glVertex2f(0.91,-0.19);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.17);
     glVertex2f(.995,-0.16);
     glVertex2f(0.91,-0.16);
     glVertex2f(0.91,-0.17);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.15);
     glVertex2f(.995,-0.14);
     glVertex2f(0.91,-0.14);
     glVertex2f(0.91,-0.15);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.13);
     glVertex2f(.995,-0.12);
     glVertex2f(0.91,-0.12);
     glVertex2f(0.91,-0.13);
     glEnd();


//LEFT SIDE BLDING 1  //************************


     glBegin(GL_QUADS);
     glColor3ub(204, 51, 0);
     glVertex2f(-.95,-0.4);
     glVertex2f(-.95,0.17);
     glVertex2f(-1.0,0.17);
     glVertex2f(-1.0,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(230, 57, 0);
     glVertex2f(-.8,-0.4);
     glVertex2f(-.8,0.17);
     glVertex2f(-.950,0.17);
     glVertex2f(-.950,-0.4);
     glEnd();



//glass#####
glBegin(GL_QUADS);
     glColor3ub(255, 255, 179);
     glVertex2f(-.81,-0.4);
     glVertex2f(-.81,0.15);
     glVertex2f(-.945,0.15);
     glVertex2f(-.945,-0.4);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(255, 255, 179);
     glVertex2f(-.96,-0.4);
     glVertex2f(-.96,0.15);
     glVertex2f(-.995,0.15);
     glVertex2f(-.995,-0.4);
     glEnd();


//LEFT SIDE BLDING 2


glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(-.75,-0.4);
     glVertex2f(-.75,-0.13);
     glVertex2f(-0.8,-0.13);
     glVertex2f(-.8,-0.4);
     glEnd();
//LEFT SIDE BLDING 3

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(-.65,-0.4);
     glVertex2f(-.65,-0.08);
     glVertex2f(-0.75,-0.08);
     glVertex2f(-.75,-0.4);
     glEnd();

//LEFT SIDE BLDING 4


//bldingside

     glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.6,-0.4);
     glVertex2f(-.6,0.31);
     glVertex2f(-0.65,0.31);
     glVertex2f(-.65,-0.4);
     glEnd();
//miror 1


glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(-.59,-0.4);
     glVertex2f(-.59,0.29);
     glVertex2f(-0.64,0.29);
     glVertex2f(-.64,-0.4);
     glEnd();

//blding

     glBegin(GL_QUADS);
     glColor3ub(204, 204, 204);
     glVertex2f(-.5,-0.4);
     glVertex2f(-.5,0.31);
     glVertex2f(-0.6,0.31);
     glVertex2f(-.6,-0.4);
     glEnd();

//miror 2
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(-.51,-0.4);
     glVertex2f(-.51,0.29);
     glVertex2f(-0.59,0.29);
     glVertex2f(-.59,-0.4);
     glEnd();

//LEFT SIDE BLDING 5

      glBegin(GL_QUADS);
     glColor3ub(198, 140, 83);
     glVertex2f(-.45,-0.4);
     glVertex2f(-.45,0.09);
     glVertex2f(-0.5,0.09);
     glVertex2f(-0.5,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(204, 153, 102);
     glVertex2f(-.4,-0.4);
     glVertex2f(-.4,0.09);
     glVertex2f(-0.45,0.09);
     glVertex2f(-0.45,-0.4);
     glEnd();
//Glass
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.405,-0.4);
     glVertex2f(-.405,0.08);
     glVertex2f(-0.447,0.08);
     glVertex2f(-0.447,-0.4);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.457,-0.4);
     glVertex2f(-.457,0.08);
     glVertex2f(-0.495,0.08);
     glVertex2f(-0.495,-0.4);
     glEnd();

//thamba

glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.35,-0.4);
     glVertex2f(-.35,0.35);
     glVertex2f(-0.4,0.35);
    glVertex2f(-0.4,-0.4);
      glEnd();
glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.36,0.35);
     glVertex2f(-.36,0.37);
     glVertex2f(-0.39,0.37);
    glVertex2f(-0.39,0.35);
      glEnd();


      glBegin(GL_QUADS);//fst mota
     glColor3ub(89, 89, 89);
     glVertex2f(-.345,0.37);
     glVertex2f(-.345,0.45);
     glVertex2f(-0.405,0.45);
    glVertex2f(-0.405,0.37);
      glEnd();

      glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.36,0.45);
     glVertex2f(-.36,0.47);
     glVertex2f(-0.39,0.47);
    glVertex2f(-0.39,0.45);
      glEnd();

       glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.35,0.47);
     glVertex2f(-.35,0.48);
     glVertex2f(-0.40,0.48);
    glVertex2f(-0.40,0.47);
      glEnd();


       glBegin(GL_QUADS);//2nd mota
     glColor3ub(89, 89, 89);
     glVertex2f(-.33,0.48);
     glVertex2f(-.33,0.54);
     glVertex2f(-0.42,0.54);
    glVertex2f(-0.42,0.48);
      glEnd();
glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.36,0.54);
     glVertex2f(-.36,0.56);
     glVertex2f(-0.39,0.56);
    glVertex2f(-0.39,0.54);
      glEnd();

      glBegin(GL_QUADS);//dandi
     glColor3ub(89, 89, 89);
     glVertex2f(-.38,0.56);
     glVertex2f(-.38,0.8);
     glVertex2f(-0.385,0.8);
    glVertex2f(-0.385,0.56);
      glEnd();


      glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.365,0.56);
     glVertex2f(-.365,0.8);
     glVertex2f(-0.37,0.8);
    glVertex2f(-0.37,0.56);
      glEnd();




      glBegin(GL_QUADS);//dandi matha
     glColor3ub(89, 89, 89);
     glVertex2f(-.365,0.8);
     glVertex2f(-.365,0.81);
     glVertex2f(-0.385,0.81);
    glVertex2f(-0.385,0.8);
      glEnd();

  //thamba dim

//left blding 6


     glBegin(GL_QUADS);
     glColor3ub(204, 153, 102);
     glVertex2f(-.2,-0.4);
     glVertex2f(-.2,-0.09);
     glVertex2f(-0.3,-0.09);
     glVertex2f(-0.3,-0.4);
      glEnd();

     glBegin(GL_QUADS);
     glColor3ub(198, 140, 83);
     glVertex2f(-.3,-0.4);
     glVertex2f(-.3,-0.09);
     glVertex2f(-0.37,-0.09);
     glVertex2f(-0.37,-0.4);
      glEnd();
//Glass
glBegin(GL_QUADS);
     glColor3ub(214, 214, 194);
     glVertex2f(-.31,-0.4);
     glVertex2f(-.31,-0.10);
     glVertex2f(-0.365,-0.10);
     glVertex2f(-0.365,-0.4);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.21,-0.4);
     glVertex2f(-.21,-0.10);
     glVertex2f(-0.29,-0.10);
     glVertex2f(-0.29,-0.4);
      glEnd();




//left blding 7


glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(-.1,-0.4);
     glVertex2f(-.1,-0.15);
     glVertex2f(-0.15,-0.15);
    glVertex2f(-0.15,-0.4);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(-.15,-0.4);
     glVertex2f(-.15,-0.15);
     glVertex2f(-0.2,-0.15);
    glVertex2f(-0.2,-0.4);
      glEnd();
//Glass
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.16);
     glVertex2f(-.103,-0.17);
     glVertex2f(-0.145,-0.17);
    glVertex2f(-0.145,-0.16);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.18);
     glVertex2f(-.103,-0.19);
     glVertex2f(-0.145,-0.19);
    glVertex2f(-0.145,-0.18);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.20);
     glVertex2f(-.103,-0.21);
     glVertex2f(-0.145,-0.21);
    glVertex2f(-0.145,-0.20);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.22);
     glVertex2f(-.103,-0.23);
     glVertex2f(-0.145,-0.23);
    glVertex2f(-0.145,-0.22);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.24);
     glVertex2f(-.103,-0.25);
     glVertex2f(-0.145,-0.25);
    glVertex2f(-0.145,-0.24);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.26);
     glVertex2f(-.103,-0.27);
     glVertex2f(-0.145,-0.27);
    glVertex2f(-0.145,-0.26);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.28);
     glVertex2f(-.103,-0.29);
     glVertex2f(-0.145,-0.29);
    glVertex2f(-0.145,-0.28);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.30);
     glVertex2f(-.103,-0.31);
     glVertex2f(-0.145,-0.31);
    glVertex2f(-0.145,-0.30);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.32);
     glVertex2f(-.103,-0.33);
     glVertex2f(-0.145,-0.33);
    glVertex2f(-0.145,-0.32);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.34);
     glVertex2f(-.103,-0.35);
     glVertex2f(-0.145,-0.35);
    glVertex2f(-0.145,-0.34);
      glEnd();
       glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.36);
     glVertex2f(-.103,-0.37);
     glVertex2f(-0.145,-0.37);
    glVertex2f(-0.145,-0.36);
      glEnd();


glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.16);
     glVertex2f(-.155,-0.17);
     glVertex2f(-0.195,-0.17);
    glVertex2f(-0.195,-0.16);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.18);
     glVertex2f(-.155,-0.19);
     glVertex2f(-0.195,-0.19);
    glVertex2f(-0.195,-0.18);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.20);
     glVertex2f(-.155,-0.21);
     glVertex2f(-0.195,-0.21);
     glVertex2f(-0.195,-0.20);
      glEnd();
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.22);
     glVertex2f(-.155,-0.23);
     glVertex2f(-0.195,-0.23);
    glVertex2f(-0.195,-0.22);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.24);
     glVertex2f(-.155,-0.25);
     glVertex2f(-0.195,-0.25);
    glVertex2f(-0.195,-0.24);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.26);
     glVertex2f(-.155,-0.27);
     glVertex2f(-0.195,-0.27);
    glVertex2f(-0.195,-0.26);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.28);
     glVertex2f(-.155,-0.29);
     glVertex2f(-0.195,-0.29);
    glVertex2f(-0.195,-0.28);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.30);
     glVertex2f(-.155,-0.31);
     glVertex2f(-0.195,-0.31);
    glVertex2f(-0.195,-0.30);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.32);
     glVertex2f(-.155,-0.33);
     glVertex2f(-0.195,-0.33);
    glVertex2f(-0.195,-0.32);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.34);
     glVertex2f(-.155,-0.35);
     glVertex2f(-0.195,-0.35);
    glVertex2f(-0.195,-0.34);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.36);
     glVertex2f(-.155,-0.37);
     glVertex2f(-0.195,-0.37);
    glVertex2f(-0.195,-0.36);
      glEnd();

//choto thamba

      glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.14,-0.15);
     glVertex2f(-.14,0.05);
     glVertex2f(-0.144,0.05);
    glVertex2f(-0.144,-0.15);
      glEnd();

 glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.16,-0.15);
     glVertex2f(-.16,0.05);
     glVertex2f(-0.164,0.05);
    glVertex2f(-0.164,-0.15);
      glEnd();


       glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.14,-0.0);
     glVertex2f(-.14,0.05);
     glVertex2f(-0.164,0.05);
    glVertex2f(-0.164,-0.0);
      glEnd();

      glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.151,0.05);
     glVertex2f(-.151,0.09);
     glVertex2f(-0.153,0.09);
    glVertex2f(-0.153,0.05);
      glEnd();


glBegin(GL_QUADS);//lite
     glColor3ub(255, 0, 0);
     glVertex2f(-.151,0.09);
     glVertex2f(-.151,0.095);
     glVertex2f(-0.153,0.095);
     glVertex2f(-0.153,0.09);
     glEnd();
//left blding 8


glBegin(GL_QUADS);
     glColor3ub(179, 179, 204);
     glVertex2f(-.05,-0.5);
     glVertex2f(-.05,-0.1);
     glVertex2f(-0.1,-0.1);
     glVertex2f(-0.1,-0.5);
     glEnd();


   //land blding

   /*glBegin(GL_POLYGON);
     glColor3ub(115, 115, 115);
     glVertex2f(-0.195,-0.3);
     glVertex2f(-0.2,-0.285);
     glVertex2f(-0.30,-0.2);
     glVertex2f(-0.40,-0.185);
     glVertex2f(-0.550,-0.2);
     glVertex2f(-0.60,-0.25);
     glEnd();*/
//BRIZ

 glBegin(GL_QUADS);//1
     glColor3ub(179, 179, 179);
     glVertex2f(0.35,-0.5);
     glVertex2f(0.35,-0.48);
     glVertex2f(0.335,-0.48);
     glVertex2f(.335,-0.50);
     glEnd();
glBegin(GL_QUADS);//11
     glColor3ub(179, 179, 179);
     glVertex2f(0.355,-0.48);
     glVertex2f(0.355,-0.477);
     glVertex2f(0.330,-0.477);
     glVertex2f(.330,-0.48);
     glEnd();


glBegin(GL_QUADS);//2
     glColor3ub(179, 179, 179);
     glVertex2f(0.7,-0.5);
     glVertex2f(0.7,-0.48);
     glVertex2f(0.685,-0.48);
     glVertex2f(.685,-0.50);
     glEnd();

glBegin(GL_QUADS);//21
     glColor3ub(179, 179, 179);
     glVertex2f(0.705,-0.48);
     glVertex2f(0.706,-0.477);
     glVertex2f(0.680,-0.477);
     glVertex2f(.680,-0.48);
     glEnd();



glBegin(GL_QUADS);//3
     glColor3ub(179, 179, 179);
     glVertex2f(0.999,-0.5);
     glVertex2f(0.999,-0.48);
     glVertex2f(0.985,-0.48);
     glVertex2f(.985,-0.50);
     glEnd();


glBegin(GL_QUADS);//31
     glColor3ub(179, 179, 179);
     glVertex2f(0.99905,-0.48);
     glVertex2f(0.99905,-0.477);
     glVertex2f(0.980,-0.477);
     glVertex2f(.980,-0.48);
     glEnd();

glBegin(GL_QUADS);//BRZ road
     glColor3ub(179, 179, 179);
     glVertex2f(1.0,-0.477);
     glVertex2f(1.0,-0.457);
     glVertex2f(0.17,-0.457);
     glVertex2f(.17,-0.477);
     glEnd();

//BRIZ CAR
glPushMatrix();
glTranslatef(position4,0.0f, 0.0f);
glBegin(GL_QUADS);//c1
     glColor3ub(255, 0, 0);
     glVertex2f(.99,-0.47);
     glVertex2f(.99,-0.460);
     glVertex2f(0.985,-0.460);
     glVertex2f(.985,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position5,0.0f, 0.0f);
glBegin(GL_QUADS);//c2
     glColor3ub(0, 0, 0);
     glVertex2f(.980,-0.47);
     glVertex2f(.980,-0.460);
     glVertex2f(0.975,-0.460);
     glVertex2f(.975,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position6,0.0f, 0.0f);
glBegin(GL_QUADS);//c3
     glColor3ub(0, 0, 153);
     glVertex2f(.780,-0.47);
     glVertex2f(.780,-0.460);
     glVertex2f(0.775,-0.460);
     glVertex2f(.775,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position7,0.0f, 0.0f);
glBegin(GL_QUADS);//c3
     glColor3ub(255, 0, 0);
     glVertex2f(.790,-0.47);
     glVertex2f(.790,-0.460);
     glVertex2f(0.785,-0.460);
     glVertex2f(.785,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position8,0.0f, 0.0f);
glBegin(GL_QUADS);//c4
     glColor3ub(0, 0, 153);
     glVertex2f(.680,-0.47);
     glVertex2f(.680,-0.460);
     glVertex2f(0.675,-0.460);
     glVertex2f(.675,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position9,0.0f, 0.0f);
glBegin(GL_QUADS);//c4
     glColor3ub(255, 0, 0);
     glVertex2f(.690,-0.47);
     glVertex2f(.690,-0.460);
     glVertex2f(0.685,-0.460);
     glVertex2f(.685,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position10,0.0f, 0.0f);
glBegin(GL_QUADS);//c5
     glColor3ub(0, 0, 153);
     glVertex2f(.580,-0.47);
     glVertex2f(.580,-0.460);
     glVertex2f(0.575,-0.460);
     glVertex2f(.575,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position11,0.0f, 0.0f);
glBegin(GL_QUADS);//c5
     glColor3ub(255, 0, 0);
     glVertex2f(.5950,-0.47);
     glVertex2f(.5950,-0.460);
     glVertex2f(0.590,-0.460);
     glVertex2f(.590,-0.47);
     glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(position12,0.0f, 0.0f);
glBegin(GL_QUADS);//c6
     glColor3ub(0, 0, 153);
     glVertex2f(.480,-0.47);
     glVertex2f(.480,-0.460);
     glVertex2f(0.475,-0.460);
     glVertex2f(.475,-0.47);
   glEnd();
glPopMatrix();


//Land yellow bulding================================================







glColor3ub(51, 102, 0);
    int e;

	 x=0.10f;  y=-.45f;  radius =.04f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(e = 0; e <= triangleAmount;e++) {
			glVertex2f(
		            x + (radius * cos(e *  twicePi / triangleAmount)),
			    y + (radius * sin(e * twicePi / triangleAmount))
			);
		}
	glEnd();
glColor3ub(64, 128, 0);
    int w;

	 x=0.14f;  y=-.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(w = 0; w <= triangleAmount;w++) {
			glVertex2f(
		            x + (radius * cos(w *  twicePi / triangleAmount)),
			    y + (radius * sin(w * twicePi / triangleAmount))
			);
		}
	glEnd();











glBegin(GL_QUADS);//yellow
     glColor3ub(255, 209, 26);
     glVertex2f(-0.18,-0.30);
     glVertex2f(-0.18,-0.40);
     glVertex2f(-.62,-0.40);
     glVertex2f(-.62,-0.30);
     glEnd();

//glass
glBegin(GL_QUADS);//yellow
     glColor3ub(179, 204, 204);
     glVertex2f(-0.19,-0.32);
     glVertex2f(-0.19,-0.39);
     glVertex2f(-.61,-0.39);
     glVertex2f(-.61,-0.32);
     glEnd();





glBegin(GL_QUADS);//yellow
     glColor3ub(255, 214, 51);
     glVertex2f(0.12,-0.50);
     glVertex2f(0.12,-0.38);
     glVertex2f(-0.20,-0.38);
     glVertex2f(-0.20,-0.50);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);//white
     glVertex2f(0.12,-0.50);
     glVertex2f(0.12,-0.38);
     glVertex2f(0.115,-0.38);
     glVertex2f(0.115,-0.50);
     glEnd();
glBegin(GL_QUADS);//yellow
     glColor3ub(255, 214, 51);
     glVertex2f(-0.6,-0.50);
     glVertex2f(-0.6,-0.38);
     glVertex2f(-1.0,-0.38);
     glVertex2f(-1.0,-0.50);
     glEnd();






glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(0.10,-0.50);
     glVertex2f(0.10,-0.40);
     glVertex2f(-0.98,-0.40);
     glVertex2f(-0.98,-0.50);
     glEnd();


glBegin(GL_QUADS);//glass
     glColor3ub(221, 204, 255);
     glVertex2f(0.10,-0.50);
     glVertex2f(0.10,-0.41);
     glVertex2f(-0.98,-0.41);
     glVertex2f(-.98,-0.50);
     glEnd();

//side black
glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(0.10,-0.50);
     glVertex2f(0.10,-0.40);
     glVertex2f(0.08,-0.40);
     glVertex2f(.08,-0.50);
     glEnd();









//GLASS border yellow


glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//black yellow
     glVertex2f(0.08,-0.42);
     glVertex2f(0.08,-0.41);
     glVertex2f(-0.98,-0.41);
     glVertex2f(-.98,-0.42);
     glEnd();

glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//black yellow y1
     glVertex2f(0.08,-0.5);
     glVertex2f(0.08,-0.42);
     glVertex2f(.076,-0.42);
     glVertex2f(.076,-0.5);
     glEnd();

glBegin(GL_QUADS);//glass
     glColor3ub(198, 83, 198);//violet
     glVertex2f(0.076,-0.425);
     glVertex2f(0.076,-0.42);
     glVertex2f(-0.98,-0.42);
     glVertex2f(-.98,-0.425);
     glEnd();
glBegin(GL_QUADS);//glass
     glColor3ub(198, 83, 198);//v1
     glVertex2f(0.076,-0.5);
     glVertex2f(0.076,-0.42);
     glVertex2f(.072,-0.42);
     glVertex2f(.072,-0.5);
     glEnd();

/*glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y2
     glVertex2f(0.058,-0.5);
     glVertex2f(0.058,-0.42);
     glVertex2f(.055,-0.42);
     glVertex2f(.055,-0.5);
   glEnd();




glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y3
     glVertex2f(0.037,-0.5);
     glVertex2f(0.037,-0.42);
     glVertex2f(.034,-0.42);
     glVertex2f(.034,-0.5);
   glEnd();



glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y4
     glVertex2f(0.016,-0.5);
     glVertex2f(0.016,-0.42);
     glVertex2f(.013,-0.42);
     glVertex2f(.013,-0.5);
   glEnd();


glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y5
     glVertex2f(-0.005,-0.5);
     glVertex2f(-0.005,-0.42);
     glVertex2f(-.002,-0.42);
     glVertex2f(-.002,-0.5);
   glEnd();



glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y6
     glVertex2f(-0.02,-0.5);
     glVertex2f(-0.02,-0.42);
     glVertex2f(-.023,-0.42);
     glVertex2f(-.023,-0.5);
   glEnd();




glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y7
     glVertex2f(-0.041,-0.5);
     glVertex2f(-0.041,-0.42);
     glVertex2f(-.044,-0.42);
     glVertex2f(-.044,-0.5);
   glEnd();



glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y8
     glVertex2f(-0.062,-0.5);
     glVertex2f(-0.062,-0.42);
     glVertex2f(-.065,-0.42);
     glVertex2f(-.065,-0.5);
   glEnd();





glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y9
     glVertex2f(-0.083,-0.5);
     glVertex2f(-0.083,-0.42);
     glVertex2f(-.086,-0.42);
     glVertex2f(-.086,-0.5);
   glEnd();




glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y10
     glVertex2f(-0.104,-0.5);
     glVertex2f(-0.104,-0.42);
     glVertex2f(-.107,-0.42);
     glVertex2f(-.107,-0.5);
   glEnd();





glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y11
     glVertex2f(-0.125,-0.5);
     glVertex2f(-0.125,-0.42);
     glVertex2f(-.128,-0.42);
     glVertex2f(-.128,-0.5);
   glEnd();




glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y12
     glVertex2f(-0.146,-0.5);
     glVertex2f(-0.146,-0.42);
     glVertex2f(-.149,-0.42);
     glVertex2f(-.149,-0.5);
   glEnd();




   glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y13
     glVertex2f(-0.167,-0.5);
     glVertex2f(-0.167,-0.42);
     glVertex2f(-.17,-0.42);
     glVertex2f(-.17,-0.5);
   glEnd();




   glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y14
     glVertex2f(-0.188,-0.5);
     glVertex2f(-0.188,-0.42);
     glVertex2f(-.191,-0.42);
     glVertex2f(-.191,-0.5);
   glEnd();




   glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y15
     glVertex2f(-0.209,-0.5);
     glVertex2f(-0.209,-0.42);
     glVertex2f(-.212,-0.42);
     glVertex2f(-.212,-0.5);
   glEnd();


 glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y16
     glVertex2f(-0.23,-0.5);
     glVertex2f(-0.23,-0.42);
     glVertex2f(-.235,-0.42);
     glVertex2f(-.235,-0.5);
   glEnd();

glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y17
     glVertex2f(-0.271,-0.5);
     glVertex2f(-0.271,-0.42);
     glVertex2f(-.276,-0.42);
     glVertex2f(-.276,-0.5);
   glEnd();
   */




//tree@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

   glColor3ub(51, 102, 0);
    int q;

	 x=0.19f;  y=-.5f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount;q++) {
			glVertex2f(
		            x + (radius * cos(q *  twicePi / triangleAmount)),
			    y + (radius * sin(q * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(51, 102, 0);
    int r;

	 x=0.22f;  y=-.48f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(r = 0; r <= triangleAmount;r++) {
			glVertex2f(
		            x + (radius * cos(r *  twicePi / triangleAmount)),
			    y + (radius * sin(r * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(51, 102, 0);
    int t;

	 x=0.25f;  y=-.5f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(t = 0; t <= triangleAmount;t++) {
			glVertex2f(
		            x + (radius * cos(t *  twicePi / triangleAmount)),
			    y + (radius * sin(t * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(77, 153, 0);
    int u;

	 x=0.28f;  y=-.49f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(u = 0; u <= triangleAmount;u++) {
			glVertex2f(
		            x + (radius * cos(u *  twicePi / triangleAmount)),
			    y + (radius * sin(u * twicePi / triangleAmount))
			);
		}
	glEnd();


glColor3ub(77, 153, 0);
    int o;

	 x=0.31f;  y=-.48f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(o = 0; o <= triangleAmount;o++) {
			glVertex2f(
		            x + (radius * cos(o *  twicePi / triangleAmount)),
			    y + (radius * sin(o * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(77, 153, 0);
    int p;

	 x=0.34f;  y=-.49f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(p = 0; p <= triangleAmount;p++) {
			glVertex2f(
		            x + (radius * cos(p *  twicePi / triangleAmount)),
			    y + (radius * sin(p * twicePi / triangleAmount))
			);
		}
	glEnd();















   glBegin(GL_QUADS);//side line
     glColor3ub(255, 214, 51);//yellow
     glVertex2f(0.75,-0.5);
     glVertex2f(0.75,-0.49);
     glVertex2f(0.12,-0.49);
     glVertex2f(.12,-0.50);
   glEnd();

//grass


glBegin(GL_QUADS);
     glColor3ub(102, 153, 0);
     glVertex2f(1.0,-0.53);
     glVertex2f(1.0,-0.50);
     glVertex2f(-1.0,-0.50);
     glVertex2f(-1.0,-0.53);
     glEnd();
//mati

glBegin(GL_QUADS);
     glColor3ub(102, 51, 0);
     glVertex2f(1.0,-0.52);
     glVertex2f(1.0,-0.53);
     glVertex2f(-1.0,-0.53);
     glVertex2f(-1.0,-0.52);
     glEnd();


 //road1

glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(1.0,-0.6);
     glVertex2f(1.0,-0.53);
     glVertex2f(-1.0,-0.53);
     glVertex2f(-1.0,-0.6);
     glEnd();

glBegin(GL_QUADS);//road line
     glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.54);
     glVertex2f(1.0,-0.5390);
     glVertex2f(-1.0,-0.5390);
     glVertex2f(-1.0,-0.54);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255 );
     glVertex2f(-0.50,-0.565);
     glVertex2f(-0.50,-0.557);
     glVertex2f(-1.0,-0.557);
     glVertex2f(-1.0,-0.565);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(0.20,-0.565);
     glVertex2f(0.20,-0.557);
     glVertex2f(-0.30,-0.557);
     glVertex2f(-0.30,-0.565);
     glEnd();
      glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(0.40,-0.565);
     glVertex2f(0.40,-0.557);
     glVertex2f(0.90,-0.557);
     glVertex2f(0.90,-0.565);
     glEnd();






//car
glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_QUADS);
     glColor3ub(230, 255, 255);
     glVertex2f(.23,-0.58);
     glVertex2f(.23,-0.55);
     glVertex2f(.32,-0.55);
     glVertex2f(.32,-0.58);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(230, 255, 255);
     glVertex2f(.26,-0.55);
     glVertex2f(.26,-0.51);
     glVertex2f(.313,-0.51);
     glVertex2f(.313,-0.55);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(.265,-0.55);
     glVertex2f(.265,-0.515);
     glVertex2f(.309,-0.515);
     glVertex2f(.309,-0.55);
     glEnd();
/*glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(.29,-0.51);
     glVertex2f(.29,-0.502);
     glVertex2f(.3,-0.502);
     glVertex2f(.3,-0.51);
     glEnd();*/


    glColor3ub(7, 8, 7);
    int i;

	 x=.25f;  y=-.578f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glColor3ub(7, 8, 7);
    int j;

	 x=.30f;  y=-.578f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();


glBegin(GL_QUADS);
     glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.595);
     glVertex2f(1.0,-0.590);
     glVertex2f(-1.0,-0.590);
     glVertex2f(-1.0,-0.595);
     glEnd();

//grass 2

glBegin(GL_QUADS);
     glColor3ub(102, 153, 0);
     glVertex2f(1.0,-0.61);
     glVertex2f(1.0,-0.6);
     glVertex2f(-1.0,-0.6);
     glVertex2f(-1.0,-0.61);
     glEnd();
//mati 2

   glBegin(GL_QUADS);
     glColor3ub(102, 51, 0);
     glVertex2f(1.0,-0.6195);
     glVertex2f(1.0,-0.61);
     glVertex2f(-1.0,-0.61);
     glVertex2f(-1.0,-0.6195);
     glEnd();


//road 2

glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(1.0,-0.7);
     glVertex2f(1.0,-0.6195);
     glVertex2f(-1.0,-0.6195);
     glVertex2f(-1.0,-0.7);
     glEnd();

glBegin(GL_QUADS);
      glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.6295);
     glVertex2f(1.0,-0.625);
     glVertex2f(-1.0,-0.625);
     glVertex2f(-1.0,-0.6295);
     glEnd();

glBegin(GL_QUADS);
      glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.695);
     glVertex2f(1.0,-0.69);
     glVertex2f(-1.0,-0.69);
     glVertex2f(-1.0,-0.695);
     glEnd();


glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(-.5,-0.66);
     glVertex2f(-.50,-0.67);
     glVertex2f(-1.0,-0.67);
     glVertex2f(-1.0,-0.66);
     glEnd();


glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.2,-0.66);
     glVertex2f(.20,-0.67);
     glVertex2f(-.30,-0.67);
     glVertex2f(-.30,-0.66);
     glEnd();
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.4,-0.66);
     glVertex2f(.40,-0.67);
     glVertex2f(.90,-0.67);
     glVertex2f(.90,-0.66);
     glEnd();

//car3
glPushMatrix();
glTranslatef(position13,0.0f, 0.0f);

     glBegin(GL_QUADS);
     glColor3ub(184, 0, 230);
     glVertex2f(-.23,-0.68);
     glVertex2f(-.23,-0.65);
     glVertex2f(-.32,-0.65);
     glVertex2f(-.32,-0.68);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(184, 0, 230);
     glVertex2f(-.26,-0.65);
     glVertex2f(-.26,-0.61);
     glVertex2f(-.313,-0.61);
     glVertex2f(-.313,-0.65);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-.265,-0.65);
     glVertex2f(-.265,-0.615);
     glVertex2f(-.309,-0.615);
     glVertex2f(-.309,-0.65);
     glEnd();
/*glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(-.29,-0.61);
     glVertex2f(-.29,-0.602);
     glVertex2f(-.3,-0.602);
     glVertex2f(-.3,-0.61);
     glEnd();*/


    glColor3ub(7, 8, 7);
    int m;

	 x=-.25f;  y=-.678f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(m = 0; m <= triangleAmount;m++) {
			glVertex2f(
		            x + (radius * cos(m *  twicePi / triangleAmount)),
			    y + (radius * sin(m * twicePi / triangleAmount))
			);
		}
	glEnd();


glColor3ub(7, 8, 7);
    int M;

	 x=-.30f;  y=-.678f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(M = 0; M <= triangleAmount;M++) {
			glVertex2f(
		            x + (radius * cos(M *  twicePi / triangleAmount)),
			    y + (radius * sin(M * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position14,0.0f, 0.0f);
//car4
     glBegin(GL_QUADS);
     glColor3ub(255, 77, 136);
     glVertex2f(.23,-0.68);
     glVertex2f(.23,-0.65);
     glVertex2f(.32,-0.65);
     glVertex2f(.32,-0.68);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 77, 136);
     glVertex2f(.29,-0.65);
     glVertex2f(.29,-0.61);
     glVertex2f(.24,-0.61);
     glVertex2f(.24,-0.65);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(.285,-0.65);
     glVertex2f(.285,-0.615);
     glVertex2f(.245,-0.615);
     glVertex2f(.245,-0.65);
     glEnd();
/*glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(-.29,-0.61);
     glVertex2f(-.29,-0.602);
     glVertex2f(-.3,-0.602);
     glVertex2f(-.3,-0.61);
     glEnd();*/


    glColor3ub(7, 8, 7);
    int n;

	 x=.25f;  y=-.678f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(n = 0; n <= triangleAmount;n++) {
			glVertex2f(
		            x + (radius * cos(n *  twicePi / triangleAmount)),
			    y + (radius * sin(n * twicePi / triangleAmount))
			);
		}
	glEnd();


glColor3ub(7, 8, 7);
    int N;

	 x=.30f;  y=-.678f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(N = 0; N <= triangleAmount;N++) {
			glVertex2f(
		            x + (radius * cos(N *  twicePi / triangleAmount)),
			    y + (radius * sin(N * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();


//grass 3

glBegin(GL_QUADS);
     glColor3ub(102, 153, 0);
     glVertex2f(1.0,-0.71);
     glVertex2f(1.0,-0.7);
     glVertex2f(-1.0,-0.7);
     glVertex2f(-1.0,-0.71);
     glEnd();
//mati 3

glBegin(GL_QUADS);
     glColor3ub(102, 51, 0);
     glVertex2f(1.0,-0.7195);
     glVertex2f(1.0,-0.71);
     glVertex2f(-1.0,-0.71);
     glVertex2f(-1.0,-0.7195);
     glEnd();

//road 3
glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(1.0,-0.8);
     glVertex2f(1.0,-0.7195);
     glVertex2f(-1.0,-0.7195);
     glVertex2f(-1.0,-0.8);
     glEnd();


     glBegin(GL_QUADS);
      glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.7295);
     glVertex2f(1.0,-0.725);
     glVertex2f(-1.0,-0.725);
     glVertex2f(-1.0,-0.7295);
     glEnd();


glBegin(GL_QUADS);
      glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.795);
     glVertex2f(1.0,-0.79);
     glVertex2f(-1.0,-0.79);
     glVertex2f(-1.0,-0.795);
     glEnd();


glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(-.5,-0.76);
     glVertex2f(-.50,-0.77);
     glVertex2f(-1.0,-0.77);
     glVertex2f(-1.0,-0.76);
     glEnd();

     glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.2,-0.76);
     glVertex2f(.20,-0.77);
     glVertex2f(-.30,-0.77);
     glVertex2f(-.30,-0.76);
     glEnd();


     glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.4,-0.76);
     glVertex2f(.40,-0.77);
     glVertex2f(.90,-0.77);
     glVertex2f(.90,-0.76);
     glEnd();
 //lal thomba

  glBegin(GL_QUADS);
glColor3ub(255, 0, 0);
     glVertex2f(.43,-0.8);
     glVertex2f(.43,-0.7);
     glVertex2f(.42,-0.7);
     glVertex2f(.42,-0.8);
     glEnd();
 glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
     glVertex2f(.43,-0.7);
     glVertex2f(.43,-0.6);
     glVertex2f(.42,-0.6);
     glVertex2f(.42,-0.7);
     glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 0, 0);
     glVertex2f(.43,-0.6);
     glVertex2f(.43,-0.5);
     glVertex2f(.42,-0.5);
     glVertex2f(.42,-0.6);
     glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
     glVertex2f(.43,-0.5);
     glVertex2f(.43,-0.45);
     glVertex2f(.42,-0.45);
     glVertex2f(.42,-0.5);
     glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
     glVertex2f(.43,-0.45);
     glVertex2f(.43,-0.4);
     glVertex2f(.42,-0.4);
     glVertex2f(.42,-0.45);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(.44,-0.43);
     glVertex2f(.435,-0.45);
     glVertex2f(.405,-0.45);
     glVertex2f(.41,-0.43);
     glEnd();
//car2
glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
glBegin(GL_QUADS);
     glColor3f(0,0,1);
     glVertex2f(.43,-0.78);
     glVertex2f(.43,-0.75);
     glVertex2f(.52,-0.75);
     glVertex2f(.52,-0.78);
     glEnd();
glBegin(GL_QUADS);
     glColor3f(0,0,1);
     glVertex2f(.46,-0.75);
     glVertex2f(.46,-0.71);
     glVertex2f(.513,-0.71);
     glVertex2f(.513,-0.75);
     glVertex2f(.465,-0.715);
     glVertex2f(.509,-0.715);
     glVertex2f(.509,-0.75);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(.49,-0.71);
     glVertex2f(.49,-0.702);
     glVertex2f(.5,-0.702);
     glVertex2f(.5,-0.71);
     glEnd();

glBegin(GL_QUADS);
     glColor3f(0, 0, 0);
     glVertex2f(.465,-0.75);
     glVertex2f(.465,-0.715);
     glVertex2f(.509,-0.715);
     glVertex2f(.509,-0.75);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(.49,-0.71);
     glVertex2f(.49,-0.702);
     glVertex2f(.5,-0.702);
     glVertex2f(.5,-0.71);
     glEnd();

    glColor3ub(7, 8, 7);
    int a;

	 x=.45f;  y=-.778f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(a = 0; a <= triangleAmount;a++) {
			glVertex2f(
		            x + (radius * cos(a *  twicePi / triangleAmount)),
			    y + (radius * sin(a * twicePi / triangleAmount))
			);
		}
	glEnd();


    glColor3ub(7, 8, 7);
    int s;

	 x=.50f;  y=-.778f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(s = 0; s <= triangleAmount;s++) {
			glVertex2f(
		            x + (radius * cos(s *  twicePi / triangleAmount)),
			    y + (radius * sin(s * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();








//GRASS 4
glBegin(GL_QUADS);
glColor3ub(102, 153, 0);
     glVertex2f(1.0,-0.85);
     glVertex2f(1.0,-0.8);
     glVertex2f(-1.0,-0.8);
     glVertex2f(-1.0,-0.85);
     glEnd();

//mati 4
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
     glVertex2f(1.0,-0.86);
     glVertex2f(1.0,-0.85);
     glVertex2f(-1.0,-0.85);
     glVertex2f(-1.0,-0.86);
     glEnd();

//road4
glBegin(GL_QUADS);
glColor3ub(115, 115, 115);
     glVertex2f(1.0,-0.86);
     glVertex2f(1.0,-0.97);
     glVertex2f(-1.0,-0.97);
     glVertex2f(-1.0,-0.86);
     glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
     glVertex2f(1.0,-0.87);
     glVertex2f(1.0,-0.875);
     glVertex2f(-1.0,-0.875);
     glVertex2f(-1.0,-0.87);
     glEnd();

     glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(-.5,-0.91);
     glVertex2f(-.50,-0.92);
     glVertex2f(-1.0,-0.92);
     glVertex2f(-1.0,-0.91);
     glEnd();

     glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.2,-0.91);
     glVertex2f(.20,-0.92);
     glVertex2f(-.30,-0.92);
     glVertex2f(-.30,-0.91);
     glEnd();


     glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.4,-0.91);
     glVertex2f(.40,-0.92);
     glVertex2f(.90,-0.92);
     glVertex2f(.90,-0.91);
     glEnd();



//grass4
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
     glVertex2f(1.0,-0.965);
     glVertex2f(1.0,-0.96);
     glVertex2f(-1.0,-0.96);
     glVertex2f(-1.0,-0.965);
     glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 153, 0);
     glVertex2f(1.0,-0.97);
     glVertex2f(1.0,-1.0);
     glVertex2f(-1.0,-1.0);
     glVertex2f(-1.0,-0.97);
     glEnd();
     glFlush();
}
void display3()
{

     glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);

//SKY

     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);  //bright sky color
     glVertex2f(1.0,-0.4);
     glVertex2f(1.0,1.0);
     glVertex2f(-1.0,1.0);
     glVertex2f(-1.0,-0.4);
     glEnd();
//plane

glPushMatrix();
glTranslatef(position15,0.0f, 0.0f);

       glBegin(GL_QUADS);
     glColor3ub(0, 0, 153);
     glVertex2f(.6,.6);
     glVertex2f(.65,0.65);
     glVertex2f(0.40,0.63);
     glVertex2f(0.30,.6);
     glEnd();

glPointSize( 3.0 );
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.45f,0.62f);
    glVertex2f(0.5f,0.62f);
    glVertex2f(0.55f,0.62f);
    glEnd();
glPopMatrix();











//Moon
  glColor3f(1,1,1);

    int k;
    GLfloat x=-.8f; GLfloat y=.8f;GLfloat radius =.07f;
	 int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(k = 0; k <= triangleAmount;k++) {
			glVertex2f(
		            x + (radius * cos(k *  twicePi / triangleAmount)),
			    y + (radius * sin(k * twicePi / triangleAmount))
			);
		}
	glEnd();

//star
glPointSize( 2.5 );
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.8f,0.95f);
    glVertex2f(0.9f,0.9f);
    glVertex2f(0.95f,0.7f);
    glVertex2f(0.8f,0.8f);
    glVertex2f(0.7f,0.9f);
    glVertex2f(0.6f,0.8f);
    glVertex2f(0.5f,0.75f);
    glVertex2f(0.4f,0.9f);
    glVertex2f(0.3f,0.7f);
    glVertex2f(0.25f,0.9f);
    glVertex2f(0.25f,0.7f);
    glVertex2f(0.1f,0.9f);
    glVertex2f(0.15f,0.75f);
    glVertex2f(0.0f,0.8f);
    glVertex2f(-0.7f,0.9f);
    glVertex2f(-0.8f,0.95f);
    glVertex2f(-0.4f,0.8f);
    glVertex2f(-0.8f,0.95f);
    glVertex2f(-0.9f,0.9f);
    glVertex2f(-0.95f,0.7f);
    glVertex2f(-0.8f,0.8f);
    glVertex2f(-0.7f,0.9f);
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.5f,0.75f);
    glVertex2f(-0.4f,0.9f);
    glVertex2f(-0.3f,0.7f);
    glVertex2f(-0.25f,0.9f);
    glVertex2f(-0.25f,0.7f);
    glVertex2f(-0.15f,0.75f);
    glVertex2f(-0.1f,0.9f);
    glEnd();


//cloud

/*
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

 glColor3ub(255, 255, 255);

    int f;
     x=.6f; y=.7f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(f = 0; f <= triangleAmount;f++) {
			glVertex2f(
		            x + (radius * cos(f *  twicePi / triangleAmount)),
			    y + (radius * sin(f * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int g;
     x=.64f; y=.7f;radius =.04f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(g = 0; g <= triangleAmount;g++) {
			glVertex2f(
		            x + (radius * cos(g *  twicePi / triangleAmount)),
			    y + (radius * sin(g * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int h;
     x=.67f; y=.675f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(h = 0; h <= triangleAmount;h++) {
			glVertex2f(
		            x + (radius * cos(h *  twicePi / triangleAmount)),
			    y + (radius * sin(h * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int l;
     x=.625f; y=.665f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(l = 0; l <= triangleAmount;l++) {
			glVertex2f(
		            x + (radius * cos(l *  twicePi / triangleAmount)),
			    y + (radius * sin(l * twicePi / triangleAmount))
			);
		}
	glEnd();

//c2

glColor3ub(255, 255, 255);

    int F;
     x=.06f; y=.55f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(F = 0; F <= triangleAmount;F++) {
			glVertex2f(
		            x + (radius * cos(F *  twicePi / triangleAmount)),
			    y + (radius * sin(F * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);


    int G;
     x=.1f; y=.55f;radius =.04f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(G = 0; G <= triangleAmount;G++) {
			glVertex2f(
		            x + (radius * cos(G *  twicePi / triangleAmount)),
			    y + (radius * sin(G * twicePi / triangleAmount))
			);
		}
	glEnd();

int H;
     x=.13f; y=.525f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(H = 0; H <= triangleAmount;H++) {
			glVertex2f(
		            x + (radius * cos(H *  twicePi / triangleAmount)),
			    y + (radius * sin(H * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int L;
     x=.08f; y=.515f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(L = 0; L <= triangleAmount;L++) {
			glVertex2f(
		            x + (radius * cos(L *  twicePi / triangleAmount)),
			    y + (radius * sin(L * twicePi / triangleAmount))
			);
		}
	glEnd();

//c3
glColor3ub(255, 255, 255);

    int Q;
     x=-.2f; y=.8f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(Q = 0; Q <= triangleAmount;Q++) {
			glVertex2f(
		            x + (radius * cos(Q *  twicePi / triangleAmount)),
			    y + (radius * sin(Q * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int W;
     x=-.16f; y=.8f;radius =.04f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(W = 0; W <= triangleAmount;W++) {
			glVertex2f(
		            x + (radius * cos(W *  twicePi / triangleAmount)),
			    y + (radius * sin(W * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int E;
     x=-.13f; y=.775f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(E = 0; E <= triangleAmount;E++) {
			glVertex2f(
		            x + (radius * cos(E *  twicePi / triangleAmount)),
			    y + (radius * sin(E * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int R;
     x=-.175f; y=.765f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(R = 0; R <= triangleAmount;R++) {
			glVertex2f(
		            x + (radius * cos(R *  twicePi / triangleAmount)),
			    y + (radius * sin(R * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();
//c4
glPushMatrix();
glTranslatef(position1,0.0f, 0.0f);
glColor3ub(255, 255, 255);

    int T;
     x=-.7f; y=.7f;radius =.03f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(T = 0; T <= triangleAmount;T++) {
			glVertex2f(
		            x + (radius * cos(T *  twicePi / triangleAmount)),
			    y + (radius * sin(T * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(255, 255, 255);

    int U;
     x=-.66f; y=.7f;radius =.04f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(U = 0; U <= triangleAmount;U++) {
			glVertex2f(
		            x + (radius * cos(U *  twicePi / triangleAmount)),
			    y + (radius * sin(U * twicePi / triangleAmount))
			);
		}
	glEnd();

	int I;
     x=-.63f; y=.675f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(I = 0; I <= triangleAmount;I++) {
			glVertex2f(
		            x + (radius * cos(I *  twicePi / triangleAmount)),
			    y + (radius * sin(I * twicePi / triangleAmount))
			);
		}
	glEnd();

int O;
     x=-.675f; y=.665f;radius =.032f;
	  triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(O = 0; O <= triangleAmount;O++) {
			glVertex2f(
		            x + (radius * cos(O *  twicePi / triangleAmount)),
			    y + (radius * sin(O * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix(); */


//right blding 1


//right blding 1






     glBegin(GL_QUADS);
     glColor3ub(163, 163, 194);
     glVertex2f(0.05,-0.50);
     glVertex2f(0.05,0.15);
     glVertex2f(-0.05,0.15);
     glVertex2f(-0.05,-0.50);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(179, 179, 204);
     glVertex2f(0.17,-0.50);
     glVertex2f(0.17,0.15);
     glVertex2f(0.05,0.15);
     glVertex2f(0.05,-0.50);
     glEnd();
//glass
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,0.12);
     glVertex2f(0.16,0.13);
     glVertex2f(0.06,0.13);
     glVertex2f(0.06,0.12);
     glEnd();



     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,0.10);
     glVertex2f(0.16,0.11);
     glVertex2f(0.06,0.11);
     glVertex2f(0.06,0.10);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,0.08);
     glVertex2f(0.16,0.09);
     glVertex2f(0.06,0.09);
     glVertex2f(0.06,0.08);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,0.06);
     glVertex2f(0.16,0.07);
     glVertex2f(0.06,0.07);
     glVertex2f(0.06,0.06);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,0.04);
     glVertex2f(0.16,0.05);
     glVertex2f(0.06,0.05);
     glVertex2f(0.06,0.04);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,0.02);
     glVertex2f(0.16,0.03);
     glVertex2f(0.06,0.03);
     glVertex2f(0.06,0.02);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,0.0);
     glVertex2f(0.16,0.01);
     glVertex2f(0.06,0.01);
     glVertex2f(0.06,0.0);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.02);
     glVertex2f(0.16,-0.01);
     glVertex2f(0.06,-0.01);
     glVertex2f(0.06,-0.02);
     glEnd();
 glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.04);
     glVertex2f(0.16,-0.03);
     glVertex2f(0.06,-0.03);
     glVertex2f(0.06,-0.04);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.06);
     glVertex2f(0.16,-0.05);
     glVertex2f(0.06,-0.05);
     glVertex2f(0.06,-0.06);
     glEnd();//
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.08);
     glVertex2f(0.16,-0.07);
     glVertex2f(0.06,-0.07);
     glVertex2f(0.06,-0.08);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.10);
     glVertex2f(0.16,-0.09);
     glVertex2f(0.06,-0.09);
     glVertex2f(0.06,-0.10);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.12);
     glVertex2f(0.16,-0.11);
     glVertex2f(0.06,-0.11);
     glVertex2f(0.06,-0.12);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.14);
     glVertex2f(0.16,-0.13);
     glVertex2f(0.06,-0.13);
     glVertex2f(0.06,-0.14);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.16);
     glVertex2f(0.16,-0.15);
     glVertex2f(0.06,-0.15);
     glVertex2f(0.06,-0.16);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.18);
     glVertex2f(0.16,-0.17);
     glVertex2f(0.06,-0.17);
     glVertex2f(0.06,-0.18);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.20);
     glVertex2f(0.16,-0.19);
     glVertex2f(0.06,-0.19);
     glVertex2f(0.06,-0.20);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.22);
     glVertex2f(0.16,-0.21);
     glVertex2f(0.06,-0.21);
     glVertex2f(0.06,-0.22);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.24);
     glVertex2f(0.16,-0.23);
     glVertex2f(0.06,-0.23);
     glVertex2f(0.06,-0.24);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.26);
     glVertex2f(0.16,-0.25);
     glVertex2f(0.06,-0.25);
     glVertex2f(0.06,-0.26);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.28);
     glVertex2f(0.16,-0.27);
     glVertex2f(0.06,-0.27);
     glVertex2f(0.06,-0.28);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.30);
     glVertex2f(0.16,-0.29);
     glVertex2f(0.06,-0.29);
     glVertex2f(0.06,-0.30);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.32);
     glVertex2f(0.16,-0.31);
     glVertex2f(0.06,-0.31);
     glVertex2f(0.06,-0.32);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.34);
     glVertex2f(0.16,-0.33);
     glVertex2f(0.06,-0.33);
     glVertex2f(0.06,-0.34);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.36);
     glVertex2f(0.16,-0.35);
     glVertex2f(0.06,-0.35);
     glVertex2f(0.06,-0.36);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.06);
     glVertex2f(0.16,-0.05);
     glVertex2f(0.06,-0.05);
     glVertex2f(0.06,-0.06);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.16,-0.06);
     glVertex2f(0.16,-0.05);
     glVertex2f(0.06,-0.05);
     glVertex2f(0.06,-0.06);
     glEnd();


//Right blding 2

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(0.25,-0.50);
     glVertex2f(0.25,0.05);
     glVertex2f(0.17,0.05);
     glVertex2f(0.17,-0.50);
     glEnd();

//Right blding 3

     glBegin(GL_QUADS);
     glColor3ub(133, 173, 173);
     glVertex2f(0.37,-0.50);
     glVertex2f(0.37,0.1);
     glVertex2f(0.25,0.1);
     glVertex2f(0.25,-0.50);
     glEnd();

//GLASS
      glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.365,-0.50);
     glVertex2f(0.365,0.085);
     glVertex2f(0.30,0.085);
     glVertex2f(0.30,-0.50);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.29,-0.50);
     glVertex2f(0.29,0.085);
     glVertex2f(0.255,0.085);
     glVertex2f(0.255,-0.50);
     glEnd();



//Right blding 5

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(0.53,-0.50);
     glVertex2f(0.53,0.3);
     glVertex2f(0.37,0.3);
     glVertex2f(0.37,-0.50);
     glEnd();


//glass
glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,0.29);
     glVertex2f(0.525,0.28);
     glVertex2f(0.42,0.28);
     glVertex2f(0.42,0.29);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,0.27);
     glVertex2f(0.525,0.26);
     glVertex2f(0.42,0.26);
     glVertex2f(0.42,0.27);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,0.25);
     glVertex2f(0.525,0.24);
     glVertex2f(0.42,0.24);
     glVertex2f(0.42,0.25);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,0.23);
     glVertex2f(0.525,0.22);
     glVertex2f(0.42,0.22);
     glVertex2f(0.42,0.23);
     glEnd();



     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,0.21);
     glVertex2f(0.525,0.20);
     glVertex2f(0.42,0.20);
     glVertex2f(0.42,0.21);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,0.18);
     glVertex2f(0.42,0.18);
     glVertex2f(0.42,0.19);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,0.17);
     glVertex2f(0.525,0.16);
     glVertex2f(0.42,0.16);
     glVertex2f(0.42,0.17);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,0.15);
     glVertex2f(0.525,0.14);
     glVertex2f(0.42,0.14);
     glVertex2f(0.42,0.15);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,0.13);
     glVertex2f(0.525,0.12);
     glVertex2f(0.42,0.12);
     glVertex2f(0.42,0.13);
     glEnd();



     glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,0.11);
     glVertex2f(0.525,0.10);
     glVertex2f(0.42,0.10);
     glVertex2f(0.42,0.11);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,0.09);
     glVertex2f(0.525,0.08);
     glVertex2f(0.42,0.08);
     glVertex2f(0.42,0.09);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,0.07);
     glVertex2f(0.525,0.06);
     glVertex2f(0.42,0.06);
     glVertex2f(0.42,0.07);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,0.05);
     glVertex2f(0.525,0.04);
     glVertex2f(0.42,0.04);
     glVertex2f(0.42,0.05);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,0.03);
     glVertex2f(0.525,0.02);
     glVertex2f(0.42,0.02);
     glVertex2f(0.42,0.03);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,0.01);
     glVertex2f(0.525,0.00);
     glVertex2f(0.42,0.00);
     glVertex2f(0.42,0.01);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,-0.01);
     glVertex2f(0.525,-0.02);
     glVertex2f(0.42,-0.02);
     glVertex2f(0.42,-0.01);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,-0.03);
     glVertex2f(0.525,-0.04);
     glVertex2f(0.42,-0.04);
     glVertex2f(0.42,-0.03);
     glEnd();


 glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,-0.05);
     glVertex2f(0.525,-0.06);
     glVertex2f(0.42,-0.06);
     glVertex2f(0.42,-0.05);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,-0.07);
     glVertex2f(0.525,-0.08);
     glVertex2f(0.42,-0.08);
     glVertex2f(0.42,-0.07);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,-0.09);
     glVertex2f(0.525,-0.10);
     glVertex2f(0.42,-0.10);
     glVertex2f(0.42,-0.09);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,-0.11);
     glVertex2f(0.525,-0.12);
     glVertex2f(0.42,-0.12);
     glVertex2f(0.42,-0.11);
     glEnd();


    glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,-0.13);
     glVertex2f(0.525,-0.14);
     glVertex2f(0.42,-0.14);
     glVertex2f(0.42,-0.13);
     glEnd();

    glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,-0.15);
     glVertex2f(0.525,-0.16);
     glVertex2f(0.42,-0.16);
     glVertex2f(0.42,-0.15);
     glEnd();

    glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,-0.17);
     glVertex2f(0.525,-0.18);
     glVertex2f(0.42,-0.18);
     glVertex2f(0.42,-0.17);
     glEnd();


      glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,-0.19);
     glVertex2f(0.525,-0.20);
     glVertex2f(0.42,-0.20);
     glVertex2f(0.42,-0.19);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(255, 209, 26);
     glVertex2f(0.525,-0.21);
     glVertex2f(0.525,-0.22);
     glVertex2f(0.42,-0.22);
     glVertex2f(0.42,-0.21);
     glEnd();
glBegin(GL_QUADS);//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.23);
     glVertex2f(0.525,-0.24);
     glVertex2f(0.42,-0.24);
     glVertex2f(0.42,-0.23);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.25);
     glVertex2f(0.525,-0.26);
     glVertex2f(0.42,-0.26);
     glVertex2f(0.42,-0.25);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.27);
     glVertex2f(0.525,-0.28);
     glVertex2f(0.42,-0.28);
     glVertex2f(0.42,-0.27);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.29);
     glVertex2f(0.525,-0.30);
     glVertex2f(0.42,-0.30);
     glVertex2f(0.42,-0.29);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.31);
     glVertex2f(0.525,-0.32);
     glVertex2f(0.42,-0.32);
     glVertex2f(0.42,-0.31);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.33);
     glVertex2f(0.525,-0.34);
     glVertex2f(0.42,-0.34);
     glVertex2f(0.42,-0.33);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.35);
     glVertex2f(0.525,-0.36);
     glVertex2f(0.42,-0.36);
     glVertex2f(0.42,-0.35);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.37);
     glVertex2f(0.525,-0.38);
     glVertex2f(0.42,-0.38);
     glVertex2f(0.42,-0.37);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.39);
     glVertex2f(0.525,-0.40);
     glVertex2f(0.42,-0.40);
     glVertex2f(0.42,-0.39);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.41);
     glVertex2f(0.525,-0.42);
     glVertex2f(0.42,-0.42);
     glVertex2f(0.42,-0.41);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.43);
     glVertex2f(0.525,-0.44);
     glVertex2f(0.42,-0.44);
     glVertex2f(0.42,-0.43);
     glEnd();


// Right blding 4

  glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(0.5,-0.50);
     glVertex2f(0.5,-0.21);
     glVertex2f(0.3,-0.21);
     glVertex2f(0.3,-0.50);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(0.75,-0.50);
     glVertex2f(0.75,-0.21);
     glVertex2f(0.5,-0.21);
     glVertex2f(0.5,-0.50);
     glEnd();

 //glass

     glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.74,-0.23);
     glVertex2f(0.74,-0.22);
     glVertex2f(0.51,-0.22);
     glVertex2f(0.51,-0.23);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.74,-0.25);
     glVertex2f(0.74,-0.24);
     glVertex2f(0.51,-0.24);
     glVertex2f(0.51,-0.25);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.74,-0.27);
     glVertex2f(0.74,-0.26);
     glVertex2f(0.51,-0.26);
     glVertex2f(0.51,-0.27);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.74,-0.29);
     glVertex2f(0.74,-0.28);
     glVertex2f(0.51,-0.28);
     glVertex2f(0.51,-0.29);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.74,-0.31);
     glVertex2f(0.74,-0.30);
     glVertex2f(0.51,-0.30);
     glVertex2f(0.51,-0.31);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.74,-0.33);
     glVertex2f(0.74,-0.32);
     glVertex2f(0.51,-0.32);
     glVertex2f(0.51,-0.33);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.74,-0.35);
     glVertex2f(0.74,-0.34);
     glVertex2f(0.51,-0.34);
     glVertex2f(0.51,-0.35);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.74,-0.37);
     glVertex2f(0.74,-0.36);
     glVertex2f(0.51,-0.36);
     glVertex2f(0.51,-0.37);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.74,-0.39);
     glVertex2f(0.74,-0.38);
     glVertex2f(0.51,-0.38);
     glVertex2f(0.51,-0.39);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.74,-0.41);
     glVertex2f(0.74,-0.40);
     glVertex2f(0.51,-0.40);
     glVertex2f(0.51,-0.41);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.74,-0.43);
     glVertex2f(0.74,-0.42);
     glVertex2f(0.51,-0.42);
     glVertex2f(0.51,-0.43);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.74,-0.45);
     glVertex2f(0.74,-0.44);
     glVertex2f(0.51,-0.44);
     glVertex2f(0.51,-0.45);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.74,-0.47);
     glVertex2f(0.74,-0.46);
     glVertex2f(0.51,-0.46);
     glVertex2f(0.51,-0.47);
     glEnd();

//Right blding 8
    glBegin(GL_QUADS);
     glColor3ub(133, 173, 173);
     glVertex2f(0.85,-0.50);
     glVertex2f(0.85,-0.25);
     glVertex2f(0.8,-0.25);
     glVertex2f(0.8,-0.50);
     glEnd();
//Right blding 6
     glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(0.85,-0.50);
     glVertex2f(0.85,-0.27);
     glVertex2f(0.75,-0.27);
     glVertex2f(0.75,-0.50);
     glEnd();
//glass
glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.84,-0.45);
     glVertex2f(0.84,-0.44);
     glVertex2f(0.76,-0.44);
     glVertex2f(0.76,-0.45);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.84,-0.43);
     glVertex2f(0.84,-0.42);
     glVertex2f(0.76,-0.42);
     glVertex2f(0.76,-0.43);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.84,-0.41);
     glVertex2f(0.84,-0.40);
     glVertex2f(0.76,-0.40);
     glVertex2f(0.76,-0.41);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.84,-0.39);
     glVertex2f(0.84,-0.38);
     glVertex2f(0.76,-0.38);
     glVertex2f(0.76,-0.39);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.84,-0.37);
     glVertex2f(0.84,-0.36);
     glVertex2f(0.76,-0.36);
     glVertex2f(0.76,-0.37);
     glEnd();
   glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.84,-0.34);
     glVertex2f(0.84,-0.35);
     glVertex2f(0.76,-0.35);
     glVertex2f(0.76,-0.34);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.84,-0.32);
     glVertex2f(0.84,-0.33);
     glVertex2f(0.76,-0.33);
     glVertex2f(0.76,-0.32);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.84,-0.30);
     glVertex2f(0.84,-0.31);
     glVertex2f(0.76,-0.31);
     glVertex2f(0.76,-0.30);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
     glVertex2f(0.84,-0.28);
     glVertex2f(0.84,-0.29);
     glVertex2f(0.76,-0.29);
     glVertex2f(0.76,-0.28);
     glEnd();

//Right blding 7


     glBegin(GL_QUADS);
     glColor3ub(92, 138, 138);
     glVertex2f(0.9,-0.50);
     glVertex2f(0.9,-0.105);
     glVertex2f(0.85,-0.105);
     glVertex2f(0.85,-0.50);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(1.,-0.50);
     glVertex2f(1.0,-0.105);
     glVertex2f(0.9,-0.105);
     glVertex2f(0.9,-0.50);
     glEnd();
//glass
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.45);
     glVertex2f(.995,-0.44);
     glVertex2f(0.91,-0.44);
     glVertex2f(0.91,-0.45);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.43);
     glVertex2f(.995,-0.42);
     glVertex2f(0.91,-0.42);
     glVertex2f(0.91,-0.43);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.41);
     glVertex2f(.995,-0.40);
     glVertex2f(0.91,-0.40);
     glVertex2f(0.91,-0.41);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.39);
     glVertex2f(.995,-0.38);
     glVertex2f(0.91,-0.38);
     glVertex2f(0.91,-0.39);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.37);
     glVertex2f(.995,-0.36);
     glVertex2f(0.91,-0.36);
     glVertex2f(0.91,-0.37);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.35);
     glVertex2f(.995,-0.34);
     glVertex2f(0.91,-0.34);
     glVertex2f(0.91,-0.35);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.33);
     glVertex2f(.995,-0.32);
     glVertex2f(0.91,-0.32);
     glVertex2f(0.91,-0.33);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.31);
     glVertex2f(.995,-0.30);
     glVertex2f(0.91,-0.30);
     glVertex2f(0.91,-0.31);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.29);
     glVertex2f(.995,-0.28);
     glVertex2f(0.91,-0.28);
     glVertex2f(0.91,-0.29);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.27);
     glVertex2f(.995,-0.26);
     glVertex2f(0.91,-0.26);
     glVertex2f(0.91,-0.27);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.25);
     glVertex2f(.995,-0.24);
     glVertex2f(0.91,-0.24);
     glVertex2f(0.91,-0.25);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.23);
     glVertex2f(.995,-0.22);
     glVertex2f(0.91,-0.22);
     glVertex2f(0.91,-0.23);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.21);
     glVertex2f(.995,-0.20);
     glVertex2f(0.91,-0.20);
     glVertex2f(0.91,-0.21);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.19);
     glVertex2f(.995,-0.18);
     glVertex2f(0.91,-0.18);
     glVertex2f(0.91,-0.19);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.17);
     glVertex2f(.995,-0.16);
     glVertex2f(0.91,-0.16);
     glVertex2f(0.91,-0.17);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.15);
     glVertex2f(.995,-0.14);
     glVertex2f(0.91,-0.14);
     glVertex2f(0.91,-0.15);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 255, 51);
     glVertex2f(.995,-0.13);
     glVertex2f(.995,-0.12);
     glVertex2f(0.91,-0.12);
     glVertex2f(0.91,-0.13);
     glEnd();


//LEFT SIDE BLDING 1  //************************


     glBegin(GL_QUADS);
     glColor3ub(204, 51, 0);
     glVertex2f(-.95,-0.4);
     glVertex2f(-.95,0.17);
     glVertex2f(-1.0,0.17);
     glVertex2f(-1.0,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(230, 57, 0);
     glVertex2f(-.8,-0.4);
     glVertex2f(-.8,0.17);
     glVertex2f(-.950,0.17);
     glVertex2f(-.950,-0.4);
     glEnd();



//glass#####
glBegin(GL_QUADS);
     glColor3ub(255, 255, 230);
     glVertex2f(-.81,-0.4);
     glVertex2f(-.81,0.15);
     glVertex2f(-.945,0.15);
     glVertex2f(-.945,-0.4);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(255, 255, 230);
     glVertex2f(-.96,-0.4);
     glVertex2f(-.96,0.15);
     glVertex2f(-.995,0.15);
     glVertex2f(-.995,-0.4);
     glEnd();


//LEFT SIDE BLDING 2


glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(-.75,-0.4);
     glVertex2f(-.75,-0.13);
     glVertex2f(-0.8,-0.13);
     glVertex2f(-.8,-0.4);
     glEnd();
//LEFT SIDE BLDING 3

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(-.65,-0.4);
     glVertex2f(-.65,-0.08);
     glVertex2f(-0.75,-0.08);
     glVertex2f(-.75,-0.4);
     glEnd();

//LEFT SIDE BLDING 4


//bldingside

     glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.6,-0.4);
     glVertex2f(-.6,0.31);
     glVertex2f(-0.65,0.31);
     glVertex2f(-.65,-0.4);
     glEnd();
//miror 1


glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(-.59,-0.4);
     glVertex2f(-.59,0.29);
     glVertex2f(-0.64,0.29);
     glVertex2f(-.64,-0.4);
     glEnd();

//blding

     glBegin(GL_QUADS);
     glColor3ub(204, 204, 204);
     glVertex2f(-.5,-0.4);
     glVertex2f(-.5,0.31);
     glVertex2f(-0.6,0.31);
     glVertex2f(-.6,-0.4);
     glEnd();

//miror 2
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(-.51,-0.4);
     glVertex2f(-.51,0.29);
     glVertex2f(-0.59,0.29);
     glVertex2f(-.59,-0.4);
     glEnd();

//LEFT SIDE BLDING 5

      glBegin(GL_QUADS);
     glColor3ub(198, 140, 83);
     glVertex2f(-.45,-0.4);
     glVertex2f(-.45,0.09);
     glVertex2f(-0.5,0.09);
     glVertex2f(-0.5,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(204, 153, 102);
     glVertex2f(-.4,-0.4);
     glVertex2f(-.4,0.09);
     glVertex2f(-0.45,0.09);
     glVertex2f(-0.45,-0.4);
     glEnd();
//Glass
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.405,-0.4);
     glVertex2f(-.405,0.08);
     glVertex2f(-0.447,0.08);
     glVertex2f(-0.447,-0.4);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.457,-0.4);
     glVertex2f(-.457,0.08);
     glVertex2f(-0.495,0.08);
     glVertex2f(-0.495,-0.4);
     glEnd();

//thamba

glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.35,-0.4);
     glVertex2f(-.35,0.35);
     glVertex2f(-0.4,0.35);
    glVertex2f(-0.4,-0.4);
      glEnd();



glPointSize( 2.5 );
    glBegin(GL_POINTS);
    glColor3ub(255, 26, 26);
    glVertex2f(0-.35f,0.15f);
    glVertex2f(-0.375f,0.15f);
    glVertex2f(-0.4f,0.15f);


    glVertex2f(0-.35f,0.25f);
    glVertex2f(-0.375f,0.25f);
    glVertex2f(-0.4f,0.25f);

    glVertex2f(0-.35f,0.35f);
    glVertex2f(-0.375f,0.35f);
    glVertex2f(-0.4f,0.35f);













     glEnd();







glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.36,0.35);
     glVertex2f(-.36,0.37);
     glVertex2f(-0.39,0.37);
    glVertex2f(-0.39,0.35);
      glEnd();


      glBegin(GL_QUADS);//fst mota
     glColor3ub(89, 89, 89);
     glVertex2f(-.345,0.37);
     glVertex2f(-.345,0.45);
     glVertex2f(-0.405,0.45);
    glVertex2f(-0.405,0.37);
      glEnd();

      glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.36,0.45);
     glVertex2f(-.36,0.47);
     glVertex2f(-0.39,0.47);
    glVertex2f(-0.39,0.45);
      glEnd();

       glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.35,0.47);
     glVertex2f(-.35,0.48);
     glVertex2f(-0.40,0.48);
    glVertex2f(-0.40,0.47);
      glEnd();


       glBegin(GL_QUADS);//2nd mota
     glColor3ub(89, 89, 89);
     glVertex2f(-.33,0.48);
     glVertex2f(-.33,0.54);
     glVertex2f(-0.42,0.54);
    glVertex2f(-0.42,0.48);
      glEnd();
glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.36,0.54);
     glVertex2f(-.36,0.56);
     glVertex2f(-0.39,0.56);
    glVertex2f(-0.39,0.54);
      glEnd();

      glBegin(GL_QUADS);//dandi
     glColor3ub(89, 89, 89);
     glVertex2f(-.38,0.56);
     glVertex2f(-.38,0.8);
     glVertex2f(-0.385,0.8);
    glVertex2f(-0.385,0.56);
      glEnd();


      glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.365,0.56);
     glVertex2f(-.365,0.8);
     glVertex2f(-0.37,0.8);
    glVertex2f(-0.37,0.56);
      glEnd();




      glBegin(GL_QUADS);//dandi matha
     glColor3ub(89, 89, 89);
     glVertex2f(-.365,0.8);
     glVertex2f(-.365,0.81);
     glVertex2f(-0.385,0.81);
    glVertex2f(-0.385,0.8);
      glEnd();

  //thamba dim

//left blding 6


     glBegin(GL_QUADS);
     glColor3ub(204, 153, 102);
     glVertex2f(-.2,-0.4);
     glVertex2f(-.2,-0.09);
     glVertex2f(-0.3,-0.09);
     glVertex2f(-0.3,-0.4);
      glEnd();

     glBegin(GL_QUADS);
     glColor3ub(198, 140, 83);
     glVertex2f(-.3,-0.4);
     glVertex2f(-.3,-0.09);
     glVertex2f(-0.37,-0.09);
     glVertex2f(-0.37,-0.4);
      glEnd();
//Glass
glBegin(GL_QUADS);
     glColor3ub(214, 214, 194);
     glVertex2f(-.31,-0.4);
     glVertex2f(-.31,-0.10);
     glVertex2f(-0.365,-0.10);
     glVertex2f(-0.365,-0.4);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.21,-0.4);
     glVertex2f(-.21,-0.10);
     glVertex2f(-0.29,-0.10);
     glVertex2f(-0.29,-0.4);
      glEnd();




//left blding 7


glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(-.1,-0.4);
     glVertex2f(-.1,-0.15);
     glVertex2f(-0.15,-0.15);
    glVertex2f(-0.15,-0.4);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(-.15,-0.4);
     glVertex2f(-.15,-0.15);
     glVertex2f(-0.2,-0.15);
    glVertex2f(-0.2,-0.4);
      glEnd();
//Glass
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.16);
     glVertex2f(-.103,-0.17);
     glVertex2f(-0.145,-0.17);
    glVertex2f(-0.145,-0.16);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.18);
     glVertex2f(-.103,-0.19);
     glVertex2f(-0.145,-0.19);
    glVertex2f(-0.145,-0.18);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.20);
     glVertex2f(-.103,-0.21);
     glVertex2f(-0.145,-0.21);
    glVertex2f(-0.145,-0.20);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.22);
     glVertex2f(-.103,-0.23);
     glVertex2f(-0.145,-0.23);
    glVertex2f(-0.145,-0.22);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.24);
     glVertex2f(-.103,-0.25);
     glVertex2f(-0.145,-0.25);
    glVertex2f(-0.145,-0.24);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.26);
     glVertex2f(-.103,-0.27);
     glVertex2f(-0.145,-0.27);
    glVertex2f(-0.145,-0.26);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.28);
     glVertex2f(-.103,-0.29);
     glVertex2f(-0.145,-0.29);
    glVertex2f(-0.145,-0.28);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.30);
     glVertex2f(-.103,-0.31);
     glVertex2f(-0.145,-0.31);
    glVertex2f(-0.145,-0.30);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.32);
     glVertex2f(-.103,-0.33);
     glVertex2f(-0.145,-0.33);
    glVertex2f(-0.145,-0.32);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.34);
     glVertex2f(-.103,-0.35);
     glVertex2f(-0.145,-0.35);
    glVertex2f(-0.145,-0.34);
      glEnd();
       glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.36);
     glVertex2f(-.103,-0.37);
     glVertex2f(-0.145,-0.37);
    glVertex2f(-0.145,-0.36);
      glEnd();


glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.16);
     glVertex2f(-.155,-0.17);
     glVertex2f(-0.195,-0.17);
    glVertex2f(-0.195,-0.16);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.18);
     glVertex2f(-.155,-0.19);
     glVertex2f(-0.195,-0.19);
    glVertex2f(-0.195,-0.18);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.20);
     glVertex2f(-.155,-0.21);
     glVertex2f(-0.195,-0.21);
     glVertex2f(-0.195,-0.20);
      glEnd();
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.22);
     glVertex2f(-.155,-0.23);
     glVertex2f(-0.195,-0.23);
    glVertex2f(-0.195,-0.22);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.24);
     glVertex2f(-.155,-0.25);
     glVertex2f(-0.195,-0.25);
    glVertex2f(-0.195,-0.24);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.26);
     glVertex2f(-.155,-0.27);
     glVertex2f(-0.195,-0.27);
    glVertex2f(-0.195,-0.26);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.28);
     glVertex2f(-.155,-0.29);
     glVertex2f(-0.195,-0.29);
    glVertex2f(-0.195,-0.28);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.30);
     glVertex2f(-.155,-0.31);
     glVertex2f(-0.195,-0.31);
    glVertex2f(-0.195,-0.30);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.32);
     glVertex2f(-.155,-0.33);
     glVertex2f(-0.195,-0.33);
    glVertex2f(-0.195,-0.32);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.34);
     glVertex2f(-.155,-0.35);
     glVertex2f(-0.195,-0.35);
    glVertex2f(-0.195,-0.34);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.36);
     glVertex2f(-.155,-0.37);
     glVertex2f(-0.195,-0.37);
    glVertex2f(-0.195,-0.36);
      glEnd();

//choto thamba

      glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.14,-0.15);
     glVertex2f(-.14,0.05);
     glVertex2f(-0.144,0.05);
    glVertex2f(-0.144,-0.15);
      glEnd();

 glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.16,-0.15);
     glVertex2f(-.16,0.05);
     glVertex2f(-0.164,0.05);
    glVertex2f(-0.164,-0.15);
      glEnd();


       glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.14,-0.0);
     glVertex2f(-.14,0.05);
     glVertex2f(-0.164,0.05);
    glVertex2f(-0.164,-0.0);
      glEnd();

      glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.151,0.05);
     glVertex2f(-.151,0.09);
     glVertex2f(-0.153,0.09);
    glVertex2f(-0.153,0.05);
      glEnd();


glBegin(GL_QUADS);//lite
     glColor3ub(255, 0, 0);
     glVertex2f(-.151,0.09);
     glVertex2f(-.151,0.095);
     glVertex2f(-0.153,0.095);
     glVertex2f(-0.153,0.09);
     glEnd();
//left blding 8


glBegin(GL_QUADS);
     glColor3ub(179, 179, 204);
     glVertex2f(-.05,-0.5);
     glVertex2f(-.05,-0.1);
     glVertex2f(-0.1,-0.1);
     glVertex2f(-0.1,-0.5);
     glEnd();


   //land blding

   /*glBegin(GL_POLYGON);
     glColor3ub(115, 115, 115);
     glVertex2f(-0.195,-0.3);
     glVertex2f(-0.2,-0.285);
     glVertex2f(-0.30,-0.2);
     glVertex2f(-0.40,-0.185);
     glVertex2f(-0.550,-0.2);
     glVertex2f(-0.60,-0.25);
     glEnd();*/
//BRIZ

 glBegin(GL_QUADS);//1
     glColor3ub(179, 179, 179);
     glVertex2f(0.35,-0.5);
     glVertex2f(0.35,-0.48);
     glVertex2f(0.335,-0.48);
     glVertex2f(.335,-0.50);
     glEnd();
glBegin(GL_QUADS);//11
     glColor3ub(179, 179, 179);
     glVertex2f(0.355,-0.48);
     glVertex2f(0.355,-0.477);
     glVertex2f(0.330,-0.477);
     glVertex2f(.330,-0.48);
     glEnd();


glBegin(GL_QUADS);//2
     glColor3ub(179, 179, 179);
     glVertex2f(0.7,-0.5);
     glVertex2f(0.7,-0.48);
     glVertex2f(0.685,-0.48);
     glVertex2f(.685,-0.50);
     glEnd();

glBegin(GL_QUADS);//21
     glColor3ub(179, 179, 179);
     glVertex2f(0.705,-0.48);
     glVertex2f(0.706,-0.477);
     glVertex2f(0.680,-0.477);
     glVertex2f(.680,-0.48);
     glEnd();



glBegin(GL_QUADS);//3
     glColor3ub(179, 179, 179);
     glVertex2f(0.999,-0.5);
     glVertex2f(0.999,-0.48);
     glVertex2f(0.985,-0.48);
     glVertex2f(.985,-0.50);
     glEnd();


glBegin(GL_QUADS);//31
     glColor3ub(179, 179, 179);
     glVertex2f(0.99905,-0.48);
     glVertex2f(0.99905,-0.477);
     glVertex2f(0.980,-0.477);
     glVertex2f(.980,-0.48);
     glEnd();

glBegin(GL_QUADS);//BRZ road
     glColor3ub(179, 179, 179);
     glVertex2f(1.0,-0.477);
     glVertex2f(1.0,-0.457);
     glVertex2f(0.17,-0.457);
     glVertex2f(.17,-0.477);
     glEnd();

//BRIZ CAR
glPushMatrix();
glTranslatef(position4,0.0f, 0.0f);
glBegin(GL_QUADS);//c1
     glColor3ub(255, 0, 0);
     glVertex2f(.99,-0.47);
     glVertex2f(.99,-0.460);
     glVertex2f(0.985,-0.460);
     glVertex2f(.985,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position5,0.0f, 0.0f);
glBegin(GL_QUADS);//c2
     glColor3ub(0, 0, 0);
     glVertex2f(.980,-0.47);
     glVertex2f(.980,-0.460);
     glVertex2f(0.975,-0.460);
     glVertex2f(.975,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position6,0.0f, 0.0f);
glBegin(GL_QUADS);//c3
     glColor3ub(0, 0, 153);
     glVertex2f(.780,-0.47);
     glVertex2f(.780,-0.460);
     glVertex2f(0.775,-0.460);
     glVertex2f(.775,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position7,0.0f, 0.0f);
glBegin(GL_QUADS);//c3
     glColor3ub(255, 0, 0);
     glVertex2f(.790,-0.47);
     glVertex2f(.790,-0.460);
     glVertex2f(0.785,-0.460);
     glVertex2f(.785,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position8,0.0f, 0.0f);
glBegin(GL_QUADS);//c4
     glColor3ub(0, 0, 153);
     glVertex2f(.680,-0.47);
     glVertex2f(.680,-0.460);
     glVertex2f(0.675,-0.460);
     glVertex2f(.675,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position9,0.0f, 0.0f);
glBegin(GL_QUADS);//c4
     glColor3ub(255, 0, 0);
     glVertex2f(.690,-0.47);
     glVertex2f(.690,-0.460);
     glVertex2f(0.685,-0.460);
     glVertex2f(.685,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position10,0.0f, 0.0f);
glBegin(GL_QUADS);//c5
     glColor3ub(0, 0, 153);
     glVertex2f(.580,-0.47);
     glVertex2f(.580,-0.460);
     glVertex2f(0.575,-0.460);
     glVertex2f(.575,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position11,0.0f, 0.0f);
glBegin(GL_QUADS);//c5
     glColor3ub(255, 0, 0);
     glVertex2f(.5950,-0.47);
     glVertex2f(.5950,-0.460);
     glVertex2f(0.590,-0.460);
     glVertex2f(.590,-0.47);
     glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(position12,0.0f, 0.0f);
glBegin(GL_QUADS);//c6
     glColor3ub(0, 0, 153);
     glVertex2f(.480,-0.47);
     glVertex2f(.480,-0.460);
     glVertex2f(0.475,-0.460);
     glVertex2f(.475,-0.47);
   glEnd();
glPopMatrix();


//Land yellow bulding================================================







glColor3ub(51, 102, 0);
    int e;

	 x=0.10f;  y=-.45f;  radius =.04f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(e = 0; e <= triangleAmount;e++) {
			glVertex2f(
		            x + (radius * cos(e *  twicePi / triangleAmount)),
			    y + (radius * sin(e * twicePi / triangleAmount))
			);
		}
	glEnd();
glColor3ub(64, 128, 0);
    int w;

	 x=0.14f;  y=-.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(w = 0; w <= triangleAmount;w++) {
			glVertex2f(
		            x + (radius * cos(w *  twicePi / triangleAmount)),
			    y + (radius * sin(w * twicePi / triangleAmount))
			);
		}
	glEnd();











glBegin(GL_QUADS);//yellow
     glColor3ub(255, 209, 26);
     glVertex2f(-0.18,-0.30);
     glVertex2f(-0.18,-0.40);
     glVertex2f(-.62,-0.40);
     glVertex2f(-.62,-0.30);
     glEnd();

//glass
glBegin(GL_QUADS);//yellow
     glColor3ub(179, 204, 204);
     glVertex2f(-0.19,-0.32);
     glVertex2f(-0.19,-0.39);
     glVertex2f(-.61,-0.39);
     glVertex2f(-.61,-0.32);
     glEnd();





glBegin(GL_QUADS);//yellow
     glColor3ub(255, 214, 51);
     glVertex2f(0.12,-0.50);
     glVertex2f(0.12,-0.38);
     glVertex2f(-0.20,-0.38);
     glVertex2f(-0.20,-0.50);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);//white
     glVertex2f(0.12,-0.50);
     glVertex2f(0.12,-0.38);
     glVertex2f(0.115,-0.38);
     glVertex2f(0.115,-0.50);
     glEnd();
glBegin(GL_QUADS);//yellow
     glColor3ub(255, 214, 51);
     glVertex2f(-0.6,-0.50);
     glVertex2f(-0.6,-0.38);
     glVertex2f(-1.0,-0.38);
     glVertex2f(-1.0,-0.50);
     glEnd();






glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(0.10,-0.50);
     glVertex2f(0.10,-0.40);
     glVertex2f(-0.98,-0.40);
     glVertex2f(-0.98,-0.50);
     glEnd();


glBegin(GL_QUADS);//glass
     glColor3ub(255, 255, 255);
     glVertex2f(0.10,-0.50);
     glVertex2f(0.10,-0.41);
     glVertex2f(-0.98,-0.41);
     glVertex2f(-.98,-0.50);
     glEnd();

//side black
glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(0.10,-0.50);
     glVertex2f(0.10,-0.40);
     glVertex2f(0.08,-0.40);
     glVertex2f(.08,-0.50);
     glEnd();









//GLASS border yellow


glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//black yellow
     glVertex2f(0.08,-0.42);
     glVertex2f(0.08,-0.41);
     glVertex2f(-0.98,-0.41);
     glVertex2f(-.98,-0.42);
     glEnd();

glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//black yellow y1
     glVertex2f(0.08,-0.5);
     glVertex2f(0.08,-0.42);
     glVertex2f(.076,-0.42);
     glVertex2f(.076,-0.5);
     glEnd();

glBegin(GL_QUADS);//glass
     glColor3ub(198, 83, 198);//violet
     glVertex2f(0.076,-0.425);
     glVertex2f(0.076,-0.42);
     glVertex2f(-0.98,-0.42);
     glVertex2f(-.98,-0.425);
     glEnd();
glBegin(GL_QUADS);//glass
     glColor3ub(198, 83, 198);//v1
     glVertex2f(0.076,-0.5);
     glVertex2f(0.076,-0.42);
     glVertex2f(.072,-0.42);
     glVertex2f(.072,-0.5);
     glEnd();

/*glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y2
     glVertex2f(0.058,-0.5);
     glVertex2f(0.058,-0.42);
     glVertex2f(.055,-0.42);
     glVertex2f(.055,-0.5);
   glEnd();




glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y3
     glVertex2f(0.037,-0.5);
     glVertex2f(0.037,-0.42);
     glVertex2f(.034,-0.42);
     glVertex2f(.034,-0.5);
   glEnd();



glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y4
     glVertex2f(0.016,-0.5);
     glVertex2f(0.016,-0.42);
     glVertex2f(.013,-0.42);
     glVertex2f(.013,-0.5);
   glEnd();


glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y5
     glVertex2f(-0.005,-0.5);
     glVertex2f(-0.005,-0.42);
     glVertex2f(-.002,-0.42);
     glVertex2f(-.002,-0.5);
   glEnd();



glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y6
     glVertex2f(-0.02,-0.5);
     glVertex2f(-0.02,-0.42);
     glVertex2f(-.023,-0.42);
     glVertex2f(-.023,-0.5);
   glEnd();




glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y7
     glVertex2f(-0.041,-0.5);
     glVertex2f(-0.041,-0.42);
     glVertex2f(-.044,-0.42);
     glVertex2f(-.044,-0.5);
   glEnd();



glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y8
     glVertex2f(-0.062,-0.5);
     glVertex2f(-0.062,-0.42);
     glVertex2f(-.065,-0.42);
     glVertex2f(-.065,-0.5);
   glEnd();





glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y9
     glVertex2f(-0.083,-0.5);
     glVertex2f(-0.083,-0.42);
     glVertex2f(-.086,-0.42);
     glVertex2f(-.086,-0.5);
   glEnd();




glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y10
     glVertex2f(-0.104,-0.5);
     glVertex2f(-0.104,-0.42);
     glVertex2f(-.107,-0.42);
     glVertex2f(-.107,-0.5);
   glEnd();





glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y11
     glVertex2f(-0.125,-0.5);
     glVertex2f(-0.125,-0.42);
     glVertex2f(-.128,-0.42);
     glVertex2f(-.128,-0.5);
   glEnd();




glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y12
     glVertex2f(-0.146,-0.5);
     glVertex2f(-0.146,-0.42);
     glVertex2f(-.149,-0.42);
     glVertex2f(-.149,-0.5);
   glEnd();




   glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y13
     glVertex2f(-0.167,-0.5);
     glVertex2f(-0.167,-0.42);
     glVertex2f(-.17,-0.42);
     glVertex2f(-.17,-0.5);
   glEnd();




   glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y14
     glVertex2f(-0.188,-0.5);
     glVertex2f(-0.188,-0.42);
     glVertex2f(-.191,-0.42);
     glVertex2f(-.191,-0.5);
   glEnd();




   glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y15
     glVertex2f(-0.209,-0.5);
     glVertex2f(-0.209,-0.42);
     glVertex2f(-.212,-0.42);
     glVertex2f(-.212,-0.5);
   glEnd();


 glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y16
     glVertex2f(-0.23,-0.5);
     glVertex2f(-0.23,-0.42);
     glVertex2f(-.235,-0.42);
     glVertex2f(-.235,-0.5);
   glEnd();

glBegin(GL_QUADS);//glass
     glColor3ub(230, 184, 0);//y17
     glVertex2f(-0.271,-0.5);
     glVertex2f(-0.271,-0.42);
     glVertex2f(-.276,-0.42);
     glVertex2f(-.276,-0.5);
   glEnd();
   */




//tree@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

   glColor3ub(51, 102, 0);
    int q;

	 x=0.19f;  y=-.5f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount;q++) {
			glVertex2f(
		            x + (radius * cos(q *  twicePi / triangleAmount)),
			    y + (radius * sin(q * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(51, 102, 0);
    int r;

	 x=0.22f;  y=-.48f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(r = 0; r <= triangleAmount;r++) {
			glVertex2f(
		            x + (radius * cos(r *  twicePi / triangleAmount)),
			    y + (radius * sin(r * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(51, 102, 0);
    int t;

	 x=0.25f;  y=-.5f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(t = 0; t <= triangleAmount;t++) {
			glVertex2f(
		            x + (radius * cos(t *  twicePi / triangleAmount)),
			    y + (radius * sin(t * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(77, 153, 0);
    int u;

	 x=0.28f;  y=-.49f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(u = 0; u <= triangleAmount;u++) {
			glVertex2f(
		            x + (radius * cos(u *  twicePi / triangleAmount)),
			    y + (radius * sin(u * twicePi / triangleAmount))
			);
		}
	glEnd();


glColor3ub(77, 153, 0);
    int o;

	 x=0.31f;  y=-.48f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(o = 0; o <= triangleAmount;o++) {
			glVertex2f(
		            x + (radius * cos(o *  twicePi / triangleAmount)),
			    y + (radius * sin(o * twicePi / triangleAmount))
			);
		}
	glEnd();

glColor3ub(77, 153, 0);
    int p;

	 x=0.34f;  y=-.49f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(p = 0; p <= triangleAmount;p++) {
			glVertex2f(
		            x + (radius * cos(p *  twicePi / triangleAmount)),
			    y + (radius * sin(p * twicePi / triangleAmount))
			);
		}
	glEnd();















   glBegin(GL_QUADS);//side line
     glColor3ub(255, 214, 51);//yellow
     glVertex2f(0.75,-0.5);
     glVertex2f(0.75,-0.49);
     glVertex2f(0.12,-0.49);
     glVertex2f(.12,-0.50);
   glEnd();

//grass


glBegin(GL_QUADS);
     glColor3ub(102, 153, 0);
     glVertex2f(1.0,-0.53);
     glVertex2f(1.0,-0.50);
     glVertex2f(-1.0,-0.50);
     glVertex2f(-1.0,-0.53);
     glEnd();
//mati

glBegin(GL_QUADS);
     glColor3ub(102, 51, 0);
     glVertex2f(1.0,-0.52);
     glVertex2f(1.0,-0.53);
     glVertex2f(-1.0,-0.53);
     glVertex2f(-1.0,-0.52);
     glEnd();


 //road1

glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(1.0,-0.6);
     glVertex2f(1.0,-0.53);
     glVertex2f(-1.0,-0.53);
     glVertex2f(-1.0,-0.6);
     glEnd();

glBegin(GL_QUADS);//road line
     glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.54);
     glVertex2f(1.0,-0.5390);
     glVertex2f(-1.0,-0.5390);
     glVertex2f(-1.0,-0.54);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255 );
     glVertex2f(-0.50,-0.565);
     glVertex2f(-0.50,-0.557);
     glVertex2f(-1.0,-0.557);
     glVertex2f(-1.0,-0.565);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(0.20,-0.565);
     glVertex2f(0.20,-0.557);
     glVertex2f(-0.30,-0.557);
     glVertex2f(-0.30,-0.565);
     glEnd();
      glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex2f(0.40,-0.565);
     glVertex2f(0.40,-0.557);
     glVertex2f(0.90,-0.557);
     glVertex2f(0.90,-0.565);
     glEnd();






//car
glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_QUADS);
     glColor3ub(230, 255, 255);
     glVertex2f(.23,-0.58);
     glVertex2f(.23,-0.55);
     glVertex2f(.32,-0.55);
     glVertex2f(.32,-0.58);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(230, 255, 255);
     glVertex2f(.26,-0.55);
     glVertex2f(.26,-0.51);
     glVertex2f(.313,-0.51);
     glVertex2f(.313,-0.55);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(.265,-0.55);
     glVertex2f(.265,-0.515);
     glVertex2f(.309,-0.515);
     glVertex2f(.309,-0.55);
     glEnd();
/*glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(.29,-0.51);
     glVertex2f(.29,-0.502);
     glVertex2f(.3,-0.502);
     glVertex2f(.3,-0.51);
     glEnd();*/


    glColor3ub(7, 8, 7);
    int i;

	 x=.25f;  y=-.578f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glColor3ub(7, 8, 7);
    int j;

	 x=.30f;  y=-.578f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();


glBegin(GL_QUADS);
     glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.595);
     glVertex2f(1.0,-0.590);
     glVertex2f(-1.0,-0.590);
     glVertex2f(-1.0,-0.595);
     glEnd();

//grass 2

glBegin(GL_QUADS);
     glColor3ub(102, 153, 0);
     glVertex2f(1.0,-0.61);
     glVertex2f(1.0,-0.6);
     glVertex2f(-1.0,-0.6);
     glVertex2f(-1.0,-0.61);
     glEnd();
//mati 2

   glBegin(GL_QUADS);
     glColor3ub(102, 51, 0);
     glVertex2f(1.0,-0.6195);
     glVertex2f(1.0,-0.61);
     glVertex2f(-1.0,-0.61);
     glVertex2f(-1.0,-0.6195);
     glEnd();


//road 2

glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(1.0,-0.7);
     glVertex2f(1.0,-0.6195);
     glVertex2f(-1.0,-0.6195);
     glVertex2f(-1.0,-0.7);
     glEnd();

glBegin(GL_QUADS);
      glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.6295);
     glVertex2f(1.0,-0.625);
     glVertex2f(-1.0,-0.625);
     glVertex2f(-1.0,-0.6295);
     glEnd();

glBegin(GL_QUADS);
      glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.695);
     glVertex2f(1.0,-0.69);
     glVertex2f(-1.0,-0.69);
     glVertex2f(-1.0,-0.695);
     glEnd();


glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(-.5,-0.66);
     glVertex2f(-.50,-0.67);
     glVertex2f(-1.0,-0.67);
     glVertex2f(-1.0,-0.66);
     glEnd();


glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.2,-0.66);
     glVertex2f(.20,-0.67);
     glVertex2f(-.30,-0.67);
     glVertex2f(-.30,-0.66);
     glEnd();
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.4,-0.66);
     glVertex2f(.40,-0.67);
     glVertex2f(.90,-0.67);
     glVertex2f(.90,-0.66);
     glEnd();

//car3
glPushMatrix();
glTranslatef(position13,0.0f, 0.0f);

     glBegin(GL_QUADS);
     glColor3ub(184, 0, 230);
     glVertex2f(-.23,-0.68);
     glVertex2f(-.23,-0.65);
     glVertex2f(-.32,-0.65);
     glVertex2f(-.32,-0.68);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(184, 0, 230);
     glVertex2f(-.26,-0.65);
     glVertex2f(-.26,-0.61);
     glVertex2f(-.313,-0.61);
     glVertex2f(-.313,-0.65);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-.265,-0.65);
     glVertex2f(-.265,-0.615);
     glVertex2f(-.309,-0.615);
     glVertex2f(-.309,-0.65);
     glEnd();
/*glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(-.29,-0.61);
     glVertex2f(-.29,-0.602);
     glVertex2f(-.3,-0.602);
     glVertex2f(-.3,-0.61);
     glEnd();*/


    glColor3ub(7, 8, 7);
    int m;

	 x=-.25f;  y=-.678f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(m = 0; m <= triangleAmount;m++) {
			glVertex2f(
		            x + (radius * cos(m *  twicePi / triangleAmount)),
			    y + (radius * sin(m * twicePi / triangleAmount))
			);
		}
	glEnd();


glColor3ub(7, 8, 7);
    int M;

	 x=-.30f;  y=-.678f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(M = 0; M <= triangleAmount;M++) {
			glVertex2f(
		            x + (radius * cos(M *  twicePi / triangleAmount)),
			    y + (radius * sin(M * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position14,0.0f, 0.0f);
//car4
     glBegin(GL_QUADS);
     glColor3ub(255, 77, 136);
     glVertex2f(.23,-0.68);
     glVertex2f(.23,-0.65);
     glVertex2f(.32,-0.65);
     glVertex2f(.32,-0.68);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 77, 136);
     glVertex2f(.29,-0.65);
     glVertex2f(.29,-0.61);
     glVertex2f(.24,-0.61);
     glVertex2f(.24,-0.65);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(.285,-0.65);
     glVertex2f(.285,-0.615);
     glVertex2f(.245,-0.615);
     glVertex2f(.245,-0.65);
     glEnd();
/*glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(-.29,-0.61);
     glVertex2f(-.29,-0.602);
     glVertex2f(-.3,-0.602);
     glVertex2f(-.3,-0.61);
     glEnd();*/


    glColor3ub(7, 8, 7);
    int n;

	 x=.25f;  y=-.678f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(n = 0; n <= triangleAmount;n++) {
			glVertex2f(
		            x + (radius * cos(n *  twicePi / triangleAmount)),
			    y + (radius * sin(n * twicePi / triangleAmount))
			);
		}
	glEnd();


glColor3ub(7, 8, 7);
    int N;

	 x=.30f;  y=-.678f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(N = 0; N <= triangleAmount;N++) {
			glVertex2f(
		            x + (radius * cos(N *  twicePi / triangleAmount)),
			    y + (radius * sin(N * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();


//grass 3

glBegin(GL_QUADS);
     glColor3ub(102, 153, 0);
     glVertex2f(1.0,-0.71);
     glVertex2f(1.0,-0.7);
     glVertex2f(-1.0,-0.7);
     glVertex2f(-1.0,-0.71);
     glEnd();
//mati 3

glBegin(GL_QUADS);
     glColor3ub(102, 51, 0);
     glVertex2f(1.0,-0.7195);
     glVertex2f(1.0,-0.71);
     glVertex2f(-1.0,-0.71);
     glVertex2f(-1.0,-0.7195);
     glEnd();

//road 3
glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(1.0,-0.8);
     glVertex2f(1.0,-0.7195);
     glVertex2f(-1.0,-0.7195);
     glVertex2f(-1.0,-0.8);
     glEnd();


     glBegin(GL_QUADS);
      glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.7295);
     glVertex2f(1.0,-0.725);
     glVertex2f(-1.0,-0.725);
     glVertex2f(-1.0,-0.7295);
     glEnd();


glBegin(GL_QUADS);
      glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.795);
     glVertex2f(1.0,-0.79);
     glVertex2f(-1.0,-0.79);
     glVertex2f(-1.0,-0.795);
     glEnd();


glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(-.5,-0.76);
     glVertex2f(-.50,-0.77);
     glVertex2f(-1.0,-0.77);
     glVertex2f(-1.0,-0.76);
     glEnd();

     glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.2,-0.76);
     glVertex2f(.20,-0.77);
     glVertex2f(-.30,-0.77);
     glVertex2f(-.30,-0.76);
     glEnd();


     glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.4,-0.76);
     glVertex2f(.40,-0.77);
     glVertex2f(.90,-0.77);
     glVertex2f(.90,-0.76);
     glEnd();
 //lal thomba

  glBegin(GL_QUADS);
glColor3ub(255, 0, 0);
     glVertex2f(.43,-0.8);
     glVertex2f(.43,-0.7);
     glVertex2f(.42,-0.7);
     glVertex2f(.42,-0.8);
     glEnd();
 glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
     glVertex2f(.43,-0.7);
     glVertex2f(.43,-0.6);
     glVertex2f(.42,-0.6);
     glVertex2f(.42,-0.7);
     glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 0, 0);
     glVertex2f(.43,-0.6);
     glVertex2f(.43,-0.5);
     glVertex2f(.42,-0.5);
     glVertex2f(.42,-0.6);
     glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
     glVertex2f(.43,-0.5);
     glVertex2f(.43,-0.45);
     glVertex2f(.42,-0.45);
     glVertex2f(.42,-0.5);
     glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
     glVertex2f(.43,-0.45);
     glVertex2f(.43,-0.4);
     glVertex2f(.42,-0.4);
     glVertex2f(.42,-0.45);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(.44,-0.43);
     glVertex2f(.435,-0.45);
     glVertex2f(.405,-0.45);
     glVertex2f(.41,-0.43);
     glEnd();
//car2
glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
glBegin(GL_QUADS);
     glColor3f(0,0,1);
     glVertex2f(.43,-0.78);
     glVertex2f(.43,-0.75);
     glVertex2f(.52,-0.75);
     glVertex2f(.52,-0.78);
     glEnd();
glBegin(GL_QUADS);
     glColor3f(0,0,1);
     glVertex2f(.46,-0.75);
     glVertex2f(.46,-0.71);
     glVertex2f(.513,-0.71);
     glVertex2f(.513,-0.75);
     glVertex2f(.465,-0.715);
     glVertex2f(.509,-0.715);
     glVertex2f(.509,-0.75);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(.49,-0.71);
     glVertex2f(.49,-0.702);
     glVertex2f(.5,-0.702);
     glVertex2f(.5,-0.71);
     glEnd();

glBegin(GL_QUADS);
     glColor3f(0, 0, 0);
     glVertex2f(.465,-0.75);
     glVertex2f(.465,-0.715);
     glVertex2f(.509,-0.715);
     glVertex2f(.509,-0.75);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(.49,-0.71);
     glVertex2f(.49,-0.702);
     glVertex2f(.5,-0.702);
     glVertex2f(.5,-0.71);
     glEnd();

    glColor3ub(7, 8, 7);
    int a;

	 x=.45f;  y=-.778f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(a = 0; a <= triangleAmount;a++) {
			glVertex2f(
		            x + (radius * cos(a *  twicePi / triangleAmount)),
			    y + (radius * sin(a * twicePi / triangleAmount))
			);
		}
	glEnd();


    glColor3ub(7, 8, 7);
    int s;

	 x=.50f;  y=-.778f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(s = 0; s <= triangleAmount;s++) {
			glVertex2f(
		            x + (radius * cos(s *  twicePi / triangleAmount)),
			    y + (radius * sin(s * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();








//GRASS 4
glBegin(GL_QUADS);
glColor3ub(102, 153, 0);
     glVertex2f(1.0,-0.85);
     glVertex2f(1.0,-0.8);
     glVertex2f(-1.0,-0.8);
     glVertex2f(-1.0,-0.85);
     glEnd();

//mati 4
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
     glVertex2f(1.0,-0.86);
     glVertex2f(1.0,-0.85);
     glVertex2f(-1.0,-0.85);
     glVertex2f(-1.0,-0.86);
     glEnd();

//road4
glBegin(GL_QUADS);
glColor3ub(115, 115, 115);
     glVertex2f(1.0,-0.86);
     glVertex2f(1.0,-0.97);
     glVertex2f(-1.0,-0.97);
     glVertex2f(-1.0,-0.86);
     glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
     glVertex2f(1.0,-0.87);
     glVertex2f(1.0,-0.875);
     glVertex2f(-1.0,-0.875);
     glVertex2f(-1.0,-0.87);
     glEnd();

     glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(-.5,-0.91);
     glVertex2f(-.50,-0.92);
     glVertex2f(-1.0,-0.92);
     glVertex2f(-1.0,-0.91);
     glEnd();

     glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.2,-0.91);
     glVertex2f(.20,-0.92);
     glVertex2f(-.30,-0.92);
     glVertex2f(-.30,-0.91);
     glEnd();


     glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
     glVertex2f(.4,-0.91);
     glVertex2f(.40,-0.92);
     glVertex2f(.90,-0.92);
     glVertex2f(.90,-0.91);
     glEnd();



//grass4
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
     glVertex2f(1.0,-0.965);
     glVertex2f(1.0,-0.96);
     glVertex2f(-1.0,-0.96);
     glVertex2f(-1.0,-0.965);
     glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 153, 0);
     glVertex2f(1.0,-0.97);
     glVertex2f(1.0,-1.0);
     glVertex2f(-1.0,-1.0);
     glVertex2f(-1.0,-0.97);
     glEnd();
     glFlush();
}

 void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
glutDisplayFunc(display);

break;
case GLUT_KEY_DOWN:
glutDisplayFunc(display2);

break;
case GLUT_KEY_LEFT:
glutDisplayFunc(display3);
break;
case GLUT_KEY_RIGHT:
break;}
speed=.01;
glutPostRedisplay();}

void sound()
{

    PlaySound("City.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}





      int main(int argc,char ** argv)
 {
     glutInit(&argc,argv);
     glutCreateWindow("Airport Environment");
     glutInitWindowSize(450,450);
     glutDisplayFunc(display);
     glutTimerFunc(100, update, 0);
     glutTimerFunc(100, update1, 0);
     glutTimerFunc(100, update2, 0);
     glutTimerFunc(100, update3, 0);
     glutTimerFunc(100, update4, 0);
     glutTimerFunc(100, update5, 0);
     glutTimerFunc(100, update6, 0);
     glutTimerFunc(100, update7, 0);
     glutTimerFunc(100, update8, 0);
     glutTimerFunc(100, update9, 0);
     glutTimerFunc(100, update10, 0);
     glutTimerFunc(100, update11, 0);
     glutTimerFunc(100, update12, 0);
     glutTimerFunc(100, update13, 0);
     glutTimerFunc(100, update14, 0);
     glutTimerFunc(100, update15, 0);
     glutSpecialFunc(SpecialInput);
     sound();






     glutMainLoop();
     return 0;
 }
