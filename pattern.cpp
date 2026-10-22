#include<iostream>
using namespace std;

int main(){

    /*
    1 1 1 1
    2 2 2 2 
    3 3 3 3
    4 4 4 4
    
    */ 
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=4;j++){
    //         std::cout<<i;
    //     }
    //     std::cout<<endl;    }

    /*
    *
    **
    ***
    ****
    */

    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++){
    //         std::cout<<"*";
    //     }
    //     std::cout<<endl;
    // }

    /*
    ****
    ***
    **
    *
    */
    // for(int i=1;i<=4;i++){
    //     for(int j=i;j<=4;j++){
    //         std::cout<<"*";
    //     }
    //     std::cout<<endl;
    // }
    for(int i=1;i<=4;i++){
        for(int j=i;j<=4;j++){
            std::cout<<"*";
        }
        std::cout<<endl;
    }

    return 0;
}