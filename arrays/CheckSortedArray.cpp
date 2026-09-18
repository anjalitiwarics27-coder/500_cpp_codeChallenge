#include<iostream>
using namespace std;
int main(){
    int arr[8]={92,78,34,23,10,87,3,76};
   // int arr[8]={1,2,3,4,5,6,7,8};
    bool flag = true;
    for(int i=0;i<7;i++){
            if(arr[i]>arr[i+1]){
                flag = false;
                break;
            }     
    }
    if(flag == false ) cout<<"not shorted "<<endl;
    else cout<<"shorted"<<endl;
}