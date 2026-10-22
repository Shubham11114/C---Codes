#include<iostream>
using namespace std;

void Kadanes_Algo(int arr[],int n){
    int maxSum=INT32_MIN;
    int currSum=0;
    for(int i =0;i<n;i++){
        currSum +=arr[i];
        
        maxSum=max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }
    }

    std::cout<<"Sum of subarray is : "<<maxSum;
    
}

int main(){

    int arr[]={2,-3,6,-5,4,2};
    int size=sizeof(arr)/sizeof(arr[0]);

    Kadanes_Algo(arr,size);

    return 0;
}
