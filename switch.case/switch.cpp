#include <iostream>
using namespace std;

int main()
{
    // The switch expression is evaluated once
    // The value of the expression is compared with the values of each case
    // If there is a match, the associated block of code is executed
    // The break and default keywords are optional, and will be described later in this chapter


    int day = 4 ;
    switch (day)
    {
    case 2:
        
        break;
    case 3:
        
        break;
    case 4:
        cout << "hello";
        break;
    
    default:
        break;
    }
    return 0;
}