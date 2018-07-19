#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <mmsystem.h>

#include "declarations.h"
#include "functions.h"
#include "sceneFunctions.h"

// Define the value of PI, up to 12 decimal places
#define PI 3.141592653589

GLint SCENE_ID;

GLfloat title_fade,
        intro_next_text_appear, summary_next_text_appear,
        birth_bubble1, birth_bubble1_text, birth_bubble2, birth_bubble2_text,
        summary_para1_fade, summary_para2_fade, summary_para3_fade, summary_para4_fade,
        kg_chap_fade, kg_title_fade,
        kg_a_fade, kg_apple_fade, kg_b_fade, kg_ball_fade, kg_soon_fade, kg_subtitle_1_appear,
        ps_chap_fade, ps_title_fade,
        ps_subtitle_1_appear, ps_subtitle_2_appear,
        b_subtitle_1_appear, b_subtitle_2_appear,
        hs_chap_fade, hs_title_fade,
        hs_subtitle_1_appear,
        puc_chap_fade, puc_title_fade,
        puc_subtitle_1_fade,
        eng_chap_fade, eng_title_fade,
        ec_subtitle_1_fade,
        wp_chap_fade, wp_title_fade,
        wp_subtitle_1_fade,
        epilogue_para1_fade, epilogue_para2_fade, epilogue_para3_fade, epilogue_para4_fade, epilogue_para5_fade, epilogue_para6_fade,
        moral_para1_fade, moral_para2_fade, moral_para3_fade, moral_para4_fade;

GLfloat trans_x_chap1, trans_x_title1,
        trans_x_chap2, trans_y_title2,
        trans_x_kid1, trans_x_kid2, trans_x_kid3, trans_x_ball,
        trans_subtitle_1_done, trans_subtitle_2_done,
        trans_x_chap3, trans_x_title3,
        trans_x_chap4, trans_x_title4,
        sun_move_left,
        schoolboy_x = 1150, schoolboy_y = 5220,
        trans_x_sb1 = -630, trans_y_sb1 = -50, trans_x_sb2 = -1630, trans_y_sb2 = -50,
        trans_x_chap5, trans_x_title5,
        trans_x_ec_sb1 = 850, trans_x_ec_sb2 = -1000, trans_y_ec_sb = 40, trans_x_ec_gb = -180, trans_y_ec_gb = 1040,
        trans_x_chap6, trans_x_title6;

GLfloat window_top_r = 59, window_top_g = 91, window_top_b = 132,
        window_bottom_r = 97, window_bottom_g = 131, window_bottom_b = 159,
        sky_r = 12, sky_g = 172, sky_b = 232,
        grass_r = 82, grass_g =  163, grass_b = 42,
        sun_r = 251, sun_g = 255, sun_b = 163;

// Variables for Turn-based Switching
bool sun_moved_half, sun_has_set, stars_are_made,
     chapter_1_done, chapter_2_done, chapter_3_done, chapter_4_done, chapter_5_done, tuition_done,
     puc_begin_anim, puc_end_anim,
     ec_graduation_done;

// Variables for Random Star Generation
int star_alpha, no_of_stars, stars_array[40][2];
/*
* Starting Scene - Introduction Screen
*/
void introduction()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    // Story Title
    print("The Sequel of Education",
          1, 1, 1, title_fade, 280, 380, .3, .3, 2);
    print("by Ahmed,Faysal(15-28335-1)",
          1, 1, 1, title_fade, 668, 345, .15, .15, 1);
    print("Benazir,Neephat(15-28312-1)",
          1, 1, 1, title_fade, 715, 320, .15, .15, 1);
    print("Rayhan,MD.Saif Siddiquee(15-28295-1)",
          1, 1, 1, title_fade, 715, 295, .15, .15, 1);

    print("Press N to read the story...",
          1, 1, 1, intro_next_text_appear, 560, 10, .09, .09, 1);
}

/*
*   Scene 0 - Birth
*/

/*
*   Scene 1 - Summary Screen
*/

/*
*   Scene 2 - Going to school
*/

/*
*   Scene 3 - Kindergarten
*/

/*
*   Scene 4 - Primary School
*/

/*
*	Scene 5 - High School Title Screen
*/

/*
*	Scene 6 - Admission Coaching Title Screen
*/

/*
*	Scene 7 - Engineering College Title Screen
*/

/*
*	Scene 8 - Workplace
*/

/*
*	Last Scene
*/

// Function to Render Scene
void renderScene()
{
    // Switch to know which scene is playing
    switch (SCENE_ID)
    {
    case 0:
        introduction();
        break;
    case 1:
        showScene0();
        break;
    case 2:
        showScene2();
        break;
    case 3:
        kindergartenTitleScreen();
        break;
    case 4:
        kindergarten();
        break;
    case 5:
        primarySchoolTitleScreen();
        break;
    case 6:
        primarySchool();
        break;
    case 7:
        highSchoolTitleScreen();
        break;
    case 8:
        highSchool();
        break;
    case 9:
        PUCTitleScreen();
        break;
    case 10:
        PUC();
        break;
    case 11:
        engineeringCollegeTitleScreen();
        break;
    case 12:
        engineeringCollege();
        break;
    case 13:
        workplaceTitleScreen();
        break;
    case 14:
        workplace();
        break;
    case 15:
        epilogue();
        break;
    case 16:
        morals();
        break;
    default:
        break;
    }

    // glFush sends it to the Display Buffer
    glFlush();
}

// Function to Handle Mouse Clicks
void mouseClick(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
        std::cout << x << "\t" << 800 - y << "\n";
}

// Animator Updation Function
void update(int)
{
    // Introduction
    if (SCENE_ID == 0)
    {
        if (title_fade < 1)
            title_fade += .003;
        else
            intro_next_text_appear = 1;
    }

    //Birth
    if (SCENE_ID == 1)
    {
        if (b_subtitle_1_appear < 1)
            b_subtitle_1_appear += .005;
        else
        {
            if (b_subtitle_2_appear < 1)
            {
                trans_subtitle_1_done = 200;
                b_subtitle_2_appear += .005;
            }
        }
    }

    // Summary
    if (SCENE_ID == 2)
    {
        if (summary_para1_fade < 1)
            summary_para1_fade += .02;
        else if (summary_para2_fade < 1)
            summary_para2_fade += .02;
        else if (summary_para3_fade < 1)
            summary_para3_fade += .02;
        else if (summary_para4_fade < 1)
            summary_para4_fade += .02;
        else
            summary_next_text_appear = 1;
    }

    // Kindergarten Title Screen
    if (SCENE_ID == 3)
    {
        if (trans_x_chap1 < 100)
            trans_x_chap1 += 1;

        if (trans_x_title1 < 100)
            trans_x_title1 += 1;

        if (kg_chap_fade < 1)
            kg_chap_fade += .025;

        if (kg_title_fade < 1)
            kg_title_fade += .025;
    }

    // Kindergarten
    if (SCENE_ID == 4)
    {
        if (kg_a_fade < 1)
            kg_a_fade += .025;
        else if (kg_apple_fade < 1)
            kg_apple_fade += .025;
        else if (kg_b_fade < 1)
            kg_b_fade += .025;
        else if (kg_ball_fade < 1)
            kg_ball_fade += .025;
        else if (kg_soon_fade < 1)
            kg_soon_fade += .025;
        else
            kg_subtitle_1_appear = 1;

    }

    // Primary School Title Screen
    if (SCENE_ID == 5)
    {
        if (trans_x_chap2 < 100)
            trans_x_chap2 += 1;

        if (trans_y_title2 < 100)
            trans_y_title2 += 1;

        if (ps_chap_fade < 1)
            ps_chap_fade += .01;

        if (ps_title_fade < 1)
            ps_title_fade += .01;
    }

    // Primary School
    if (SCENE_ID == 6)
    {
        if (trans_x_kid1 < 40)
            trans_x_kid1 += .4;

        if (trans_x_kid2 < wp_tb_big)
            trans_x_kid2 += .3;

        if (trans_x_kid3 < 40)
            trans_x_kid3 += .3;

        if (trans_x_ball < 50)
            trans_x_ball += .4;

        if (ps_subtitle_1_appear < 1)
            ps_subtitle_1_appear += .005;
        else
        {
            if (ps_subtitle_2_appear < 1)
            {
                trans_subtitle_1_done = 200;
                ps_subtitle_2_appear += .005;
            }
        }
    }

    // High School Title Screen
    if (SCENE_ID == 7)
    {
        if (trans_x_chap3 < 100)
            trans_x_chap3 += 1;

        if (trans_x_title3 < 100)
            trans_x_title3 += 1;

        if (hs_chap_fade < 1)
            hs_chap_fade += .01;

        if (hs_title_fade < 1)
            hs_title_fade += .01;
    }

    // High School
    if (SCENE_ID == 8)
    {
        if (!chapter_1_done)
        {
            delay(1);
            schoolboy_y -= 5000;
            chapter_1_done = true;
        }

        if (chapter_1_done && !chapter_2_done)
        {
            if (schoolboy_x >= 300)
            {
                schoolboy_x -= 5;
            }
            else
            {
                schoolboy_y += 5000;
                chapter_2_done = true;
            }
        }

        if (chapter_1_done && chapter_2_done && !chapter_3_done && !sun_has_set)
        {
            if (sun_r <= 255)
                sun_r += .25;
            if (sun_g <= 255)
                sun_g += .25;
            if (sun_b <= 255)
                sun_b += .25;

            if (star_alpha <= 200)
                star_alpha += 1;

            if (grass_r <= 255)
                grass_r += .25;
            if (grass_g <= 220)
                grass_g += .25;
            if (grass_b >= 65)
                grass_b += .25;

            if (window_top_r <= 255)
                window_top_r += .25;
            if (window_top_g <= 220)
                window_top_g += .25;
            if (window_top_b >= 65)
                window_top_b -= .25;

            if (window_bottom_r <= 255)
                window_bottom_r += .25;
            if (window_bottom_g <= 220)
                window_bottom_g += .25;
            if (window_bottom_b >= 65)
                window_bottom_b -= .25;

            if (sky_r <= 0)
                sky_r += .25;
            if (sky_g >= 0)
                sky_g -= .25;
            if (sky_b >= 0)
                sky_b -= .25;

            if (sun_move_left < 1100)
                sun_move_left += 1.5;
            else
                sun_has_set = true;

            if (sun_move_left > 500)
                sun_moved_half = true;
        }

        if (sun_moved_half && !chapter_4_done)
        {
            if (schoolboy_y != 220)
                schoolboy_y -= 5000;

            if (schoolboy_x >= -1000)
                schoolboy_x -= 5;
            else
            {
                schoolboy_y += 5000;
                chapter_4_done = true;
            }
        }

        if (chapter_4_done)
        {
            if (schoolboy_y != 5220 && !tuition_done)
            {
                schoolboy_y += 5000;
                tuition_done = true;
            }
        }

        if (sun_has_set)
        {
            if (schoolboy_y != 220)
                schoolboy_y -= 5000;
            chapter_5_done= true;
        }

        if (chapter_5_done)
        {
            if (schoolboy_x <= 1150)
                schoolboy_x += 5;
            else
            {
                if (schoolboy_y != 5220)
                    schoolboy_y += 5000;
            }

            if (hs_subtitle_1_appear < 1)
            {
                hs_subtitle_1_appear += .005;
            }
        }
    }

    // Pre University College Title Screen
    if (SCENE_ID == 9)
    {
        if (trans_x_chap4 < 100)
            trans_x_chap4 += 1;

        if (trans_x_title4 < 100)
            trans_x_title4 += 1;

        if (puc_chap_fade < 1)
            puc_chap_fade += .01;

        if (puc_title_fade < 1)
            puc_title_fade += .01;
    }

    // Pre University College
    if (SCENE_ID == 10)
    {
        if (puc_subtitle_1_fade < 1)
            puc_subtitle_1_fade += 0.005;

        if (!puc_begin_anim)
        {
            delay(1);
            puc_begin_anim = true;
        }

        if (!puc_end_anim)
        {
            if (trans_x_sb1 >= -930)
                trans_x_sb1 -= 1;
            if (trans_y_sb1 <= -20)
                trans_y_sb1 += .1;

            if (trans_x_sb2 >= -1930)
                trans_x_sb2 -= 1;
            if (trans_y_sb2 <= -20)
                trans_y_sb2 += .1;

            if (trans_y_sb1 >= -20 && trans_y_sb2 >= -20)
                puc_end_anim = true;
        }

        if (puc_end_anim)
        {
            delay(1);

            if (trans_y_sb1 <= 5000)
                trans_y_sb1 += 5000;

            if (trans_y_sb2 <= 5000)
                trans_y_sb2 += 5000;
        }
    }

    // Engineering College Title Screen
    if (SCENE_ID == 11)
    {
        if (trans_x_chap5 < 100)
            trans_x_chap5 += 1;

        if (trans_x_title5 < 100)
            trans_x_title5 += 1;

        if (eng_chap_fade < 1)
            eng_chap_fade += .025;

        if (eng_title_fade < 1)
            eng_title_fade += .025;
    }

    if (SCENE_ID == 12)
    {
        if (trans_x_ec_sb1 >= -180)
            trans_x_ec_sb1 -= 4;
        if (trans_x_ec_sb2 >= -2050)
            trans_x_ec_sb2 -= 4;

        if (trans_x_ec_sb1 <= -180 && trans_x_ec_sb2 <= -2050 && !ec_graduation_done)
        {
            trans_y_ec_sb += 1000;
            ec_graduation_done = true;
        }

        if (ec_graduation_done)
        {
            if (trans_y_ec_gb != 40)
            {
                trans_y_ec_gb -= 1000;
            }
            if (trans_x_ec_gb >= -1200)
                trans_x_ec_gb -= 2;
        }

        if (ec_subtitle_1_fade <= 1)
            ec_subtitle_1_fade += 0.005;
    }

    if (SCENE_ID == 13)
    {
        if (trans_x_chap6 < 100)
            trans_x_chap6 += 1;

        if (trans_x_title6 < 100)
            trans_x_title6 += 1;

        if (wp_chap_fade < 1)
            wp_chap_fade += .025;

        if (wp_title_fade < 1)
            wp_title_fade += .025;
    }

    if (SCENE_ID == 14)
    {
        if (server_on)
        {
            server_on = false;
        }
        else
        {
            server_on = true;
        }

        if (!wp_tb_s1_done)
        {
            if (wp_tb_s1 <= 10)
                wp_tb_s1 += .25;
            else
                wp_tb_s1_done = true;
        }

        if (light_a)
        {
            light_a = false;
            light_b = true;
            light_c = false;
            light_d = false;
        }
        else if (light_b)
        {
            light_a = false;
            light_b = false;
            light_c = true;
            light_d = false;
        }
        else if (light_c)
        {
            light_a = false;
            light_b = false;
            light_c = false;
            light_d = true;
        }
        else
        {
            light_a = true;
            light_b = false;
            light_c = false;
            light_d = false;
        }

        if (wp_tb_s1_done && !wp_tb_s2_done)
        {
            if (wp_tb_s2 <= 12)
                wp_tb_s2 += .25;
            else
                wp_tb_s2_done = true;
        }

        if (wp_tb_s1_done && wp_tb_s2_done && !wp_tb_s3_done)
        {
            if (wp_tb_s3 <= 14)
                wp_tb_s3 += .25;
            else
                wp_tb_s3_done = true;
        }

        if (wp_tb_s1_done && wp_tb_s2_done && wp_tb_s3_done && !wp_tb_big_done)
        {
            if (wp_tb_big <= 30)
                wp_tb_big += .5;
            else
                wp_tb_big_done = true;
        }

        if (wp_tb_s1_done && wp_tb_s2_done && wp_tb_s3_done && wp_tb_big_done)
        {
            if (wp_tb_text <= 1)
                wp_tb_text += .005;

            if (wp_subtitle_1_fade <= 1)
                wp_subtitle_1_fade += .005;
        }
    }

    // Epilogue
    if (SCENE_ID == 15)
    {
        if (epilogue_para1_fade < 1)
            epilogue_para1_fade += .02;
        else if (epilogue_para2_fade < 1)
            epilogue_para2_fade += .02;
        else if (epilogue_para3_fade < 1)
            epilogue_para3_fade += .02;
        else if (epilogue_para4_fade < 1)
            epilogue_para4_fade += .02;
        else if (epilogue_para5_fade < 1)
            epilogue_para5_fade += .02;
        else if (epilogue_para6_fade < 1)
            epilogue_para6_fade += .02;
    }

    // Morals
    if (SCENE_ID == 16)
    {
        if (moral_para1_fade < 1)
            moral_para1_fade += .02;
        else if (moral_para2_fade < 1)
            moral_para2_fade += .02;
        else if (moral_para3_fade < 1)
            moral_para3_fade += .02;
        else if (moral_para4_fade < 1)
            moral_para4_fade += .02;
    }

    // Recalls the Display Function
    glutPostRedisplay();

    // Creates a Timer of 25ms
    glutTimerFunc(25, update, 0);
}

// Keyboard Action
void keyPress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'f':
        glutFullScreen();
        break;
    // Go to Previous Scene
    case 'b':
    case 'B':
        if (SCENE_ID == 0)
            break;
        SCENE_ID--;
        break;
    // Go to Next Scene
    case 'n':
    case 'N':
        if (SCENE_ID == 15)
            break;
        SCENE_ID++;
        break;
    // Quit Story
    case 'q':
    case 'Q':
        exit(0);
        break;
    default:
        break;
    }

    glutPostRedisplay();
}

// Function to Initialize Screen
void initializeScreen()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 1400, 0, 800);
}

// Main Function
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1400, 800);
    glutCreateWindow("Journey to the educational system");

    std::cout << "CG PROJECT\n";
    std::cout << "Developed by \n";
    std::cout << "Faysal, Saif and Neephat \n";

    // Enables Transparency
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);

    // Enable Smoothening
    glEnable(GL_LINE_SMOOTH);
    glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);

    // Display Function
    glutDisplayFunc(renderScene);

    // Input Functions
    glutKeyboardFunc(keyPress);
    glutMouseFunc(mouseClick);

    initializeScreen();

    // Timer Function
    // every 25 milliseconds, update function is called
    glutTimerFunc(25, update, 0);
    //sndPlaySound("voice.wav", SND_ASYNC);
    PlaySound("voice.WAV", NULL, SND_LOOP | SND_ASYNC);

    glutMainLoop();

    return 0;
}
