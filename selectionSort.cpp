#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){
    for(int i =0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            } 
        }
        swap(arr[i],arr[minidx]);
            
    }
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
}

int main (){
    int arr[]={5,8,1,2,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    SelectionSort(arr,size);
    


    return 0;
}