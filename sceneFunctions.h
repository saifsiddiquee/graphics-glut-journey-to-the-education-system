#ifndef scenes_H
#define scenes_H

#include <iostream>
#include <unistd.h>
#include <time.h>
#include <Windows.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>
#define PI 3.141592653589

void drawSchoolBoy(GLfloat tx, GLfloat ty,
                   GLfloat sx, GLfloat sy,
                   GLfloat shirt_r, GLfloat shirt_g, GLfloat shirt_b);

void showScene0(); //Birth & Plans

void showScene1(); //Summary

void showScene2(); //Going to school

void kindergartenTitleScreen(); //Scene3
void kindergarten();

void primarySchoolTitleScreen(); //Scene4
void primarySchool();

void highSchoolTitleScreen(); //Scene5
void highSchool();

void PUCTitleScreen(); //Scene6
void PUC();

void engineeringCollegeTitleScreen(); //Scene7
void engineeringCollege();

void workplaceTitleScreen(); //Scene8
void workplace();

void epilogue();
void morals();

#endif
