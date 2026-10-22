#include<iostream>
using namespace std;

void binary_decimal(int binary){

    int n=binary;
    int pow=1;
    int decimal=0;

    while(n>0){
        int lastDigit=n%10;
        decimal += lastDigit*pow;
        pow=pow*2;
        n=n/10;
    }

    std::cout<<"Decimal number is :"<<decimal;
}

int main(){

    binary_decimal(1010);


    return 0;
}