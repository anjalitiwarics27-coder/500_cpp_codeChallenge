#include<iostream>
using namespace std;
int main(){
    int arr[8]={12,78,34,23,10,87,3,76};
    int max=arr[0];
    for(int i=0;i<8;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum element :"<<" "<<max;
}