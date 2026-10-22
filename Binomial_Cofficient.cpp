#include<iostream>
using namespace std;

void binomial(int n, int r){
    int fact1=1;
    int fact2=1;
    int fact3=1;
    int itreation=n-r;
    
    for(int i=1;i<=n;i++){
        fact1 *=i;
    }
    for(int i=1;i<=r;i++){
        fact2 *=i;
    }
    for(int i=1;i<=itreation;i++){
        fact3 *=i;
    }

    int dem=fact2*fact3;

    std::cout<<"Binomial cofficient is : "<<(fact1/dem);



}

int main(){
    binomial(4,2);

    return 0;
}