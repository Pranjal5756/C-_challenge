#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    if (x > 0) {
        if (x % 2 == 0) {
            std::cout << "x is positive and even" << std::endl;
            if (x == 10){
                std::cout << "ok";
            }else{
                std::cout << "thisk";
            }
        } else {
            std::cout << "x is positive and odd" << std::endl;
        }
    } else {
        std::cout << "x is non-positive" << std::endl;
    }

    return 0;
}