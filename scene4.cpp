#include "declarations.h"
#include "functions.h"

void primarySchoolTitleScreen()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    // Story Title
    print("CHAPTER 2",
          1, 1, 1, ps_chap_fade, 300 + trans_x_chap2, 400, .2, .2, 2);
    print("Primary School",
          1, 1, 1, ps_title_fade, 400, 250 + trans_y_title2, .3, .3, 2);
}

// Function to Draw Ceiling
void PS_drawCeiling()
{
    // Ceiling
    glBegin(GL_POLYGON);
    glColor3ub(65, 105, 120); // Aqua
    glVertex2f(0, 800);
    glVertex2f(0, 700);
    glVertex2f(100, 650);
    glVertex2f(1400, 650);
    glVertex2f(1400, 800);
    glEnd();

    // Border for Ceiling
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2f(0, 800);
    glVertex2f(0, 700);
    glVertex2f(100, 650);
    glVertex2f(1400, 650);
    glVertex2f(1400, 800);
    glEnd();
}

// Function to Draw Side Wall
void PS_drawSideWall()
{
    // Side Wall
    glBegin(GL_POLYGON);
    glColor3ub(176, 204, 217); // Light Aqua
    glVertex2f(0, 700);
    glVertex2f(100, 650);
    glVertex2f(100, 200);
    glVertex2f(0, 75);
    glEnd();

    // Border for Side Wall
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2f(0, 700);
    glVertex2f(100, 650);
    glVertex2f(100, 200);
    glVertex2f(0, 75);
    glEnd();
}

// Function to Draw Center Wall
void PS_drawCenterWall()
{
    // Center Wall
    glBegin(GL_POLYGON);
    glColor3ub(120, 160, 175);
    glVertex2f(100, 650);
    glVertex2f(700, 650);
    glColor3ub(164, 191, 203);
    glVertex2f(700, 200);
    glVertex2f(100, 200);
    glEnd();

    // Border for Center Wall
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2f(100, 650);
    glVertex2f(700, 650);
    glVertex2f(700, 200);
    glVertex2f(100, 200);
    glEnd();
}

// Function to Draw Dividing Wall
void PS_drawDividingWall()
{
    // Dividing Wall
    glBegin(GL_POLYGON);
    glColor3ub(176, 204, 217); // Light Aqua
    glVertex2f(700, 650);
    glVertex2f(850, 800);
    glVertex2f(850, 75);
    glVertex2f(700, 200);
    glEnd();

    // Border for Dividing Wall
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2f(700, 650);
    glVertex2f(850, 800);
    glVertex2f(850, 75);
    glVertex2f(700, 200);
    glEnd();
}

// Function to Draw Kitchen Wall
void PS_drawKitchenWall()
{
    // Kitchen Wall
    glBegin(GL_POLYGON);
    glColor3ub(164, 191, 203);
    glVertex2f(850, 800);
    glVertex2f(1400, 800);
    glVertex2f(1400, 75);
    glVertex2f(850, 75);
    glEnd();

    // Border for Kitchen Wall
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2f(850, 800);
    glVertex2f(1400, 800);
    glVertex2f(1400, 75);
    glVertex2f(850, 75);
    glEnd();
}

// Function to Draw Floor
void PS_drawFloor()
{
    // Floor
    glBegin(GL_POLYGON);
    glColor3ub(120, 160, 175);
    glVertex2f(100, 200);
    glVertex2f(700, 200);
    glVertex2f(850, 75);
    glVertex2f(0, 75);
    glEnd();

    // Border for Floor
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2f(100, 200);
    glVertex2f(700, 200);
    glVertex2f(850, 75);
    glVertex2f(0, 75);
    glEnd();
}

// Function to Draw Door
void PS_drawDoor()
{
    // Door
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(300, 500);
    glVertex2f(500, 500);
    glVertex2f(500, 200);
    glVertex2f(300, 200);
    glEnd();

    // Border
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(122, 76, 29); // Wood Dark Brown
    glVertex2f(300, 200);
    glVertex2f(300, 500);
    glVertex2f(300, 500);
    glVertex2f(500, 500);
    glVertex2f(500, 500);
    glVertex2f(500, 200);
    glEnd();
    glLineWidth(1);
}

void PS_drawBackground()
{
    glBegin(GL_POLYGON);
    glColor3ub(12, 172, 232); // Sky Blue
    glVertex2f(300, 500);
    glVertex2f(500, 500);
    glColor3ub(82, 163, 42); // Green Grass
    glVertex2f(500, 275);
    glVertex2f(300, 275);
    glEnd();
}

void PS_drawRoad()
{
    glBegin(GL_POLYGON);
    glColor3ub(40, 40, 40);
    glVertex2f(300, 275);
    glVertex2f(500, 275);
    glVertex2f(500, 200);
    glVertex2f(300, 200);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(300, 235);
    glVertex2f(380, 235);
    glVertex2f(420, 235);
    glVertex2f(500, 235);
    glEnd();
    glLineWidth(1);
}

void PS_drawOutside()
{
    PS_drawBackground();
    PS_drawRoad();
}

void PS_drawKitchenCounter()
{
    // Kitchen Counter
    glBegin(GL_POLYGON);
    glColor3ub(138, 82, 32); //Wood Brown
    glVertex2f(950, 300);
    glVertex2f(980, 325);
    glVertex2f(1300, 325);
    glVertex2f(1300, 300);
    glEnd();
}

void PS_drawKitchen()
{
    glBegin(GL_POLYGON);
    glColor3ub(247, 239, 187);
    glVertex2f(950, 550);
    glVertex2f(1300, 550);
    glVertex2f(1300, 300);
    glVertex2f(950, 300);
    glEnd();

    // Mother
    drawWoman(1630, 50, -1, 1,
              20, 20, 20,
              229, 49, 49, // top
              37, 107, 202, // bottom
              229, 49, 49 // skirt
             );

    // Hack to Hide Woman's Body
    glBegin(GL_POLYGON);
    glColor3ub(164, 191, 203);
    glVertex2f(1050, 300);
    glVertex2f(1200, 300);
    glVertex2f(1200, 140);
    glVertex2f(1050, 140);
    glEnd();

    // Kitchen Table
    glBegin(GL_POLYGON);
    glColor3ub(138, 82, 32);
    glVertex2f(950, 300);
    glVertex2f(1000, 330);
    glVertex2f(1300, 330);
    glVertex2f(1300, 300);
    glEnd();
}

void primarySchool()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    print("KID: Ma, can I go out and play football with the other kids?",
          1, 1, 1, ps_subtitle_1_appear, 300, 30 + trans_subtitle_1_done, .14, .14, 1);

    print("MOM: No, you have to complete your homework first, until then no playing, no TV.",
          1, 1, 1, ps_subtitle_2_appear, 100, 30 + trans_subtitle_2_done, .14, .14, 1);

    PS_drawCeiling();
    PS_drawSideWall();
    PS_drawCenterWall();
    PS_drawDividingWall();
    PS_drawFloor();

    PS_drawDoor();

    PS_drawOutside();

    PS_drawKitchenWall();
    PS_drawKitchen();

    // Kids inside House
    drawKid(250, 370,
            1, 1,
            255, 0, 0);

    // Back Kid
    drawKid(360 + trans_x_kid1, 380,
            -.3, .3,
            80, 50, 20);

    // Left Kid
    drawKid(350 + trans_x_kid2, 350,
            .3, .3,
            255, 255, 0);

    // Right Kid
    drawKid(400 + trans_x_kid3, 350,
            -.3, .3,
            255, 50, 0);

    // Ball
    drawCircle(380 + trans_x_ball, 305,
               200, 200, 200,
               1, 1,
               6);
}
