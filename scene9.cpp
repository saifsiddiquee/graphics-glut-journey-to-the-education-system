#include "declarations.h"
#include "functions.h"

// Epilogue
void epilogue()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    // Summary Title
    print("Epilogue",
          1, 1, 1, 1, 75, 650, .3, .3, 1.5);

    // Summary Text
    print("A child can choose to be either a doctor, an engineer, a pilot, a scientist, an artist,",
          1, 1, 1, epilogue_para1_fade, 75, 575, .125, .125, 1.25);
    print("an entrepreneur, a politician, a policeman, a government official, a marketer,",
          1, 1, 1, epilogue_para2_fade, 75, 525, .125, .125, 1.25);
    print("a cricketer, a football player, a hockey player, a professional bowler,",
          1, 1, 1, epilogue_para3_fade, 75, 475, .125, .125, 1.25);
    print("a lawyer, a designer, a developer, a photographer, a dancer, a singer.",
          1, 1, 1, epilogue_para4_fade, 75, 425, .125, .125, 1.25);
    print("He/she could be a superhero if they wished to be.",
          1, 1, 1, epilogue_para5_fade, 75, 375, .125, .125, 1.25);
    print("The opportunities are endless.",
          1, 1, 1, epilogue_para6_fade, 75, 275, .125, .125, 1.25);
}

// Morals
void morals()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    // Summary Title
    print("The moral of the story is...",
          1, 1, 1, 1, 75, 650, .2, .2, 1.5);

    // Summary Text
    print("1. Try to treat those around you with some kindness.",
          1, 1, 1, moral_para1_fade, 75, 575, .125, .125, 1.25);
    print("   It will go a long way into their future in shaping them as better human beings.",
          1, 1, 1, moral_para1_fade, 75, 525, .125, .125, 1.25);

    print("2. Let people explore, let them ask questions, as a teacher, you are allowed to say",
          1, 1, 1, moral_para2_fade, 75, 475, .125, .125, 1.25);
    print("   I don’t know when they ask you something new, but motivate them to learn and not let it go.",
          1, 1, 1, moral_para2_fade, 75, 425, .125, .125, 1.25);

    print("3. We need to start thinking about our careers the way we dream about",
          1, 1, 1, moral_para3_fade, 75, 375, .125, .125, 1.25);
    print("   our dream boy/girl. No compromise.",
          1, 1, 1, moral_para3_fade, 75, 325, .125, .125, 1.25);

    print("4. Gone are the days of doctors and engineers. Let a child be whatever he/she wants to be,",
          1, 1, 1, moral_para4_fade, 75, 275, .125, .125, 1.25);
    print("  and be there to provide support in any way possible. Whatever that is done from the heart,",
          1, 1, 1, moral_para4_fade, 75, 225, .125, .125, 1.25);
    print("   will be done with maximum efficiency.",
          1, 1, 1, moral_para4_fade, 75, 175, .125, .125, 1.25);
}
