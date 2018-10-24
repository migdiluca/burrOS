#ifndef stdio_h
#define stdio_h

#define MAXLENGTH 100
#include <stdint.h>
#include <stdarg.h>
#include "String.h"

void putChar(char c);
char getChar();
void putString(char * str);
void printf(char* fmt, ...);
int scanf(const char * fmt, ...);
int sscanf(const char * fmt, const char * str, ...);
void nice(pid, priority);
void getInput(char * string);
char * getInt(const char * str, int * n );
char* getString(const char* str, char * source);
void deleteChar();
#endif
