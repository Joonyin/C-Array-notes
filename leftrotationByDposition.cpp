#include <iostream>
using namespace std;

void leftRotation(int arr[],int n, int d){
    int temp[n];
    int k = 0;
    for(int i = d; i < n; i++){
        temp[k] = arr[i];
        k++;
    }
    for(int j = 0; j< d; j++){
        temp[k]=arr[j];
        k++;

    }
    for(int i = 0; i < n; i++){
        arr[i] = temp[i];
    }
}

int main(){
  int arr[] = {1,2,3,4,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);

 leftRotation(arr,n,2);
  
    for(int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }

    return 0;
}