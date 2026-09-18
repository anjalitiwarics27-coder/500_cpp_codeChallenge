#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,0,2,9,0,3,4,0};
    int i =0;
    int j=7;
    while(i<j){
        if(arr[i]!=0) i++;
        else if (arr[j]==0) j--;
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int k =0;k<8;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}
