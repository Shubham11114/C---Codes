#include<iostream>
using namespace std;

int insertatinSort(int arr[],int n){
    for(int i =1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0&&arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
    }
    arr[prev+1]=curr;
    }
return *arr;
    
}

int main(){

    int arr[]={5,3,66,4,6,8};

    int size=sizeof(arr)/sizeof(arr[0]);

    insertatinSort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }



    return 0;
}