#pragma once



/*
* Time.h
* This header file defines the data tyoe time for processing time.
* Basic operations are:
* Set: To set the time
* Display: To display the time
* Advance: To advance the time by certain amount
* Lessthan: To determine if one time is less than another
*
***************************************************************************/
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;


struct Time{
	unsigned houre;
	unsigned minut;
	char AMorPM;   // 'A' or 'p'
	unsigned milTime;   // Military time equivalent
};


/*
* Set the time to a specifified value.
* 
* Receive:     Time object t
*             hours, the number of hours in standard time
*             minutes, the number of minuts in standard time
*             AMPM  ('A' if AM, 'P' if PM)
*             
* Pass back:  The modified time t with data members set to 
*              the specified value
*
***************************************************************************/

void Set(Time &t, unsigned hours, unsigned minutes, char AMPM);

/* Display displays time in t in standard and military format using 
*  using output stream out
*  Receive: time and ostream out
*  Output:  The time t to out
*  Pass back: The modified ostream out
*
*  ***************************************************************************/

void Display(Time &t);

/* 
*  Advance:   increments a  time by certain amount
* 
*  Recives:   Time object t
*             hours, the number of hours to add
*             minutes, the number of minuts to add
*  Pass back: The modified time t with data members incremented
*              by the specified values.         

***************************************************************************/

void Advance(Time &t, unsigned hours, unsigned minutes);

/*
*  < Determine if one time is less than another
*   
*   Recives: Time t1 and Time t2
*   returns: (t1 < t2) ? true : false  otherwise
****************************************************************************/
bool LessThan(const Time &t1, const Time &t2);






