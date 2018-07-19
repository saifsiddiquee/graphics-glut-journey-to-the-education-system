#include "declarations.h"
#include "functions.h"
#include "sceneFunctions.h"

void PUCTitleScreen()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    // Story Title
    print("CHAPTER 4",
          1, 1, 1, puc_chap_fade, 300, 500 - trans_x_chap4, .2, .2, 2);
    print("Pre University College",
          1, 1, 1, puc_title_fade, 400 - trans_x_title4, 450 - trans_x_title4, .3, .3, 2);
}


void PUC_drawFloor()
{
    // Floor
    glBegin(GL_POLYGON);
    glColor3ub(225, 215, 205);
    glVertex2f(0, 75);
    glVertex2f(1400, 75);
    glColor3ub(210, 193, 179);
    glVertex2f(775, 200);
    glVertex2f(625, 200);
    glEnd();

    // Floor Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(0, 75);
    glVertex2f(1400, 75);
    glVertex2f(775, 200);
    glVertex2f(625, 200);
    glEnd();
}

void PUC_drawCenterWall()
{
    // Center Wall
    glBegin(GL_POLYGON);
    glColor3ub(230, 230, 230);
    glVertex2f(625, 200);
    glVertex2f(775, 200);
    glVertex2f(775, 450);
    glVertex2f(625, 450);
    glEnd();

    // Center Wall Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(625, 200);
    glVertex2f(775, 200);
    glVertex2f(775, 450);
    glVertex2f(625, 450);
    glEnd();

    // Center Wall Strip
    glBegin(GL_POLYGON);
    glColor3ub(0, 130, 255);
    glVertex2f(625, 200);
    glVertex2f(775, 200);
    glVertex2f(775, 207.81);
    glVertex2f(625, 207.81);
    glEnd();

    // Center Wall Strip Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(625, 200);
    glVertex2f(775, 200);
    glVertex2f(775, 207.81);
    glVertex2f(625, 207.81);
    glEnd();
}

void PUC_drawCeiling()
{
    // Ceiling
    glBegin(GL_POLYGON);
    glColor3ub(230, 230, 230);
    glVertex2f(625, 450);
    glVertex2f(775, 450);
    glColor3ub(240, 240, 240);
    glVertex2f(1400, 800);
    glVertex2f(0, 800);
    glEnd();

    // Ceiling Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(625, 450);
    glVertex2f(775, 450);
    glVertex2f(1400, 800);
    glVertex2f(0, 800);
    glEnd();
}

void PUC_drawLeftWall()
{
    // Left Wall
    glBegin(GL_POLYGON);
    glColor3ub(240, 240, 240);
    glVertex2f(0, 75);
    glVertex2f(625, 200);
    glVertex2f(625, 450);
    glVertex2f(0, 800);
    glEnd();

    // Left Wall Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(0, 75);
    glVertex2f(625, 200);
    glVertex2f(625, 450);
    glVertex2f(0, 800);
    glEnd();

    // Left Wall Bottom Strip
    glBegin(GL_POLYGON);
    glColor3ub(0, 130, 255);
    glVertex2f(0, 75);
    glVertex2f(625, 200);
    glVertex2f(625, 207.81);
    glVertex2f(0, 100);
    glEnd();

    // Left Wall Bottom Strip Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(0, 75);
    glVertex2f(625, 200);
    glVertex2f(625, 207.81);
    glVertex2f(0, 100);
    glEnd();
}

void PUC_drawRightWall()
{
    // Right Wall
    glBegin(GL_POLYGON);
    glColor3ub(240, 240, 240);
    glVertex2f(775, 200);
    glVertex2f(1400, 75);
    glVertex2f(1400, 800);
    glVertex2f(775, 450);
    glEnd();

    // Right Wall Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(775, 200);
    glVertex2f(1400, 75);
    glVertex2f(1400, 800);
    glVertex2f(775, 450);
    glEnd();

    // Right Wall Bottom Strip
    glBegin(GL_POLYGON);
    glColor3ub(0, 130, 255);
    glVertex2f(1400, 75);
    glVertex2f(1400, 100);
    glVertex2f(775, 207.81);
    glVertex2f(775, 200);
    glEnd();

    // Right Wall Bottom Strip Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(1400, 75);
    glVertex2f(1400, 100);
    glVertex2f(775, 207.81);
    glVertex2f(775, 200);
    glEnd();
}

void PUC_drawLeftDoors()
{
    // First Door
    glBegin(GL_POLYGON);
    glColor3ub(210, 210, 210);
    glVertex2f(150, 104);
    glVertex2f(350, 144);
    glVertex2f(350, 481);
    glVertex2f(150, 548);
    glEnd();

    // First Door Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(150, 104);
    glVertex2f(350, 144);
    glVertex2f(350, 481);
    glVertex2f(150, 548);
    glEnd();

    // First Wooden Door
    glBegin(GL_POLYGON);
    glColor3ub(63, 36, 19);
    glVertex2f(150, 104);
    glVertex2f(335, 158);
    glVertex2f(335, 472);
    glVertex2f(150, 548);
    glEnd();

    // First Wooden Door Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(150, 104);
    glVertex2f(335, 158);
    glVertex2f(335, 472);
    glVertex2f(150, 548);
    glEnd();

    // PCMB
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(140, 520);
    glVertex2f(140, 490);
    glVertex2f(250, 490);
    glVertex2f(250, 520);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(140, 520);
    glVertex2f(140, 490);
    glVertex2f(250, 490);
    glVertex2f(250, 520);
    glEnd();

    drawCircle(138, 510, 100, 100, 100, 1, 1, 3);
    drawCircle(142, 510, 100, 100, 100, 1, 1, 3);

    drawCircle(138, 499, 100, 100, 100, 1, 1, 3);
    drawCircle(142, 499, 100, 100, 100, 1, 1, 3);

    print(" UBB",
          0, 0, 0, 1, 160, 500, .1, .1, 2);

    // Door Knob
    drawCircle(320, 300,
               223, 189, 31, // Goldish Yellow
               1, 1,
               5);

    // Second Door
    glBegin(GL_POLYGON);
    glColor3ub(210, 210, 210);
    glVertex2f(450, 164);
    glVertex2f(550, 184);
    glVertex2f(550, 413);
    glVertex2f(450, 447);
    glEnd();

    // Second Door Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(450, 164);
    glVertex2f(550, 184);
    glVertex2f(550, 413);
    glVertex2f(450, 447);
    glEnd();

    // Second Wooden Door
    glBegin(GL_POLYGON);
    glColor3ub(63, 36, 19);
    glVertex2f(450, 164);
    glVertex2f(540, 194);
    glVertex2f(540, 403);
    glVertex2f(450, 447);
    glEnd();

    // Second Wooden Door Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(450, 164);
    glVertex2f(540, 194);
    glVertex2f(540, 403);
    glVertex2f(450, 447);
    glEnd();

    // CEBA
    glPushMatrix();

    glTranslatef(325, 10, 0);
    glScalef(.8, .8, 1);

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(140, 520);
    glVertex2f(140, 490);
    glVertex2f(250, 490);
    glVertex2f(250, 520);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(140, 520);
    glVertex2f(140, 490);
    glVertex2f(250, 490);
    glVertex2f(250, 520);
    glEnd();

    drawCircle(138, 510, 100, 100, 100, 1, 1, 3);
    drawCircle(142, 510, 100, 100, 100, 1, 1, 3);

    drawCircle(138, 499, 100, 100, 100, 1, 1, 3);
    drawCircle(142, 499, 100, 100, 100, 1, 1, 3);

    print("FETINA",
          0, 0, 0, 1, 160, 500, .1, .1, 2);

    glPopMatrix();

    // Door Knob
    drawCircle(530, 300,
               223, 189, 31, // Goldish Yellow
               1, 1,
               3);
}

void PUC_drawRightDoors()
{
    // First Door
    glBegin(GL_POLYGON);
    glColor3ub(210, 210, 210);
    glVertex2f(1049, 144);
    glVertex2f(1250, 104);
    glVertex2f(1250, 548);
    glVertex2f(1049, 481);
    glEnd();

    // First Door Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(1049, 144);
    glVertex2f(1250, 104);
    glVertex2f(1250, 548);
    glVertex2f(1049, 481);
    glEnd();

    // First Wooden Door
    glBegin(GL_POLYGON);
    glColor3ub(63, 36, 19);
    glVertex2f(1250, 104);
    glVertex2f(1065, 158);
    glVertex2f(1065, 472);
    glVertex2f(1250, 548);
    glEnd();

    // First Wooden Door Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(1250, 104);
    glVertex2f(1065, 158);
    glVertex2f(1065, 472);
    glVertex2f(1250, 548);
    glEnd();

    // PCMC
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(1260, 520);
    glVertex2f(1260, 490);
    glVertex2f(1150, 490);
    glVertex2f(1150, 520);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(1260, 520);
    glVertex2f(1260, 490);
    glVertex2f(1150, 490);
    glVertex2f(1150, 520);
    glEnd();

    drawCircle(1258, 510, 100, 100, 100, 1, 1, 3);
    drawCircle(1262, 510, 100, 100, 100, 1, 1, 3);

    drawCircle(1258, 499, 100, 100, 100, 1, 1, 3);
    drawCircle(1262, 499, 100, 100, 100, 1, 1, 3);

    print("OMEGA",
          0, 0, 0, 1, 1165, 500, .1, .1, 2);

    // Door Knob
    drawCircle(1080, 300,
               223, 189, 31, // Goldish Yellow
               1, 1,
               5);

    // Second Door
    glBegin(GL_POLYGON);
    glColor3ub(210, 210, 210);
    glVertex2f(850, 184);
    glVertex2f(950, 164);
    glVertex2f(950, 447);
    glVertex2f(850, 413);
    glEnd();

    // Second Door Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(850, 184);
    glVertex2f(950, 164);
    glVertex2f(950, 447);
    glVertex2f(850, 413);
    glEnd();

    // Second Wooden Door
    glBegin(GL_POLYGON);
    glColor3ub(63, 36, 19);
    glVertex2f(950, 164);
    glVertex2f(860, 194);
    glVertex2f(860, 403);
    glVertex2f(950, 447);
    glEnd();

    // Second Wooden Door Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(950, 164);
    glVertex2f(860, 194);
    glVertex2f(860, 403);
    glVertex2f(950, 447);
    glEnd();

    // PCME
    glPushMatrix();

    glTranslatef(-45, 10, 0);
    glScalef(.8, .8, 1);

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(1260, 520);
    glVertex2f(1260, 490);
    glVertex2f(1150, 490);
    glVertex2f(1150, 520);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(1260, 520);
    glVertex2f(1260, 490);
    glVertex2f(1150, 490);
    glVertex2f(1150, 520);
    glEnd();

    drawCircle(1258, 510, 100, 100, 100, 1, 1, 3);
    drawCircle(1262, 510, 100, 100, 100, 1, 1, 3);

    drawCircle(1258, 499, 100, 100, 100, 1, 1, 3);
    drawCircle(1262, 499, 100, 100, 100, 1, 1, 3);

    print("UDHAS",
          0, 0, 0, 1, 1165, 500, .1, .1, 2);

    glPopMatrix();

    // Door Knob
    drawCircle(870, 300,
               223, 189, 31, // Goldish Yellow
               1, 1,
               3);
}

void PUC_drawBoard()
{
    // Board Hanging Line
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(550, 800);
    glVertex2f(550, 750);
    glVertex2f(850, 800);
    glVertex2f(850, 750);
    glEnd();
    glLineWidth(1);

    // Board Border
    glBegin(GL_POLYGON);
    glColor3ub(20, 20, 20);
    glVertex2f(450, 750);
    glVertex2f(450, 600);
    glVertex2f(950, 600);
    glVertex2f(950, 750);
    glEnd();

    // Board
    glBegin(GL_POLYGON);
    glColor3ub(0, 131, 255);
    glVertex2f(452, 748);
    glColor3ub(0, 104, 204);
    glVertex2f(452, 602);
    glVertex2f(948, 602);
    glColor3ub(0, 131, 255);
    glVertex2f(948, 748);
    glEnd();

    print("   COACHING",
          1, 1, 1, 1, 560, 690, .2, .2, 4);

    print("       CENTRES",
          1, 1, 1, 1, 540, 660, .15, .15, 2);

    print("FOR  UNIVERSITY",
          1, 1, 1, 1, 610, 630, .12, .12, 1);
}

// Pre University College
void PUC()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    PUC_drawFloor();
    PUC_drawCenterWall();
    PUC_drawCeiling();

    PUC_drawLeftWall();
    PUC_drawRightWall();

    PUC_drawLeftDoors();
    PUC_drawRightDoors();
    PUC_drawBoard();

    // Red Boy
    drawSchoolBoy(trans_x_sb1, trans_y_sb1,
                  1.4, 1.4,
                  255, 0, 0);

    // Green Boy
    drawSchoolBoy(trans_x_sb2, trans_y_sb2,
                  -1.4, 1.4,
                  0, 255, 0);

    print("Some students choose UDHAS, some choose UBB, and some...",
          1, 1, 1, puc_subtitle_1_fade, 300, 30, .14, .14, 1);
}
