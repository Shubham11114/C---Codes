#include<iostream>
using namespace std;

int CountingSort(int arr[],int n){
    int freq[10000];
    int minVal=INT32_MAX;
    int maxVal=INT32_MIN;

    for(int i=0;i<n;i++){
        minVal=min(minVal,arr[i]);
        maxVal=max(maxVal,arr[i]);

    }
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=minVal,j=0;i<=maxVal;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    return *arr;
}


int main(){

    int arr[]={1,4,1,3,2,4,3,7};
    int size=sizeof(arr)/sizeof(arr[0]);

    CountingSort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }


    return 0;
}