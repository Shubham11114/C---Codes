#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    bool isSwap=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){ 
            swap(arr[j],arr[j+1]);
            isSwap=true;
            }
        }
        if(!isSwap){
            std::cout<<"List is already been sorted";
            return;
        }
    }
    for(int k=0;k<n;k++){
        std::cout<<arr[k];
    }
}

int main(){

    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,size);


    return 0;
}