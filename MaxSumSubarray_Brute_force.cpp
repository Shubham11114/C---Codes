#include<iostream>
using namespace std;

void maxSumSubarray(int arr[],int n){
    int maxSum=INT32_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int currsum=0;
            for(int k=i;k<=j;k++){
                currsum +=arr[k];
            }
            maxSum=max(maxSum,currsum);
        }
        cout<<endl;

    }
    cout<<"Max sum of the subarray is : "<<maxSum;
}
void maxSumSubarray2(int arr[],int n){
    int maxSum=INT32_MIN;
    for(int i=0;i<n;i++){
        int currsum=0;
        for(int j=i;j<n;j++){
            currsum +=arr[j];
            maxSum=max(maxSum,currsum);
        }
        cout<<endl;

    }
    cout<<"Max sum (Optimed solution) of the subarray is : "<<maxSum;
}

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    maxSumSubarray2(arr,size);
    return 0;
}