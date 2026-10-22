#include<iostream>
using namespace std;

int main(){

    int sum=0;
   int n =10829;
   int i=1;
   while(i<=n){
    sum+=i;
    i++;
   }
   std::cout<<"Sum of the number is :"<<sum <<endl;

    return 0;
}