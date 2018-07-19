#include "declarations.h"
#include "functions.h"
#include "sceneFunctions.h"

// Workplace Title Screen
void workplaceTitleScreen()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    // Story Title
    print("CHAPTER 6",
          1, 1, 1, wp_chap_fade, 300, 500 - trans_x_chap6, .2, .2, 2);
    print("Workplace",
          1, 1, 1, wp_title_fade, 400 - trans_x_title6, 350, .3, .3, 2);
}


void WP_drawFloor()
{
    glBegin(GL_POLYGON);
    glColor3ub(80, 80, 80);
    glVertex2f(0, 75);
    glVertex2f(1400, 75);
    glVertex2f(1400, 150);
    glVertex2f(50, 150);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(0, 75);
    glVertex2f(1400, 75);
    glVertex2f(1400, 150);
    glVertex2f(50, 150);
    glEnd();
}

void WP_drawSideWall()
{
    glBegin(GL_POLYGON);
    glColor3ub(180, 180, 180);
    glVertex2f(0, 75);
    glVertex2f(50, 150);
    glVertex2f(50, 800);
    glVertex2f(0, 800);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(0, 75);
    glVertex2f(50, 150);
    glVertex2f(50, 800);
    glVertex2f(0, 800);
    glEnd();
}

void WP_drawWall()
{
    glBegin(GL_POLYGON);
    glColor3ub(200, 200, 200);
    glVertex2f(50, 150);
    glVertex2f(1400, 150);
    glVertex2f(1400, 800);
    glVertex2f(50, 800);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(50, 150);
    glVertex2f(1400, 150);
    glVertex2f(1400, 800);
    glVertex2f(50, 800);
    glEnd();
}

void WP_drawTable()
{
    // Table - Front Face
    glBegin(GL_POLYGON);
    glColor3ub(96, 48, 13);
    glVertex2f(100, 100);
    glVertex2f(500, 100);
    glVertex2f(500, 250);
    glVertex2f(100, 250);
    glEnd();

    // Table - Top Face
    glBegin(GL_POLYGON);
    glColor3ub(81, 39, 8);
    glVertex2f(100, 250);
    glVertex2f(500, 250);
    glVertex2f(525, 275);
    glVertex2f(125, 275);
    glEnd();

    // Table - Side Face
    glBegin(GL_POLYGON);
    glColor3ub(58, 28, 6);
    glVertex2f(500, 100);
    glVertex2f(525, 150);
    glVertex2f(525, 275);
    glVertex2f(500, 250);
    glEnd();
}

void WP_drawTechie()
{
    drawCircle(300, 380,
               203, 166, 108,
               1, 1.2,
               30);

    drawSemiCircle(300, 400, 1, .6,
                   20, 20, 20,
                   32, -90, 90);
    drawSemiCircle(320, 390, .6, .6,
                   20, 20, 20,
                   35, 0, 180);

    // Left Eye
    drawCircle(298, 383,
               255, 255, 255,
               1, 1,
               5);
    drawCircle(297, 382,
               20, 20, 20,
               1, 1,
               2);

    // Right Eye
    drawCircle(278, 383,
               255, 255, 255,
               1, 1,
               5);
    drawCircle(277, 382,
               20, 20, 20,
               1, 1,
               2);

    // Body
    drawCircle(300, 275,
               200, 40, 40,
               .6, .8,
               80);
}

void WP_drawComputer()
{
    // Monitor
    glBegin(GL_POLYGON);
    glColor3ub(80, 80, 80);
    glVertex2f(210, 280);
    glVertex2f(400, 280);
    glVertex2f(400, 380);
    glVertex2f(210, 380);
    glEnd();

    // Monitor Logo
    drawCircle(300, 325,
               40, 40, 40,
               1, 1,
               10);

    // Monitor Stand
    glBegin(GL_POLYGON);
    glColor3ub(20, 20, 20);
    glVertex2f(290, 280);
    glVertex2f(280, 260);
    glVertex2f(320, 260);
    glVertex2f(310, 280);
    glEnd();

    // Mouse
    drawSemiCircle(240, 262, 1, 1,
                   150, 150, 150,
                   10, -90, 91);
}

void WP_drawAC()
{
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(300, 675);
    glVertex2f(700, 675);
    glVertex2f(700, 750);
    glVertex2f(300, 750);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(240, 240, 240);
    glVertex2f(300, 675);
    glVertex2f(310, 660);
    glVertex2f(710, 660);
    glVertex2f(700, 675);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(230, 230, 230);
    glVertex2f(700, 750);
    glVertex2f(710, 720);
    glVertex2f(710, 660);
    glVertex2f(700, 675);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(150, 150, 150);
    glVertex2f(320, 666);
    glVertex2f(690, 666);
    glEnd();
    glLineWidth(1);
}

bool server_on;
bool light_a = true, light_b, light_c, light_d;

void WP_drawServerLight(GLfloat tx, GLfloat ty,
                        GLfloat light_r, GLfloat light_g, GLfloat light_b,
                        bool light_on)
{
    glPushMatrix();
    glTranslatef(tx, ty, 0);

    glBegin(GL_POLYGON);
    if (light_on)
        glColor3ub(light_r, light_g, light_b);
    else
        glColor3ub(30, 30, 30);
    glVertex2f(0, 0);
    glVertex2f(6, 0);
    glVertex2f(6, 6);
    glVertex2f(0, 6);
    glEnd();

    glPopMatrix();
}

void WP_drawServer(GLfloat tx, GLfloat ty,
                   bool server_on)
{
    glPushMatrix();
    glTranslatef(tx, ty, 0);

    // Server
    glBegin(GL_POLYGON);
    glColor3ub(30, 30, 30);
    glVertex2f(960, 460);
    glVertex2f(1200, 460);
    glVertex2f(1200, 530);
    glVertex2f(960, 530);
    glEnd();

    if (server_on)
    {
        drawCircle(990, 492,
                   255, 255, 0,
                   1, 1, 3);
    }

    WP_drawServerLight(1100, 492, 246, 233, 192, light_a);
    WP_drawServerLight(1125, 492, 243, 201, 32, light_b);
    WP_drawServerLight(1150, 492, 255, 167, 50, light_c);
    WP_drawServerLight(1175, 492, 21, 123, 193, light_d);

    glPopMatrix();
}

void WP_drawServerInnerBox(GLfloat tx, GLfloat ty)
{
    glPushMatrix();
    glTranslatef(tx, ty, 0);

    // Server Inner Box Back Wall
    glBegin(GL_POLYGON);
    glColor3ub(200, 200, 200);
    glVertex2f(920, 450);
    glVertex2f(1400, 450);
    glVertex2f(1400, 580);
    glVertex2f(920, 580);
    glEnd();

    // Server Inner Box Side Wall
    glBegin(GL_POLYGON);
    glColor3ub(180, 180, 180);
    glVertex2f(920, 450);
    glVertex2f(945, 475);
    glVertex2f(945, 580);
    glVertex2f(920, 580);
    glEnd();

    // Server Inner Box Floor
    glBegin(GL_POLYGON);
    glColor3ub(160, 160, 160);
    glVertex2f(920, 450);
    glVertex2f(1400,450);
    glVertex2f(1400, 475);
    glVertex2f(945, 475);
    glEnd();

    WP_drawServer(0, 0, !server_on);
    WP_drawServer(280, 0, server_on);

    glPopMatrix();
}

void WP_drawServerBox()
{
    // Server Box
    glBegin(GL_POLYGON);
    glColor3ub(60, 60, 60);
    glVertex2f(900, 100);
    glVertex2f(1400, 100);
    glVertex2f(1400, 600);
    glVertex2f(900, 600);
    glEnd();

    // Server Box Top
    glBegin(GL_POLYGON);
    glColor3ub(30, 30, 30);
    glVertex2f(900, 600);
    glVertex2f(1400, 600);
    glVertex2f(1400, 610);
    glVertex2f(925, 610);
    glEnd();

    WP_drawServerInnerBox(0, 0);
    WP_drawServerInnerBox(0, -165);
    WP_drawServerInnerBox(0, -330);
}

bool wp_tb_s1_done, wp_tb_s2_done, wp_tb_s3_done, wp_tb_big_done;
GLfloat wp_tb_s1, wp_tb_s2, wp_tb_s3, wp_tb_big,
        wp_tb_text;

void WP_drawThoughtBubble()
{
    // Thought Bubble Leads
    drawCircle(365, 410, 240, 240, 240, 1, 1, wp_tb_s1);
    drawCircle(400, 430, 240, 240, 240, 1, 1, wp_tb_s2);
    drawCircle(435, 450, 240, 240, 240, 1, 1, wp_tb_s3);

    // Thought Bubble
    drawCircle(500, 480, 240, 240, 240, 1, 1, wp_tb_big);
    drawCircle(540, 500, 240, 240, 240, 1, 1, wp_tb_big);
    drawCircle(580, 500, 240, 240, 240, 1, 1, wp_tb_big);
    drawCircle(620, 500, 240, 240, 240, 1, 1, wp_tb_big);
    drawCircle(660, 500, 240, 240, 240, 1, 1, wp_tb_big);
    drawCircle(700, 480, 240, 240, 240, 1, 1, wp_tb_big);
    drawCircle(540, 460, 240, 240, 240, 1, 1, wp_tb_big);
    drawCircle(580, 460, 240, 240, 240, 1, 1, wp_tb_big);
    drawCircle(620, 460, 240, 240, 240, 1, 1, wp_tb_big);
    drawCircle(660, 460, 240, 240, 240, 1, 1, wp_tb_big);

    // Text inside Thought Bubble
    print("Is this what I want to be doing",
          0, 0, 0, wp_tb_text, 480, 480, .075, .075, 1);

    print("for the rest of my life?",
          0, 0, 0, wp_tb_text, 505, 460, .075, .075, 1);
}

// Workplace
void workplace()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    WP_drawFloor();
    WP_drawSideWall();
    WP_drawWall();

    WP_drawTechie();
    WP_drawTable();
    WP_drawComputer();

    WP_drawAC();
    WP_drawServerBox();

    WP_drawThoughtBubble();

    print("Eventually, most engineers irrespective of his/her branch end up in front of the screen...",
          1, 1, 1, wp_subtitle_1_fade, 35, 30, .14, .14, 1);
}
