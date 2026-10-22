#include <iostream>
using namespace std;

void decimalToBinary(int decimal)
{

    int n = decimal;
    int pow = 1;
    int binary = 0;

    while (n > 0)
    {
        int rem = n % 2;
        binary += rem * pow;
        n = n / 2;
        pow = pow * 10;
    }

    std::cout << "Binary number is :" << binary;
}

int main()
{

    decimalToBinary(4);

    return 0;
}