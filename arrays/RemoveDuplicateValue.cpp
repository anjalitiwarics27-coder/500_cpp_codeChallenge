#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,2,3,4,4,5,5,6};
    for(int i=0;i<8;i++){
        if(arr[i]!=arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
}