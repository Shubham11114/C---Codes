#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n=2;
    int count=0;

    if(n==1||n==2){
        
    }else{
        
    for(int i=2;i<sqrt(n);i++){

         if(n%i==0){
            count+=i;
        }

    }

    }

    if(count>0){
        std::cout<<"Number is not a prime number ";

    }else{
        std::cout<<"Number is a prime number ";
    }

    


    return 0;
}