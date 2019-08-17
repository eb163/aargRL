#include "curseutil.h"

void delcstr(char* &cstr)
{//deletes contents of a c-string pointer for working with dynamic memory
	if (cstr != nullptr)
	{
		delete[] cstr;
		cstr = nullptr;
	}
}

void mvprintitc(int y, int x, int num)
{//converts int to cstring and writes at location passed as argument
 /*
 int i=0;
 double pow10=-1;
 while(num>pow10)
 {
 if(num>pow10)
 {
 i++;
 pow10=pow(10.0, i);
 }
 }
 */
 //char cstr[i];
 //itoa(num, cstr, 10);
 //mvaddstr(y,x,cstr);
	mvaddstr(y, x, to_string(num).c_str());
}
void mvwprintitc(WINDOW* win, int y, int x, int num)
{//converts int to cstring and writes at location passed as argument
	mvwaddstr(win, y, x, to_string(num).c_str());
}

void printitc(int num)
{//converts int to cstring and writes to cursor's current location
 /*
 int i=0;
 double pow10=-1;
 while(num>pow10)
 {
 if(num>pow10)
 {
 i++;
 pow10=pow(10.0, i);
 }
 }
 char cstr[i];
 itoa(num, cstr, 10);
 addstr(cstr);
 */
	addstr(to_string(num).c_str());
}

void wprintitc(WINDOW* win, int num)
{//converts int to cstring and writes to cursor's current location
	waddstr(win, to_string(num).c_str());
}

void printistc(int num, string str)
{//appends num to str and prints resulting str to current cursor location
 /*
 int i=0;
 double pow10=-1;
 while(num>pow10)
 {
 if(num>pow10)
 {
 i++;
 pow10=pow(10.0, i);
 }
 }
 char cstr[i];
 itoa(num, cstr, 10);
 str.append(cstr);
 addstr(str.c_str());
 */
	str.append(to_string(num));
	addstr(str.c_str());
}

void wprintistc(WINDOW* win, int num, string str)
{//appends num to str and prints resulting str to current cursor location
	str.append(to_string(num));
	waddstr(win, str.c_str());
}

void mvprintistc(int y, int x, int num, string str)
{//appends num to str and prints the resulting str to console at coordinates (x,y)
 /*
 int i=0;
 double pow10=-1;
 while(num>pow10)
 {
 if(num>pow10)
 {
 i++;
 pow10=pow(10.0,i);
 }
 }
 char cstr[i];
 itoa(num, cstr, 10);
 str.append(cstr);
 mvaddstr(y,x,str.c_str());
 */
	str.append(to_string(num));
	mvaddstr(y, x, str.c_str());
}

void mvwprintistc(WINDOW* win, int y, int x, int num, string str)
{//appends num to str and prints the resulting str to console at coordinates (x,y)
	str.append(to_string(num));
	mvwaddstr(win, y, x, str.c_str());
}

void printdstc(double num)
{
	string str = std::to_string(num);
	addstr(str.c_str());
}

void wprintdstc(WINDOW* win, double num)
{
	string str = std::to_string(num);
	waddstr(win, str.c_str());
}

void mvprintdstc(int y, int x, double num)
{
	move(y, x);
	printdstc(num);
}

void mvwprintdstc(WINDOW* win, int y, int x, double num)
{
	wmove(win, y, x);
	wprintdstc(win, num);
}

void printcolorch(char c, int color)
{
	attron(COLOR_PAIR(color));
	addch(c);
	attroff(COLOR_PAIR(color));
}

void wprintcolorch(WINDOW* win, char c, int color)
{
	wattron(win, COLOR_PAIR(color));
	waddch(win, c);
	wattroff(win, COLOR_PAIR(color));
}

void mvprintcolorch(int y, int x, char c, int color)
{
	move(y, x);
	printcolorch(c, color);
}

void mvwprintcolorch(WINDOW* win, int y, int x, char c, int color)
{
	wmove(win, y, x);
	wprintcolorch(win, c, color);
}

void printcolorstr(string str, int color)
{
	attron(COLOR_PAIR(color));
	addstr(str.c_str());
	attroff(COLOR_PAIR(color));
}

void wprintcolorstr(WINDOW* win, string str, int color)
{
	wattron(win, COLOR_PAIR(color));
	waddstr(win, str.c_str());
	wattroff(win, COLOR_PAIR(color));
}

void mvprintcolorstr(int y, int x, string str, int color)
{
	move(y, x);
	printcolorstr(str, color);
}

void mvwprintcolorstr(WINDOW* win, int y, int x, string str, int color)
{
	wmove(win, y, x);
	wprintcolorstr(win, str, color);
}

int getint()
{
	char in = getch();
	char* p = &in;
	return atoi(p);
}

int getint(char& c)
{
	char* p = &c;
	return atoi(p);
}

int getint(const int& arr_length)
{
	const int LENGTH = arr_length;
	//char arr[LENGTH];
	char* arr = new char[LENGTH];
	for (int i = 0; i<LENGTH; ++i)
		arr[i] = getch();
	int result = atoi(arr);
	delcstr(arr);
	return result;
}

void init_def_color_pairs() //creates color pairs of each default non black color w/ black background
{
	init_pair(COLOR_WHITE, COLOR_WHITE, COLOR_BLACK); //white
	init_pair(COLOR_BLUE, COLOR_BLUE, COLOR_BLACK); //blue
	init_pair(COLOR_RED, COLOR_RED, COLOR_BLACK); //red
	init_pair(COLOR_YELLOW, COLOR_YELLOW, COLOR_BLACK); //yellow
	init_pair(COLOR_GREEN, COLOR_GREEN, COLOR_BLACK); //green
	init_pair(COLOR_MAGENTA, COLOR_MAGENTA, COLOR_BLACK); //purple or "magenta"
	init_pair(COLOR_CYAN, COLOR_CYAN, COLOR_BLACK); //cyan
	init_pair(COLOR_BLACK, COLOR_BLACK, COLOR_BLACK); //black
}

bool startswvowel(string str)
{
	char ch = str[0];
	if (isupper(ch) || islower(ch))
	{
		switch (ch)
		{
		case 'a':
		case 'A':

		case 'e':
		case 'E':

		case 'i':
		case 'I':

		case 'o':
		case 'O':

		case 'u':
		case 'U': return true; break;

		default: return false;
		}
	}
	else
		return false;
}