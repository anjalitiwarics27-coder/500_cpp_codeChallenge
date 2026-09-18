#include<iostream>
using  namespace std ;
int main(){
     int arr[6]={1,2,3,5,5,6};
     for(int i=0;i<6;i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<" ";
        }
     }
}