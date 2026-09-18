#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,5,6,7};
    int sum = 0;
    int total_sum=28;
    for(int i=0;i<6;i++){
        sum+=arr[i];
    }
    int diff =  total_sum - sum ;
    cout<<"FindOut number :" <<diff<<" ";

}