#include "declarations.h"
#include "functions.h"
#include "sceneFunctions.h"

// Engineering College Title Screen
void engineeringCollegeTitleScreen()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    // Story Title
    print("CHAPTER 5",
          1, 1, 1, eng_chap_fade, 300 + trans_x_chap5, 400, .2, .2, 2);
    print("Engineering University",
          1, 1, 1, eng_title_fade, 400 - trans_x_title5, 350, .3, .3, 2);
}

void drawGraduatedBoy(GLfloat tx, GLfloat ty,
                      GLfloat sx, GLfloat sy,
                      GLfloat shirt_r, GLfloat shirt_g, GLfloat shirt_b)
{
    glPushMatrix();

    glScalef(sx, sy, 0);
    glTranslatef(tx, ty, 0);

    // Shoes
    drawSemiCircle(1160, 120,
                   1, 1,
                   255, 255, 255,
                   10,
                   -90, 91);

    // Shoe Extension
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(1160, 120);
    glVertex2f(1170, 120);
    glVertex2f(1170, 135);
    glVertex2f(1160, 135);
    glEnd();

    // Pants
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 200);
    glVertex2f(1158, 135);
    glVertex2f(1172, 135);
    glVertex2f(1170, 190);
    glVertex2f(1160, 190);
    glEnd();

    // Shirt
    glBegin(GL_POLYGON);
    glColor3ub(shirt_r, shirt_g, shirt_b);
    glVertex2f(1155, 190);
    glVertex2f(1170, 190);
    glVertex2f(1170, 260);
    glVertex2f(1160, 260);
    glEnd();

    // Bag
    glBegin(GL_POLYGON);
    glColor3ub(156, 86, 47);
    glVertex2f(1170, 250);
    glVertex2f(1180, 245);
    glVertex2f(1185, 200);
    glVertex2f(1170, 195);
    glEnd();

    // Head
    drawCircle(1164, 273,
               232, 190, 123,
               1, 1.4,
               12);

    // Hair
    drawSemiCircle(1167, 277,
                   1, 1,
                   0, 0, 0,
                   14,
                   -80, 180);

    // Graduation Cap
    glBegin(GL_POLYGON);
    glColor3ub(50, 50, 50); // Barely Black
    glVertex2f(1144, 282);
    glVertex2f(1190, 268);
    glVertex2f(1189, 285);
    glVertex2f(1165, 297);
    glEnd();

    // Graduation Cap Thread
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3ub(240, 240, 40);
    glVertex2f(1173, 281);
    glVertex2f(1186, 272);
    glVertex2f(1190, 258);
    glEnd();
    glLineWidth(1);
    drawCircle(1190, 258,
               240, 240, 40,
               1, 1.2,
               3);

    // Nose
    glBegin(GL_TRIANGLES);
    glColor3ub(232, 190, 123);
    glVertex2f(1155, 270);
    glVertex2f(1152, 260);
    glVertex2f(1157, 262);
    glEnd();

    // Eye
    glPointSize(2);
    glBegin(GL_POINTS);
    glColor3ub(0, 0, 0);
    glVertex2f(1156, 270);
    glEnd();
    glPointSize(1);

    // Lips
    glPointSize(1);
    glBegin(GL_POINTS);
    glColor3ub(0, 0, 0);
    glVertex2f(1158, 256);
    glVertex2f(1159, 257);
    glVertex2f(1160, 258);
    glEnd();
    glPointSize(1);

    glPopMatrix();
}

void EC_drawBackground()
{
    // Background
    glBegin(GL_POLYGON);
    glColor3ub(12, 172, 232); // Sky Blue
    glVertex2f(0, 800);
    glVertex2f(1400, 800);
    glVertex2f(1400, 400);
    glVertex2f(0, 400);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(12, 172, 232); // Sky Blue
    glVertex2f(0, 400);
    glVertex2f(1400, 400);
    glColor3ub(82, 163, 42); // Green Grass
    glVertex2f(1400, 125);
    glVertex2f(0, 125);
    glEnd();
}

void EC_drawRoad()
{
    glBegin(GL_POLYGON);
    glColor3ub(40, 40, 40);
    glVertex2f(0, 75);
    glVertex2f(1400, 75);
    glVertex2f(1400, 125);
    glVertex2f(0, 125);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0, 100);
    glVertex2f(100, 100);

    glVertex2f(120, 100);
    glVertex2f(220, 100);

    glVertex2f(240, 100);
    glVertex2f(340, 100);

    glVertex2f(360, 100);
    glVertex2f(460, 100);

    glVertex2f(480, 100);
    glVertex2f(580, 100);

    glVertex2f(600, 100);
    glVertex2f(700, 100);

    glVertex2f(720, 100);
    glVertex2f(820, 100);

    glVertex2f(840, 100);
    glVertex2f(940, 100);

    glVertex2f(960, 100);
    glVertex2f(1060, 100);

    glVertex2f(1080, 100);
    glVertex2f(1180, 100);

    glVertex2f(1200, 100);
    glVertex2f(1300, 100);

    glVertex2f(1320, 100);
    glVertex2f(1420, 100);

    glEnd();
    glLineWidth(1);
}

void EC_drawFrontFacingBuilding()
{
    // Front Facing Building
    glBegin(GL_POLYGON);
    glColor3ub(30, 120, 182);
    glVertex2f(550, 125);
    glColor3ub(4, 36, 86);
    glVertex2f(850, 125);
    glColor3ub(0, 22, 52);
    glVertex2f(850, 650);
    glColor3ub(2, 36, 80);
    glVertex2f(550, 650);
    glEnd();

    // Front Facing Building Mesh
    glBegin(GL_LINES);
    glColor3ub(0, 30, 60);

    // Vertical Lines - 4
    glVertex2f(550, 650);
    glVertex2f(550, 125);

    glVertex2f(625, 650);
    glVertex2f(625, 125);

    glVertex2f(700, 650);
    glVertex2f(700, 125);

    glVertex2f(775, 650);
    glVertex2f(775, 125);

    glVertex2f(850, 650);
    glVertex2f(850, 125);

    // Horizontal Lines - 10
    glVertex2f(550, 125);
    glVertex2f(850, 125);

    glVertex2f(550, 177.5);
    glVertex2f(850, 177.5);

    glVertex2f(550, 230);
    glVertex2f(850, 230);

    glVertex2f(550, 282.5);
    glVertex2f(850, 282.5);

    glVertex2f(550, 335);
    glVertex2f(850, 335);

    glVertex2f(550, 387.5);
    glVertex2f(850, 387.5);

    glVertex2f(550, 440);
    glVertex2f(850, 440);

    glVertex2f(550, 492.5);
    glVertex2f(850, 492.5);

    glVertex2f(550, 545);
    glVertex2f(850, 545);

    glVertex2f(550, 598);
    glVertex2f(850, 598);

    glVertex2f(550, 650);
    glVertex2f(850, 650);
    glEnd();

    // Door
    glBegin(GL_POLYGON);
    glColor3ub(23, 99, 152);
    glVertex2f(626, 125);
    glColor3ub(11, 57, 110);
    glVertex2f(774, 125);
    glColor3ub(8, 49, 92);
    glVertex2f(774, 282);
    glColor3ub(21, 99, 144);
    glVertex2f(626, 282);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 30, 60);
    glVertex2f(700, 282);
    glVertex2f(700, 125);
    glEnd();

    drawCircle(690, 206, 240, 240, 240, 1, 1, 3);
    drawCircle(690, 202, 240, 240, 240, 1, 1, 3);
    drawCircle(690, 198, 240, 240, 240, 1, 1, 3);

    drawCircle(710, 206, 240, 240, 240, 1, 1, 3);
    drawCircle(710, 202, 240, 240, 240, 1, 1, 3);
    drawCircle(710, 198, 240, 240, 240, 1, 1, 3);
}

void EC_drawLeftWing()
{
    // Left Wing
    glBegin(GL_POLYGON);
    glColor3ub(0, 30, 60);
    glVertex2f(500, 125);
    glVertex2f(550, 125);
    glVertex2f(550, 598);
    glVertex2f(500, 598);
    glEnd();

    // Left Building
    glBegin(GL_POLYGON);
    glColor3ub(30, 120, 182);
    glVertex2f(200, 184);
    glColor3ub(4, 36, 86);
    glVertex2f(500, 125);
    glColor3ub(0, 22, 52);
    glVertex2f(500, 598);
    glColor3ub(2, 36, 80);
    glVertex2f(200, 539);
    glEnd();

    // Left Building
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 30, 60);
    glVertex2f(200, 184);
    glVertex2f(500, 125);
    glVertex2f(500, 598);
    glVertex2f(200, 539);
    glEnd();

    // Windows Edges
    glBegin(GL_LINES);
    glColor3ub(0, 30, 60);
    glVertex2f(500, 125);
    glVertex2f(500, 598);

    glVertex2f(400, 144);
    glVertex2f(400, 576);

    glVertex2f(300, 164);
    glVertex2f(300, 556);

    glVertex2f(200, 184);
    glVertex2f(200, 539);
    glEnd();
}

void EC_drawRightWing()
{
    // Right Wing
    glBegin(GL_POLYGON);
    glColor3ub(0, 30, 60);
    glVertex2f(850, 125);
    glVertex2f(900, 125);
    glVertex2f(900, 598);
    glVertex2f(850, 598);
    glEnd();

    // Right Building
    glBegin(GL_POLYGON);
    glColor3ub(4, 36, 86);
    glVertex2f(900, 125);
    glColor3ub(30, 120, 182);
    glVertex2f(1200, 184);
    glColor3ub(2, 36, 80);
    glVertex2f(1200, 539);
    glColor3ub(0, 22, 52);
    glVertex2f(900, 598);
    glEnd();

    // Right Building
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 30, 60);
    glVertex2f(900, 125);
    glVertex2f(1200, 184);
    glVertex2f(1200, 539);
    glVertex2f(900, 598);
    glEnd();

    // Windows Edges
    glBegin(GL_LINES);
    glColor3ub(0, 30, 60);
    glVertex2f(900, 125);
    glVertex2f(900, 598);

    glVertex2f(1000, 144);
    glVertex2f(1000, 576);

    glVertex2f(1100, 164);
    glVertex2f(1100, 556);

    glVertex2f(1200, 184);
    glVertex2f(1200, 539);
    glEnd();
}

void EC_drawTrees()
{
    // Left Trees
    drawTree(430, 130, .5, .5);
    drawTree(360, 140, .48, .48);
    drawTree(290, 150, .46, .46);
    drawTree(220, 160, .44, .44);

    // Right Trees
    drawTree(940, 130, .5, .5);
    drawTree(1010, 140, .48, .48);
    drawTree(1080, 150, .46, .46);
    drawTree(1150, 160, .44, .44);
}

void EC_drawBoys()
{
    // Red Boy
    drawSchoolBoy(trans_x_ec_sb1, trans_y_ec_sb,
                  .75, .75,
                  255, 0, 0);

    // Green Boy
    drawSchoolBoy(trans_x_ec_sb2, trans_y_ec_sb,
                  -.75, .75,
                  0, 255, 0);

    // Red Graduate
    drawGraduatedBoy(trans_x_ec_gb, trans_y_ec_gb,
                     .75, .75,
                     255, 0, 0);

    // Green Graduate
    drawGraduatedBoy(trans_x_ec_gb - 110, trans_y_ec_gb,
                     .75, .75,
                     0, 255, 0);
}

void EC_drawEngineeringCollege()
{
    EC_drawFrontFacingBuilding();
    EC_drawLeftWing();
    EC_drawRightWing();
}

void EC_drawBoard()
{
    glBegin(GL_POLYGON);
    glColor3ub(0, 30, 60);
    glVertex2f(430, 660);
    glVertex2f(948, 660);
    glVertex2f(948, 760);
    glVertex2f(430, 760);
    glEnd();

    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(625, 650);
    glVertex2f(625, 670);
    glEnd();
    glLineWidth(1);

    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(775, 650);
    glVertex2f(775, 670);
    glEnd();
    glLineWidth(1);

    glBegin(GL_POLYGON);
    glColor3ub(2, 36, 80);
    glVertex2f(445, 665);
    glVertex2f(935, 665);
    glColor3ub(0, 22, 52);
    glVertex2f(935, 755);
    glVertex2f(445, 755);
    glEnd();

    print("American International University-Bangladesh\n\n",
          1, 1, 1, 1,
          455, 715,
          .1, .1,
          1);

    print("   Dhaka,Bangladesh",
          1, 1, 1, 1,
          590, 695,
          .08, .08,
          1);
}

// Engineering College
void engineeringCollege()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    EC_drawBackground();
    EC_drawRoad();

    EC_drawEngineeringCollege();

    EC_drawTrees();
    EC_drawBoys();

    EC_drawBoard();

    print("Some students end up in Engineering, irrespective of what path they took in the past...",
          1, 1, 1, ec_subtitle_1_fade, 60, 30, .14, .14, 1);
}
