/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: 2DHIF
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.h
* Author(s):	Kowatschek
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#ifndef ___COUNTER_H
#define ___COUNTER_H

#define COUNTER_COUNT 8

enum Direction{UP, DOWN, UNDEFINED};
typedef struct CounterImplementation *Counter;

Counter new_counter(enum Direction d);

void set_direction(Counter c, enum Direction direction);
enum Direction get_direction(Counter c);
bool set_value(Counter c, int value);
int get_value(Counter c);
void init();

void set_increment_value(Counter c, int value);
int get_increment_value(Counter c);
void increment(Counter c);

#endif
