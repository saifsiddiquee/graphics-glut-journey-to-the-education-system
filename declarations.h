#ifndef dec_H
#define dec_H

#include <iostream>
#include <unistd.h>
#include <time.h>
#include <Windows.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>
#define PI 3.141592653589

extern GLint SCENE_ID;

extern GLfloat title_fade,
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

extern GLfloat trans_x_chap1, trans_x_title1,
        trans_x_chap2, trans_y_title2,
        trans_x_kid1, trans_x_kid2, trans_x_kid3, trans_x_ball,
        trans_subtitle_1_done, trans_subtitle_2_done,
        trans_x_chap3, trans_x_title3,
        trans_x_chap4, trans_x_title4,
        sun_move_left,
        schoolboy_x, schoolboy_y,
        trans_x_sb1, trans_y_sb1, trans_x_sb2, trans_y_sb2,
        trans_x_chap5, trans_x_title5,
        trans_x_ec_sb1, trans_x_ec_sb2, trans_y_ec_sb, trans_x_ec_gb, trans_y_ec_gb,
        trans_x_chap6, trans_x_title6;

extern GLfloat window_top_r, window_top_g, window_top_b,
        window_bottom_r, window_bottom_g, window_bottom_b,
        sky_r, sky_g, sky_b,
        grass_r, grass_g, grass_b,
        sun_r, sun_g, sun_b;

// Variables for Turn-based Switching
extern bool sun_moved_half, sun_has_set, stars_are_made,
     chapter_1_done, chapter_2_done, chapter_3_done, chapter_4_done, chapter_5_done, tuition_done,
     puc_begin_anim, puc_end_anim,
     ec_graduation_done;

// Variables for Random Star Generation
extern int star_alpha, no_of_stars, stars_array[40][2];

extern bool wp_tb_s1_done, wp_tb_s2_done, wp_tb_s3_done, wp_tb_big_done;
extern bool server_on, light_a, light_b, light_c, light_d;
extern GLfloat wp_tb_s1, wp_tb_s2, wp_tb_s3, wp_tb_big,
        wp_tb_text;

#endif
