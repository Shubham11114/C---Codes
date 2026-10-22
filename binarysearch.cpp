#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){

    int start=0;
    int end=n-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;

}


int main(){

    int arr[]={2,3,5,6,7,86,866};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=2;

    int result=binarySearch(arr,size,key);

    if(result>=0){

         std::cout<<"Element found sucessfully at the index : "<<result<<endl;

    }else{
        std::cout<<"Element is not present in the list";
    }
   


    return 0;
}