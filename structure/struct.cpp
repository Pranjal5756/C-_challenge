#include <iostream>
using namespace std;

int main()
{
    // struct
    // {
    //     int myNum;
    //     string myString;
    // } myStructure;

    // myStructure.myNum = 1;
    // myStructure.myString = "Hello World!";

    // cout << myStructure.myNum << "\n";
    // cout << myStructure.myString << "\n";

    // return 0;


    struct 
    {
        string brand;
        string carName;
        int price;
    } myCar1, myCar2, myCar3;
    
    myCar1.brand = "ford";
    myCar1.carName = "fortuner";
    myCar1.price = 20;

    myCar2.brand = "suzuki";
    myCar2.carName = "swift";
    myCar2.price = 21;

    myCar3.brand = "volvo";
    myCar3.carName = "volvo xc90";
    myCar3.price = 22;


    cout << myCar1.brand << ", \n" << myCar1.carName << "\n" << myCar1.price;
}