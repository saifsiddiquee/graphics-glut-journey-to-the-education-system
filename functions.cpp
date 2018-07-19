#include <iostream>
#include <unistd.h>
#include <time.h>
#include <Windows.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>
#define PI 3.141592653589
// Function to Create Delay
void delay(float secs)
{
    float end = clock()/CLOCKS_PER_SEC + secs;
    while((clock()/CLOCKS_PER_SEC) < end);
}

// Function to Print Text
void print(char *string,
           GLfloat r, GLfloat g, GLfloat b, GLfloat a,
           GLint x, GLint y,
           GLfloat w, GLfloat h,
           GLfloat strokeSize)
{
    glPushMatrix();

    glColor4f(r, g, b, a);
    glTranslatef(x, y, 0);
    glScalef(w, h, 0);

    glPointSize(strokeSize);
    glLineWidth(strokeSize);

    while (*string)
        glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN, *string++);

    glPopMatrix();

    glLineWidth(1);
    glPointSize(1);
}

// Function to Draw Circle
void drawCircle(GLfloat x, GLfloat y,
                GLfloat r, GLfloat g, GLfloat b,
                GLfloat sx, GLfloat sy,
                GLfloat radius)
{
    glPushMatrix();

    glTranslatef(x, y, 0);
    glScalef(sx, sy, 0);

    glBegin(GL_POLYGON);
    glColor3ub(r, g, b);
    for (GLfloat i = 0; i < 360; i += 5)
        glVertex2f(radius * sin(i * PI / 180), radius * cos(i * PI / 180));
    glEnd();

    glPopMatrix();
}

// Function to Draw Circle
void drawSemiCircle(GLfloat tx, GLfloat ty,
                    GLfloat sx, GLfloat sy,
                    GLfloat r, GLfloat g, GLfloat b,
                    GLfloat radius,
                    GLfloat start_angle, GLfloat end_angle)
{
    glPushMatrix();

    glTranslatef(tx, ty, 0);
    glScalef(sx, sy, 0);

    glBegin(GL_POLYGON);
    glColor3ub(r, g, b);
    for (GLfloat i = start_angle; i < end_angle; i += 5)
        glVertex2f(radius * sin(i * PI / 180), radius * cos(i * PI / 180));
    glEnd();

    glPopMatrix();
}

// Function to Draw Arc
void drawArc(GLfloat tx, GLfloat ty,
             GLfloat sx, GLfloat sy,
             GLfloat r, GLfloat g, GLfloat b)
{
    glPushMatrix();

    glTranslatef(tx, ty, 0);
    glScalef(sx, sy, 0);

    glPointSize(2);
    glBegin(GL_POINTS);
    glColor3ub(r, g, b);
    for ( GLfloat i = 90; i < 270; i++)
        glVertex2f(15 * sin(i * PI / 180), 15 * cos(i * PI / 180));
    glEnd();
    glPointSize(1);

    glPopMatrix();
}



void drawKidsShirtAndTrousers(GLfloat tx, GLfloat ty,
                              GLfloat sx, GLfloat sy,
                              GLfloat shirt_r, GLfloat shirt_g, GLfloat shirt_b)
{
    glPushMatrix();

    glTranslatef(tx, ty, 0);
    glScalef(sx, sy, 0);

    // Bottom Shirt
    glColor3ub(shirt_r, shirt_g, shirt_b);
    glBegin(GL_POLYGON);
    glVertex2f(0, 20);
    glVertex2f(100, 20);
    glVertex2f(100, 100);
    glVertex2f(0, 100);
    glEnd();

    // Top Shirt
    glBegin(GL_POLYGON);
    glVertex2f(100, 100);
    glVertex2f(135, 105);
    glVertex2f(120, 175);
    glVertex2f(100, 200);
    glVertex2f(50, 180);
    glVertex2f(0, 200);
    glVertex2f(-20, 175);
    glVertex2f(-35, 105);
    glVertex2f(0, 100);
    glEnd();

    // Left Trouser
    glColor3ub(37, 107, 202);
    glBegin(GL_POLYGON);
    glVertex2f(0, 25);
    glVertex2f(0, -100);
    glVertex2f(35, -100);
    glVertex2f(65, 25);
    glEnd();

    // Right Trouser
    glBegin(GL_POLYGON);
    glVertex2f(35, 25);
    glVertex2f(65, -100);
    glVertex2f(100, -100);
    glVertex2f(100, 25);
    glEnd();

    glPopMatrix();
}

void drawKid(GLfloat tx, GLfloat ty,
             GLfloat sx, GLfloat sy,
             GLfloat shirt_r, GLfloat shirt_g, GLfloat shirt_b)
{
    glPushMatrix();

    glTranslatef(tx, ty, 0);
    glScalef(sx, sy, 0);

    // Neck
    drawSemiCircle(-1, -35, .6, 1,
                   203, 166, 108,
                   20, -90, 90);

    // Face
    drawCircle(0, 0,
               232, 190, 123,
               1, 1,
               24);

    // Left Eye
    drawCircle(-8, 0,
               250, 250, 250,
               1, 1,
               4);
    drawCircle(-6, 0,
               10, 10, 10,
               1, 1,
               2);

    // Right Eye
    drawCircle(8, 0,
               250, 250, 250,
               1, 1,
               4);
    drawCircle(10, 0,
               10, 10, 10,
               1, 1,
               2);

    // Cap
    drawSemiCircle(0, 10, 1, 1,
                   37, 107, 202,
                   24, -90, 90);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f(20, 14);
    glVertex2f(40, 16);
    glEnd();
    glLineWidth(1);

    // Hands
    drawCircle(-42, -82,
               232, 190, 123,
               1, 1,
               10);
    drawCircle(38, -82,
               232, 190, 123,
               1, 1,
               10);

    // Shirt and Trousers
    drawKidsShirtAndTrousers(-32, -125,
                             .6, .5,
                             shirt_r, shirt_g, shirt_b);

    // Left Shoe
    drawSemiCircle(-21, -178,
                   1.2, 1,
                   20, 20, 20,
                   10,
                   -90, 90);

    // Right Shoe
    drawSemiCircle(18, -178,
                   1.2, 1,
                   20, 20, 20,
                   10,
                   -90, 90);

    glPopMatrix();
}

void drawTree(GLfloat tx, GLfloat ty,
              GLfloat sx, GLfloat sy)
{
    glPushMatrix();

    glTranslatef(tx, ty, 0);
    glScalef(sx, sy, 0);

    // Bark
    glBegin(GL_POLYGON);
    glColor3ub(86, 46, 11);
    glVertex2f(0, 0);
    glVertex2f(40, 0);
    glColor3ub(71, 36, 6);
    glVertex2f(35, 200);
    glVertex2f(5, 200);
    glEnd();

    // Tree
    drawCircle(20, 200, 5, 80, 10, 1, 1, 80);

    // Apples
    drawCircle(27, 194, 255, 0, 0, 1, 1.2, 5);
    drawCircle(-15, 170, 255, 0, 0, 1, 1.2, 5);
    drawCircle(47, 155, 255, 0, 0, 1, 1.2, 5);
    drawCircle(-2, 228, 255, 0, 0, 1, 1.2, 5);
    drawCircle(72, 216, 255, 0, 0, 1, 1.2, 5);

    glPopMatrix();
}

// Function to Draw a Man
void drawMan(GLfloat tx, GLfloat ty, GLfloat sx, GLfloat sy,
             GLfloat hair_r, GLfloat hair_g, GLfloat hair_b,
             GLfloat top_r, GLfloat top_g, GLfloat top_b,
             GLfloat belt_r, GLfloat belt_g, GLfloat belt_b,
             GLfloat pant_r, GLfloat pant_g, GLfloat pant_b)
{
    glPushMatrix();

    glTranslatef(tx, ty, 0);
    glScalef(sx, sy, 0);

    // Neck
    glLineWidth(25);
    glBegin(GL_LINES);
    glColor3ub(203, 166, 108); // Darker Skin
    glVertex2f(508, 380);
    glVertex2f(508, 360);
    glVertex2f(513, 380);
    glVertex2f(513, 360);
    glEnd();
    glLineWidth(6);

    // Face
    drawCircle(510, 407,
               232, 190, 123, // Lighter Skin
               1, 1,
               30);

    // Hair
    drawSemiCircle(510, 420, 1, .6,
                   hair_r, hair_g, hair_b,
                   30,
                   -90, 90);

    drawSemiCircle(485, 410, .4, 1,
                   hair_r, hair_g, hair_b,
                   15,
                   -180, 0);

    // Left Eye
    drawCircle(505, 410,
               250, 250, 250,
               1, 1,
               5);

    drawCircle(508, 408,
               10, 10, 10,
               1, 1,
               2.5);

    // Right Eye
    drawCircle(530, 410,
               250, 250, 250,
               1, 1,
               5);

    drawCircle(532, 408,
               10, 10, 10,
               1, 1,
               2.5);

    // Smile
    drawArc(514, 388, .5, .3,
            20, 20, 20);

    // Nose
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(518, 405);
    glVertex2f(522, 398);
    glVertex2f(522, 398);
    glVertex2f(518, 395);
    glEnd();
    glLineWidth(1);

    // Arms
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(top_r,top_g,top_b); // Lighter Skin
    glVertex2f(470, 355);
    glVertex2f(470, 265);
    glVertex2f(475, 355);
    glVertex2f(475, 265);
    glVertex2f(480, 355);
    glVertex2f(480, 265);

    glVertex2f(540, 355);
    glVertex2f(540, 265);
    glVertex2f(545, 355);
    glVertex2f(545, 265);
    glVertex2f(550, 355);
    glVertex2f(550, 265);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(232, 190, 123); // Lighter Skin
    glVertex2f(475, 265);
    glVertex2f(475, 255);
    glVertex2f(480, 265);
    glVertex2f(480, 255);

    glVertex2f(540, 265);
    glVertex2f(540, 255);
    glVertex2f(545, 265);
    glVertex2f(545, 255);
    glEnd();
    glLineWidth(1);

    // Top
    glBegin(GL_POLYGON);
    glColor3ub(top_r, top_g, top_b);
    glVertex2f(470, 355);
    glVertex2f(480, 365);
    glVertex2f(540, 365);
    glVertex2f(550, 355);
    glVertex2f(540, 280);
    glVertex2f(480, 280);
    glEnd();

    //collar
    glLineWidth(25);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(500, 365);
    glVertex2f(510, 355);
    glEnd();

    glLineWidth(25);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(520, 365);
    glVertex2f(510, 355);
    glEnd();

    glLineWidth(25);
    glBegin(GL_LINES);
    glColor3ub(top_r-15, top_g-15, top_b-15);
    glVertex2f(510, 355);
    glVertex2f(510, 280);
    glEnd();

    // Pant
    glBegin(GL_POLYGON);
    glColor3ub(pant_r, pant_g, pant_b);
    glVertex2f(480, 280);
    glVertex2f(515, 280);
    glVertex2f(505, 150);
    glVertex2f(475, 150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(pant_r, pant_g, pant_b);
    glVertex2f(505, 280);
    glVertex2f(540, 280);
    glVertex2f(545, 150);
    glVertex2f(515, 150);
    glEnd();

    // Belt
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(belt_r, belt_g, belt_b);
    glVertex2f(480, 280);
    glVertex2f(540, 280);
    glEnd();

    glLineWidth(25);
    glBegin(GL_LINES);
    glColor3ub(170,160,120);
    glVertex2f(505, 280);
    glVertex2f(515, 280);
    glEnd();

    glPopMatrix();
}

void drawWoman(GLfloat tx, GLfloat ty, GLfloat sx, GLfloat sy,
               GLfloat hair_r, GLfloat hair_g, GLfloat hair_b,
               GLfloat top_r, GLfloat top_g, GLfloat top_b,
               GLfloat ribbon_r, GLfloat ribbon_g, GLfloat ribbon_b,
               GLfloat skirt_r, GLfloat skirt_g, GLfloat skirt_b)
{
    glPushMatrix();

    glTranslatef(tx, ty, 0);
    glScalef(sx, sy, 0);

    // Neck
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(203, 166, 108); // Darker Skin
    glVertex2f(507, 380);
    glVertex2f(507, 360);
    glVertex2f(513, 380);
    glVertex2f(513, 360);
    glEnd();
    glLineWidth(1);

    // Face
    drawCircle(510, 407,
               232, 190, 123, // Lighter Skin
               1, 1,
               30);

    // Hair
    drawSemiCircle(510, 420, 1, .6,
                   hair_r, hair_g, hair_b,
                   35, -90, 90);

    drawSemiCircle(485, 400, .4, 1,
                   hair_r, hair_g, hair_b,
                   35, -180, 0);

    // Left Eye
    drawCircle(505, 410,
               250, 250, 250,
               1, 1,
               5);

    drawCircle(508, 408,
               10, 10, 10,
               1, 1,
               2.5);

    // Right Eye
    drawCircle(530, 410,
               250, 250, 250,
               1, 1,
               5);

    drawCircle(532, 408,
               10, 10, 10,
               1, 1,
               2.5);

    // Smile
    drawArc(514, 388, .5, .3,
            20, 20, 20);

    // Nose
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(518, 405);
    glVertex2f(522, 398);
    glVertex2f(522, 398);
    glVertex2f(518, 395);
    glEnd();
    glLineWidth(1);

    // Arms
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(232, 190, 123); // Lighter Skin
    glVertex2f(470, 340);
    glVertex2f(470, 240);
    glVertex2f(475, 340);
    glVertex2f(475, 240);
    glVertex2f(480, 340);
    glVertex2f(480, 240);

    glVertex2f(540, 340);
    glVertex2f(540, 240);
    glVertex2f(545, 340);
    glVertex2f(545, 240);
    glVertex2f(550, 340);
    glVertex2f(550, 240);
    glEnd();
    glLineWidth(1);

    // Top
    glBegin(GL_POLYGON);
    glColor3ub(top_r, top_g, top_b);
    glVertex2f(460, 370);
    glVertex2f(560, 370);
    glVertex2f(540, 300);
    glVertex2f(480, 300);
    glEnd();

    // Skirt
    glBegin(GL_POLYGON);
    glColor3ub(skirt_r, skirt_g, skirt_b);
    glVertex2f(480, 300);
    glVertex2f(540, 300);
    glVertex2f(560, 180);
    glVertex2f(460, 180);
    glEnd();

    // Ribbon
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(ribbon_r, ribbon_g, ribbon_b);
    glVertex2f(480, 300);
    glVertex2f(540, 300);
    glEnd();
    glLineWidth(1);

    // Legs
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(232, 190, 123); // Lighter Skin
    glVertex2f(490, 180);
    glVertex2f(490, 150);
    glVertex2f(495, 180);
    glVertex2f(495, 150);

    glVertex2f(525, 180);
    glVertex2f(525, 150);
    glVertex2f(530, 180);
    glVertex2f(530, 150);
    glEnd();
    glLineWidth(1);

    glPopMatrix();
}

void drawBaby(GLfloat tx, GLfloat ty, GLfloat sx, GLfloat sy)
{
    glPushMatrix();

    glTranslatef(tx, ty, 0);
    glScalef(sx, sy, 0);

    drawCircle(45, 0, 195, 199, 201, 1, 1, 25);
    drawCircle(100, 0, 195, 199, 201, 2, 0.9, 30);
    drawCircle(45, 8, 232, 190, 123, 0.9, 0.5, 20);


    glColor3ub(245, 165, 228);
    glLineWidth(25);
    glBegin(GL_LINES);

    glVertex2f(1, -32);
    glVertex2f(189, -32);
    glVertex2f(1, -30);
    glVertex2f(189, -30);
    glVertex2f(1, -28);
    glVertex2f(189, -28);
    glEnd();

    glColor3ub(70, 51, 3);
    glLineWidth(10);
    glBegin(GL_LINES);

    glVertex2f(5, 50);
    glVertex2f(5, -35);

    glVertex2f(35, 50);
    glVertex2f(35, -35);

    glVertex2f(65, 50);
    glVertex2f(65, -35);

    glVertex2f(95, 50);
    glVertex2f(95, -35);

    glVertex2f(125, 50);
    glVertex2f(125, -35);

    glVertex2f(155, 50);
    glVertex2f(155, -35);

    glVertex2f(185, 50);
    glVertex2f(185, -35);

    glVertex2f(35, 50);
    glVertex2f(35, -35);

    glVertex2f(1, 50);
    glVertex2f(189, 50);

    glVertex2f(1, -35);
    glVertex2f(189, -35);

    glLineWidth(35);
    glVertex2f(3, -35);
    glVertex2f(3, -80);

    glVertex2f(187, -35);
    glVertex2f(187, -80);
    glEnd();

    glPopMatrix();
}
