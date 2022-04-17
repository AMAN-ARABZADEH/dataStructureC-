#include <iostream>
#include "time.h"
using std::cout;
using std::endl;
using std::cerr;



int main(){
Time mealtime;
Time goToWorkTime;
Set(mealtime,5,30,'P');
cout << "We'll be eating at ";
Display(mealtime);
cout << endl;
Set(goToWorkTime,5,30,'P'); //尝试其它的值：'A' ->'P'
cout << "You leave for work at";
Display(goToWorkTime);
cout << endl;
if(LessThan(mealtime, goToWorkTime))
cout << "If you hurry , you can eat first. \n";
else
cout << "Sorry you can't eat first.\n";
Advance(goToWorkTime,0,30); //尝试其他值： 0->12
cout << "You go int work later at";
Display(goToWorkTime);
cout << endl;
if ( LessThan(mealtime, goToWorkTime))
cout << "If you hurry , you can eat first.\n";
else
cout << "Sorry you can't eat with us.\n";
cout << endl;


	return 0;
}