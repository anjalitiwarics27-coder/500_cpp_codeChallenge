#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr1[6] = {3,6,5,1,2,7};
    int arr2[6] = {9,8,4,5,2,7};

    int arr[6];
    int k = 0;

    sort(arr1, arr1 + 6);
    sort(arr2, arr2 + 6);

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){

            if(arr1[i] == arr2[j]){
                arr[k] = arr1[i];
                k++;
            }

        }
    }

    for(int i = 0; i < k; i++){
        cout << arr[i] << " ";
    }

    return 0;
}