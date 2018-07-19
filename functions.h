#ifndef func_H
#define func_H

#include <iostream>
#include <unistd.h>
#include <time.h>
#include <Windows.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>
#define PI 3.141592653589

void delay(float secs);

// Function to Print Text
void print(char *string,
           GLfloat r, GLfloat g, GLfloat b, GLfloat a,
           GLint x, GLint y,
           GLfloat w, GLfloat h,
           GLfloat strokeSize);

void drawCircle(GLfloat x, GLfloat y,
                GLfloat r, GLfloat g, GLfloat b,
                GLfloat sx, GLfloat sy,
                GLfloat radius);

// Function to Draw Circle
void drawSemiCircle(GLfloat tx, GLfloat ty,
                    GLfloat sx, GLfloat sy,
                    GLfloat r, GLfloat g, GLfloat b,
                    GLfloat radius,
                    GLfloat start_angle, GLfloat end_angle);

// Function to Draw Arc
void drawArc(GLfloat tx, GLfloat ty,
             GLfloat sx, GLfloat sy,
             GLfloat r, GLfloat g, GLfloat b);

void drawKidsShirtAndTrousers(GLfloat tx, GLfloat ty,
                              GLfloat sx, GLfloat sy,
                              GLfloat shirt_r, GLfloat shirt_g, GLfloat shirt_b);

void drawKid(GLfloat tx, GLfloat ty,
             GLfloat sx, GLfloat sy,
             GLfloat shirt_r, GLfloat shirt_g, GLfloat shirt_b);

void drawTree(GLfloat tx, GLfloat ty,
              GLfloat sx, GLfloat sy);

void drawWoman(GLfloat tx, GLfloat ty, GLfloat sx, GLfloat sy,
               GLfloat hair_r, GLfloat hair_g, GLfloat hair_b,
               GLfloat top_r, GLfloat top_g, GLfloat top_b,
               GLfloat ribbon_r, GLfloat ribbon_g, GLfloat ribbon_b,
               GLfloat skirt_r, GLfloat skirt_g, GLfloat skirt_b);

void drawMan(GLfloat tx, GLfloat ty, GLfloat sx, GLfloat sy,
             GLfloat hair_r, GLfloat hair_g, GLfloat hair_b,
             GLfloat top_r, GLfloat top_g, GLfloat top_b,
             GLfloat belt_r, GLfloat belt_g, GLfloat belt_b,
             GLfloat pant_r, GLfloat pant_g, GLfloat pant_b);

void drawBaby(GLfloat tx, GLfloat ty, GLfloat sx, GLfloat sy);

#endif
