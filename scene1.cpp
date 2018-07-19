#include "declarations.h"
#include "functions.h"

void showScene2()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    // Summary Title
    print("Summary",
          1, 1, 1, 1, 75, 650, .3, .3, 1.5);

    // Summary Text
    print("As children, we are taught to follow, not to lead. We are taught to learn, not to explore.",
          1, 1, 1, summary_para1_fade, 75, 575, .125, .125, 1.25);
    print("We are taught to by heart, not to understand.",
          1, 1, 1, summary_para1_fade, 75, 550, .125, .125, 1.25);

    print("When we grow up, things don't change. We are given a meagre choice of either choosing",
          1, 1, 1, summary_para2_fade, 75, 475, .125, .125, 1.25);
    print("to be a Doctor or an Engineer, and the rest` of the options are at bleak focus. ",
          1, 1, 1, summary_para2_fade, 75, 450, .125, .125, 1.25);

    print("Choosing to be a doctor is a rich man's dream.",
          1, 1, 1, summary_para3_fade, 75, 375, .125, .125, 1.25);
    print("Ending up as an engineer has become a curse. ",
          1, 1, 1, summary_para3_fade, 75, 350, .125, .125, 1.25);

    print("Engineering is a field to invent and innovate, not to follow orders from higher officials.",
          1, 1, 1, summary_para4_fade, 75, 275, .125, .125, 1.25);
    print("We might as well study the lives of Hitler�s Soldiers if we were to do so",
          1, 1, 1, summary_para4_fade, 75, 250, .125, .125, 1.25);
    print("for the rest of out lives.",
          1, 1, 1, summary_para4_fade, 75, 225, .125, .125, 1.25);

    print("Press N to move on...",
          1, 1, 1, summary_next_text_appear, 580, 10, .09, .09, 1);
}

