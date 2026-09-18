#include<iostream>
using namespace std;
int main(){
    int arr[8]={12,78,34,23,10,87,3,76};
    int mini=arr[0];
    int secmini=arr[0];
    for(int i=0;i<7;i++){
        if(arr[i]<mini){
            secmini=mini;
            mini=arr[i];
        }
        else if(mini != arr[i] && arr[i] < secmini){
            secmini=arr[i];
        }
    }
    cout<<secmini;
}