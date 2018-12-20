/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: 2DHIF
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.cpp
* Author(s):	Kowatschek
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#include "counter.h"
#include <stdbool.h>

struct CounterImplementation{
  int increment_value;
  enum Direction direction;
  int currentValue;
  bool isUsed;
};

struct CounterImplementation c1 = {0, UNDEFINED, 0, false};   //TODO: Implemented all of the counters
struct CounterImplementation c2 = {0, UNDEFINED, 0, false};
struct CounterImplementation c3 = {0, UNDEFINED, 0, false};
struct CounterImplementation c4= {0, UNDEFINED, 0, false};
struct CounterImplementation c5= {0, UNDEFINED, 0, false};
struct CounterImplementation c6= {0, UNDEFINED, 0, false};
struct CounterImplementation c7= {0, UNDEFINED, 0, false};
struct CounterImplementation c8= {0, UNDEFINED, 0, false};
static Counter counters[COUNTER_COUNT] = {&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8}; //Todo: Created the array with all of the counters


void init(){
  for (int i = 0; i < COUNTER_COUNT; i++)  //TODO: added a for to run through all of the array members
  {                           
    counters[i]->isUsed=false;              //added everything
    counters[i]->increment_value=1;
    counters[i]->currentValue=0;
    counters[i]->direction=UNDEFINED;
  }

}

Counter new_counter(enum Direction d){
  for (int i = 0; i < COUNTER_COUNT; i++) //TODO: added a for to run through all of the array members
    {
        if (!counters[i]->isUsed)   //TODO: If the counter is already in use, it should step over it, but if it isn't used, it should be used now
        {
            counters[i]->direction = d;   //TODO: This is the direction the counter should go through
            counters[i]->isUsed = true;   //TODO: from now on the counter is used
            return counters[i];         //TODO: Returnvalue: the current counter
        }
    }
    return 0;
}

void set_direction(Counter c, enum Direction direction){
  c->direction = direction; //TODO: this line was commented before
}

enum Direction get_direction(Counter c){
  return c->direction;    //TODO: this line was commented before
}

bool set_value(Counter c, int value){ //TODO: Added everything
  
  if(c->direction == DOWN){
    c->currentValue = value;
    return true;
  }
  return false;
}

int get_value(Counter c){//TODO: added everything
  return c->currentValue;
}

void set_increment_value(Counter c, int value){
  if(value>=0){
  c->increment_value = value;   //TODO: this line was commented before

  }
}

int get_increment_value(Counter c){
  return c->increment_value;  //TODO: this line was commented before
}

void increment(Counter c){        //This was commended out before
  if(c->direction == UP){
    c->currentValue += c->increment_value;
  }else if(c->direction == DOWN){
    c->currentValue -= c->increment_value;
  }
}
