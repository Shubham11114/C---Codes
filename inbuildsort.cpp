#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        std::cout<<arr[i];
    }
}

int main(){
    int arr[]={4,5,8,3,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+size);
    print(arr,size);

    sort(arr, arr + size, greater<int>());

    cout<<endl;

    print(arr,size);
    

    return 0;
}