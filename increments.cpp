#include "std_lib_facilities.h"
/*
x++ increments the value of variable x after processing the current statement.

++x increments the value of variable x before processing the current statement.

So just decide on the logic you write.
*/
int main()
{
   int x=1;
   int r=0;
   r +=++x;
   cout << "resolt is: " << r << "\n";
    return 0;
}