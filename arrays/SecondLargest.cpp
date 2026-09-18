#include<iostream>
using namespace std;
int main(){
    int arr[8]={12,78,34,23,10,87,3,76};
    int max=arr[0];
    int secmax=arr[0];
    for(int i=0;i<7;i++){
        if(max<arr[i]){
            secmax=max;
            max=arr[i];
        }
        else if(arr[i]!=max && arr[i]>secmax){
                secmax=arr[i];
            }
    }
    cout<<"Second Maximum "<<secmax<<endl;
    

}