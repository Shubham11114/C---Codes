#include<iostream>
using namespace std;

void maxProfit(int arr[],int n){
    int bestBuy[100000];
    bestBuy[0]=INT32_MAX;
    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1],arr[i-1]);
    }
    int maxProfit=0;
    for(int i=0;i<n;i++){
        int currProfit=arr[i]-bestBuy[i];
        maxProfit=max(maxProfit,currProfit);
    }

    std::cout<<"Max profit is : "<<maxProfit<<endl;
}

int main(){

    int stock[]={7,1,5,3,6,4};
    int size=sizeof(stock)/sizeof(stock[0]);

    maxProfit(stock,size);


    return 0;
}