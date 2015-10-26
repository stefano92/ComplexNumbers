#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex n1 = Complex(5,0);
    Complex n2 = Complex(5,1);

    n1.printNumber();
    n2.printNumber();

    n1.Add(n2);

    n1.printNumber();

    return 0;
}
