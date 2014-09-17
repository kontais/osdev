#ifndef MONITOR_H
#define MONITOR_H
#include <types.h>
void update_cursor();
void cls();		// Clears up the screen
void scroll();
void putc(char c);	// Write one char to the screen

void kprint(char *string);
void kprint_long2hex(long number, char* postString);

#endif // MONITOR_H

