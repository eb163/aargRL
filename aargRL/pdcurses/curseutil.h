#pragma once
#include "curses.h"
#include <cstdlib>
#include <cmath>
#include <string>

using std::string;
using std::to_string;
//using std::itoa;

#ifndef CURSE_UTILITIES_H
#define CURSE_UTILITIES_H

void delcstr(char* &cstr);

void mvprintitc(int y, int x, int num);
void mvwprintitc(WINDOW* win, int y, int x, int num);

void printitc(int num);
void wprintitc(WINDOW* win, int num);

void printistc(int num, string str);
void wprintistc(WINDOW* win, int num, string str);

void mvprintistc(int y, int x, int num, string str);
void mvwprintistc(WINDOW* win, int y, int x, int num, string str);

void printdstc(double num); //prints double to curses stdscr
void wprintdstc(WINDOW* win, double num); //prints double to curses window

void mvprintdstc(int y, int x, double num); //moves cursor, prints to stdscr
void mvwprintdstc(WINDOW* win, int y, int x, double num); //moves cursor, prints to curses window

void printcolorch(char c, int color);
void wprintcolorch(WINDOW* win, char c, int color);

void mvprintcolorch(int y, int x, char c, int color);
void mvwprintcolorch(WINDOW* win, int y, int x, char c, int color);

void printcolorstr(string str, int color);
void wprintcolorstr(WINDOW* win, string str, int color);

void mvprintcolorstr(int y, int x, string str, int color);
void mvwprintcolorstr(WINDOW* win, int y, int x, string str, int color);

int getint();
int getint(char& c);
int getint(const int& arr_length);
void init_def_color_pairs();

bool startswvowel(string str); //returns boolean about whether the argument's first char is a vowel or not

#endif // CURSE_UTILITIES_H
