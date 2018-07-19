#include "declarations.h"
#include "functions.h"

void highSchoolTitleScreen()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    // Story Title
    print("CHAPTER 3",
          1, 1, 1, hs_chap_fade, 300 + trans_x_chap3, 400, .2, .2, 2);
    print("High School",
          1, 1, 1, hs_title_fade, 400 - trans_x_title3, 350, .3, .3, 2);
}

void HS_drawBackground()
{
    // Background
    glBegin(GL_POLYGON);
    glColor3ub(sky_r, sky_g, sky_b); // Sky Blue
    glVertex2f(0, 800);
    glVertex2f(1400, 800);
    glVertex2f(1400, 400);
    glVertex2f(0, 400);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(sky_r, sky_g, sky_b); // Sky Blue
    glVertex2f(0, 400);
    glVertex2f(1400, 400);
    glColor3ub(grass_r, grass_g, grass_b); // Green Grass
    glVertex2f(1400, 175);
    glVertex2f(0, 175);
    glEnd();
}

void HS_drawSun()
{
    // Sun
    drawCircle(1250 - sun_move_left, 700,
               sun_r, sun_g, sun_b,
               1, 1,
               50);
}

void HS_drawRoad()
{
    // Road
    glBegin(GL_POLYGON);
    glColor3ub(40, 40, 40);
    glVertex2f(0, 175);
    glVertex2f(1400, 175);
    glVertex2f(1400, 75);
    glVertex2f(0, 75);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0, 125);
    glVertex2f(200, 125);

    glVertex2f(300, 125);
    glVertex2f(500, 125);

    glVertex2f(600, 125);
    glVertex2f(800, 125);

    glVertex2f(900, 125);
    glVertex2f(1100, 125);

    glVertex2f(1200, 125);
    glVertex2f(1400, 125);
    glEnd();
    glLineWidth(1);
}

void HS_drawHome()
{
    // Home Bottom
    glBegin(GL_POLYGON);
    glColor3ub(169, 117, 83);
    glVertex2f(1375, 175);
    glColor3ub(181, 145, 113);
    glVertex2f(1375, 300);
    glColor3ub(181, 145, 113);
    glVertex2f(1100, 300);
    glColor3ub(169, 117, 83);
    glVertex2f(1100, 175);
    glEnd();

    // Home Bottom Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(1375, 175);
    glVertex2f(1375, 300);
    glVertex2f(1100, 300);
    glVertex2f(1100, 175);
    glEnd();

    // Home Top Left
    glBegin(GL_POLYGON);
    glColor3ub(181, 145, 113);
    glVertex2f(1100, 300);
    glVertex2f(1220, 300);
    glColor3ub(169, 117, 83);
    glVertex2f(1220, 400);
    glVertex2f(1100, 400);
    glEnd();

    // Home Top Left Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(1100, 300);
    glVertex2f(1220, 300);
    glVertex2f(1220, 400);
    glVertex2f(1100, 400);
    glEnd();

    // Triangle Rooftop
    glBegin(GL_TRIANGLES);
    glColor3ub(69, 39, 23);
    glVertex2f(1090, 400);
    glVertex2f(1230, 400);
    glVertex2f(1160, 450);
    glEnd();

    // Triangle Rooftop Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(1090, 400);
    glVertex2f(1230, 400);
    glVertex2f(1160, 450);
    glEnd();

    // Home Top Right
    glBegin(GL_POLYGON);
    glColor3ub(69, 39, 23);
    glVertex2f(1220, 375);
    glVertex2f(1375, 375);
    glVertex2f(1375, 300);
    glVertex2f(1220, 300);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(99, 56, 33);
    for (int temp_x = 1220; temp_x <= 1375; temp_x += 5)
    {
        glVertex2f(temp_x, 375);
        glVertex2f(temp_x, 300);
    }
    for (int temp_y = 300; temp_y <= 375; temp_y += 5)
    {
        glVertex2f(1220, temp_y);
        glVertex2f(1375, temp_y);
    }
    glEnd();

    // Home Bottom-Top Divider
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(1090, 300);
    glVertex2f(1385, 300);
    glEnd();
    glLineWidth(1);

    // Door
    glBegin(GL_POLYGON);
    glColor3ub(31, 47, 53);
    glVertex2f(1130, 175);
    glVertex2f(1130, 280);
    glVertex2f(1190, 280);
    glVertex2f(1190, 175);
    glEnd();

    // Door Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(1130, 175);
    glVertex2f(1130, 280);
    glVertex2f(1190, 280);
    glVertex2f(1190, 175);
    glEnd();

    // Top Window
    glBegin(GL_POLYGON);
    glColor3ub(window_top_r, window_top_g, window_top_b);
    glVertex2f(1130, 330);
    glVertex2f(1130, 370);
    glVertex2f(1190, 370);
    glColor3ub(window_bottom_r, window_bottom_g, window_bottom_b);
    glVertex2f(1190, 330);
    glEnd();

    // Top Window Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(1130, 330);
    glVertex2f(1130, 370);
    glVertex2f(1190, 370);
    glVertex2f(1190, 330);
    glEnd();

    // Rectangular Window
    glBegin(GL_POLYGON);
    glColor3ub(59, 91, 132);
    glVertex2f(1240, 280);
    glVertex2f(1240, 240);
    glVertex2f(1355, 240);
    glColor3ub(97, 131, 159);
    glVertex2f(1355, 280);
    glEnd();

    // Rectangular Window Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(1240, 280);
    glVertex2f(1240, 240);
    glVertex2f(1355, 240);
    glVertex2f(1355, 280);
    glEnd();

    // Rectangular Window Panes
    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(1297, 280);
    glVertex2f(1297, 240);
    glVertex2f(1355, 260);
    glVertex2f(1240, 260);
    glEnd();

    // Top Circle
    drawCircle(1160, 420,
               255, 255, 255,
               1, 1,
               10);
}

void HS_drawSchool()
{
    // School Building
    glBegin(GL_POLYGON);
    glColor3ub(184, 88, 68);
    glVertex2f(400, 175);
    glVertex2f(1000, 175);
    glVertex2f(1000, 500);
    glColor3ub(241, 130, 94);
    glVertex2f(400, 500);
    glEnd();

    // School Building Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(400, 175);
    glVertex2f(1000, 175);
    glVertex2f(1000, 500);
    glVertex2f(400, 500);
    glEnd();

    // School Board
    glBegin(GL_POLYGON);
    glColor3ub(183, 184, 188);
    glVertex2f(500, 530);
    glVertex2f(880, 530);
    glVertex2f(880, 470);
    glVertex2f(500, 470);
    glEnd();

    // School Board Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(500, 530);
    glVertex2f(880, 530);
    glVertex2f(880, 470);
    glVertex2f(500, 470);
    glEnd();

    print("HIGH SCHOOL", 0, 0, 0, 1, 520, 485, .3, .3, 1.5);

    // School Door
    glBegin(GL_POLYGON);
    glColor3ub(183, 184, 188);
    glVertex2f(600, 175);
    glVertex2f(600, 280);
    glVertex2f(800, 280);
    glVertex2f(800, 175);
    glEnd();

    // School Door Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(600, 175);
    glVertex2f(600, 280);
    glVertex2f(800, 280);
    glVertex2f(800, 175);
    glEnd();

    // School Door Divider
    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(700, 280);
    glVertex2f(700, 175);
    glEnd();

    // School Windows
    for (int i = 0; i <= 500; i+=100)
    {
        for (int j = 0; j <= 100; j+=80)
        {
            glBegin(GL_POLYGON);
            glColor3ub(59, 91, 132);
            glVertex2f(425 + i, 450 - j);
            glVertex2f(475 + i, 450 - j);
            glVertex2f(475 + i, 400 - j);
            glColor3ub(97, 131, 159);
            glVertex2f(425 + i, 400 - j);
            glEnd();

            glBegin(GL_LINE_LOOP);
            glColor3ub(20, 20, 20);
            glVertex2f(425 + i, 450 - j);
            glVertex2f(475 + i, 450 - j);
            glVertex2f(475 + i, 400 - j);
            glVertex2f(425 + i, 400 - j);
            glEnd();

            glLineWidth(4);
            glBegin(GL_LINES);
            glColor3ub(140, 75, 55);
            glVertex2f(425 + i, 400 - j);
            glVertex2f(475 + i, 400 - j);
            glEnd();
            glLineWidth(1);
        }
    }

    glBegin(GL_POLYGON);
    glColor3ub(59, 91, 132);
    glVertex2f(425, 280);
    glVertex2f(475, 280);
    glVertex2f(475, 200);
    glColor3ub(97, 131, 159);
    glVertex2f(425, 200);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(425, 280);
    glVertex2f(475, 280);
    glVertex2f(475, 200);
    glVertex2f(425, 200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(59, 91, 132);
    glVertex2f(525, 280);
    glVertex2f(575, 280);
    glVertex2f(575, 200);
    glColor3ub(97, 131, 159);
    glVertex2f(525, 200);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(525, 280);
    glVertex2f(575, 280);
    glVertex2f(575, 200);
    glVertex2f(525, 200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(59, 91, 132);
    glVertex2f(825, 280);
    glVertex2f(875, 280);
    glVertex2f(875, 200);
    glColor3ub(97, 131, 159);
    glVertex2f(825, 200);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(825, 280);
    glVertex2f(875, 280);
    glVertex2f(875, 200);
    glVertex2f(825, 200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(59, 91, 132);
    glVertex2f(925, 280);
    glVertex2f(975, 280);
    glVertex2f(975, 200);
    glColor3ub(97, 131, 159);
    glVertex2f(925, 200);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(925, 280);
    glVertex2f(975, 280);
    glVertex2f(975, 200);
    glVertex2f(925, 200);
    glEnd();
}

void HS_drawTuition()
{
    // Tuition Building
    glBegin(GL_POLYGON);
    glColor3ub(151, 188, 207);
    glVertex2f(25, 175);
    glVertex2f(300, 175);
    glColor3ub(144, 180, 200);
    glVertex2f(300, 350);
    glVertex2f(25, 350);
    glEnd();

    // Tuition Building Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(25, 175);
    glVertex2f(300, 175);
    glVertex2f(300, 350);
    glVertex2f(25, 350);
    glEnd();

    // Tuition Board
    glBegin(GL_POLYGON);
    glColor3ub(255, 218, 154);
    glVertex2f(90, 375);
    glVertex2f(220, 375);
    glVertex2f(220, 325);
    glVertex2f(90, 325);
    glEnd();

    // Tuition Board Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(90, 375);
    glVertex2f(220, 375);
    glVertex2f(220, 325);
    glVertex2f(90, 325);
    glEnd();

    print("TUITION", 0, 0, 0, 1, 98, 342, .15, .15, 1.3);

    // Tuition Door
    glBegin(GL_POLYGON);
    glColor3ub(70, 39, 21);
    glVertex2f(55, 175);
    glVertex2f(55, 280);
    glVertex2f(115, 280);
    glVertex2f(115, 175);
    glEnd();

    // Tuition Door Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(55, 175);
    glVertex2f(55, 280);
    glVertex2f(115, 280);
    glVertex2f(115, 175);
    glEnd();

    // Tuition Rectangular Window
    glBegin(GL_POLYGON);
    glColor3ub(59, 91, 132);
    glVertex2f(155, 280);
    glVertex2f(155, 240);
    glVertex2f(270, 240);
    glColor3ub(97, 131, 159);
    glVertex2f(270, 280);
    glEnd();

    // Tuition Rectangular Window Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(155, 280);
    glVertex2f(155, 240);
    glVertex2f(270, 240);
    glVertex2f(270, 280);
    glEnd();

    // Tuition Rectangular Window Panes
    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(213, 280);
    glVertex2f(213, 240);
    glVertex2f(155, 260);
    glVertex2f(270, 260);
    glEnd();
}

void HS_drawLights()
{
    // Left Light Pole
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(200, 200, 200);
    glVertex2f(350, 175);
    glVertex2f(350, 300);
    glEnd();
    glLineWidth(1);

    // Right Light Pole
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(200, 200, 200);
    glVertex2f(1050, 175);
    glVertex2f(1050, 300);
    glEnd();
    glLineWidth(1);

    // Left Bulb
    drawCircle(350,300,
               window_top_r, window_top_g, window_top_b,
               1, 1,
               15);

    // Right Bulb
    drawCircle(1050,300,
               window_top_r, window_top_g, window_top_b,
               1, 1,
               15);
}

void HS_drawStars()
{
    if (stars_are_made == false)
    {
        for (int i = 0, j = 0; i < 40; i++)
        {
            stars_array[i][j] = 0 + (rand() % (int)(1400 - 0 + 1));
            stars_array[i][j+1] = 530 + (rand() % (int)(800 - 530 + 1));
            no_of_stars++;
        }
        stars_are_made = true;
    }
    else
    {
        glPointSize(2);
        glBegin(GL_POINTS);
        glColor4ub(255, 255, 255, star_alpha);
        for (int i = 0, j = 0; i < no_of_stars; i++)
            glVertex2f(stars_array[i][j], stars_array[i][j+1]);
        glEnd();
        glPointSize(1);
    }
}

void drawSchoolBoy(GLfloat tx, GLfloat ty,
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

void highSchool()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    HS_drawBackground();
    HS_drawSun();
    HS_drawRoad();

    HS_drawHome();
    HS_drawSchool();
    HS_drawTuition();

    HS_drawLights();
    HS_drawStars();

    drawSchoolBoy(schoolboy_x, schoolboy_y,
                  .5, .5,
                  255, 0, 0);

    print("Home -> School -> Tuition -> Tuition -> School -> Home",
          1, 1, 1, hs_subtitle_1_appear, 80, 30, .14, .14, 1);

}
