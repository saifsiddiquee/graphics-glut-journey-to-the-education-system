#include "declarations.h"
#include "functions.h"


void kindergartenTitleScreen()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    // Story Title
    print("CHAPTER 1",
          1, 1, 1, kg_chap_fade, 300 + trans_x_chap1, 400, .2, .2, 2);
    print("Kindergarten",
          1, 1, 1, kg_title_fade, 300 + trans_x_title1, 350, .3, .3, 2);
}

// Function to Draw Ceiling
void KG_drawCeiling()
{
    // Ceiling
    glBegin(GL_POLYGON);
    glColor3ub(166, 148, 124); // Dark Brown
    glVertex2f(0, 800);
    glColor3ub(251, 242, 233); // Light Brown
    glVertex2f(200, 700);
    glColor3ub(251, 242, 233); // Light Brown
    glVertex2f(1400, 700);
    glColor3ub(166, 148, 124); // Dark Brown
    glVertex2f(1400, 800);
    glEnd();

    // Border for Ceiling
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0); // Black
    glVertex2f(0, 800);
    glVertex2f(200, 700);
    glVertex2f(1400, 700);
    glVertex2f(1400, 800);
    glEnd();
    glLineWidth(1);
}

// Function to Draw Side Wall
void KG_drawSideWall()
{
    // Side Wall
    glBegin(GL_POLYGON);
    glColor3ub(166, 148, 124); // Dark Brown
    glVertex2f(0, 800);
    glColor3ub(251, 242, 233); // Light Brown
    glVertex2f(200, 700);
    glColor3ub(251, 242, 233); // Light Brown
    glVertex2f(200, 175);
    glColor3ub(166, 148, 124); // Dark Brown
    glVertex2f(0, 75);
    glEnd();

    // Border for Side Wall
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0); // Black
    glVertex2f(0, 800);
    glVertex2f(200, 700);
    glVertex2f(200, 175);
    glVertex2f(0, 75);
    glEnd();
    glLineWidth(1);
}

// Function to Draw Center Wall
void KG_drawCenterWall()
{
    // Center Wall
    glBegin(GL_POLYGON);
    glColor3ub(251, 242, 233); // Light Brown
    glVertex2f(200, 700);
    glColor3ub(251, 242, 233); // Light Brown
    glVertex2f(1400, 700);
    glColor3ub(166, 148, 124); // Dark Brown
    glVertex2f(1400, 175);
    glColor3ub(166, 148, 124); // Dark Brown
    glVertex2f(200, 175);
    glEnd();

    // Border for Center Wall
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0); // Black
    glVertex2f(200, 700);
    glVertex2f(1400, 700);
    glVertex2f(1400, 175);
    glVertex2f(200, 175);
    glEnd();
    glLineWidth(1);
}

// Function to Draw Floor
void KG_drawFloor()
{
    // Floor
    glBegin(GL_POLYGON);
    glColor3ub(166, 148, 124); // Dark Brown
    glVertex2f(200, 175);
    glVertex2f(1400, 175);
    glVertex2f(1400, 75);
    glVertex2f(0, 75);
    glEnd();

    // Border for Floor
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0); // Black
    glVertex2f(200, 175);
    glVertex2f(1400, 175);
    glVertex2f(1400, 75);
    glVertex2f(0, 75);
    glEnd();
    glLineWidth(1);
}

// Function to Draw Outside Background
void KG_drawOutside()
{
    // Outside
    glBegin(GL_POLYGON);
    glColor3ub(12, 172, 232); // Sky Blue
    glVertex2f(0, 600);
    glVertex2f(180, 540);
    glColor3ub(82, 163, 42); // Green Grass
    glVertex2f(180, 165);
    glVertex2f(0, 75);
    glEnd();
}

// Function to Draw Door
void KG_drawDoor()
{
    // Door Hinges
    glLineWidth(6);
    glBegin(GL_LINE_LOOP);
    glColor3ub(63, 36, 19); // Chocolate Brown
    glVertex2f(0, 600);
    glVertex2f(180, 540);
    glVertex2f(180, 165);
    glVertex2f(0, 75);
    glEnd();
    glLineWidth(1);

    // Door
    glBegin(GL_POLYGON);
    glColor3ub(63, 36, 19); // Chocolate Brown
    glVertex2f(180, 540);
    glVertex2f(30, 520);
    glVertex2f(30, 180);
    glVertex2f(180, 165);
    glEnd();

    // Door Knob
    drawCircle(45, 350,
               223, 189, 31, // Goldish Yellow
               1, 1,
               5);
}

// Function to Draw Kid's Head
void KG_drawKidsHead(GLfloat tx, GLfloat ty)
{
    glPushMatrix();

    glTranslatef(tx, ty, 0);

    // Kid's Face
    drawCircle(480, 110,
               232, 190, 123, // Lighter Skin
               1, 1,
               25);

    int hair_line;

    // Kid's Hair Strands
    hair_line = 400;
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(20, 20, 20); // Almost Black
    glVertex2f(hair_line + 60, 138);
    glVertex2f(hair_line + 65, 128);

    glVertex2f(hair_line + 70, 140);
    glVertex2f(hair_line + 75, 130);

    glVertex2f(hair_line + 80, 140);
    glVertex2f(hair_line + 85, 130);

    glVertex2f(hair_line + 90, 138);
    glVertex2f(hair_line + 95, 128);
    glEnd();
    glLineWidth(1);

    glPopMatrix();
}

// Function to Draw Blackboard
void KG_drawBlackboard()
{
    // Blackboard
    glBegin(GL_POLYGON);
    glColor3ub(20, 20, 20); // Almost Black
    glVertex2f(450, 540);
    glVertex2f(1100, 540);
    glVertex2f(1100, 300);
    glVertex2f(450, 300);
    glEnd();

    // Blackboard Border
    glLineWidth(10);
    glBegin(GL_LINE_LOOP);
    glColor3ub(63, 36, 19); // Chocolate Brown
    glVertex2f(450, 540);
    glVertex2f(1100, 540);
    glVertex2f(1100, 300);
    glVertex2f(450, 300);
    glEnd();
    glLineWidth(1);
}

// Function to Draw Teacher's Table
void KG_drawTeachersTable()
{
    // Teacher's Table
    glBegin(GL_POLYGON);
    glColor3ub(63, 36, 19); // Chocolate Brown
    glVertex2f(510, 260);
    glVertex2f(470, 200);
    glVertex2f(1080, 200);
    glVertex2f(1040, 260);
    glEnd();

    // Teacher's Table Edge
    glBegin(GL_POLYGON);
    glColor3ub(54, 28, 16); // Darker Chocolate Brown
    glVertex2f(470, 200);
    glVertex2f(470, 190);
    glVertex2f(1080, 190);
    glVertex2f(1080, 200);
    glEnd();

    // Left Table Leg
    glBegin(GL_POLYGON);
    glColor3ub(54, 28, 16); // Darker Chocolate Brown
    glVertex2f(530, 190);
    glVertex2f(540, 190);
    glVertex2f(540, 130);
    glVertex2f(530, 130);
    glEnd();

    // Right Table Leg
    glBegin(GL_POLYGON);
    glColor3ub(54, 28, 16); // Darker Chocolate Brown
    glVertex2f(1020, 190);
    glVertex2f(1010, 190);
    glVertex2f(1010, 130);
    glVertex2f(1020, 130);
    glEnd();
}

// Function to Draw Children's Desks
void KG_drawChildrensDesks()
{
    // Left Children's Desk
    glBegin(GL_POLYGON);
    glColor3ub(138, 82, 32); // Wood Brown
    glVertex2f(400, 150);
    glVertex2f(700, 150);
    glVertex2f(730, 120);
    glVertex2f(370, 120);
    glEnd();

    // Left Children's Desk Edge
    glBegin(GL_POLYGON);
    glColor3ub(122, 76, 29); // Wood Dark Brown
    glVertex2f(370, 120);
    glVertex2f(370, 115);
    glVertex2f(730, 115);
    glVertex2f(730, 120);
    glEnd();

    // Right Children's Desk
    glBegin(GL_POLYGON);
    glColor3ub(138, 82, 32); // Wood Brown
    glVertex2f(850, 150);
    glVertex2f(1150, 150);
    glVertex2f(1180, 120);
    glVertex2f(820, 120);
    glEnd();

    // Right Children's Desk Edge
    glBegin(GL_POLYGON);
    glColor3ub(122, 76, 29); // Wood Dark Brown
    glVertex2f(820, 120);
    glVertex2f(820, 115);
    glVertex2f(1180, 115);
    glVertex2f(1180, 120);
    glEnd();
}

void kindergarten()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    KG_drawCeiling();
    KG_drawSideWall();
    KG_drawCenterWall();
    KG_drawFloor();

    KG_drawOutside();

    KG_drawDoor();

    KG_drawBlackboard();

    // Teacher
    drawWoman(0, 0, 1, 1,
              60, 60, 60,
              229, 49, 49, // top
              37, 107, 202, // ribbon
              229, 49, 49 // skirt
             );

    KG_drawTeachersTable();

    KG_drawChildrensDesks();

    KG_drawKidsHead(0, 0);
    KG_drawKidsHead(140, 0);
    KG_drawKidsHead(460, 0);
    KG_drawKidsHead(600, 0);

    print("A",
          1, 1, 1, kg_a_fade, 600, 440, .3, .3, 3);

    print("- Apple",
          1, 1, 1, kg_apple_fade, 655, 445, .2, .2, 1);

    print("B",
          1, 1, 1, kg_b_fade, 600, 380, .3, .3, 3);

    print("- Ball",
          1, 1, 1, kg_ball_fade, 655, 385, .2, .2, 1);

    print("...and So on",
          1, 1, 1, kg_soon_fade, 600, 340, .2, .2, 2);

    print("Play & Learn",
          1, 1, 1, kg_soon_fade, 640, 220, .2, .2, 3.5);

    print("This is where our educational journey begins...",
          1, 1, 1, kg_subtitle_1_appear, 380, 30, .14, .14, 1);
}
