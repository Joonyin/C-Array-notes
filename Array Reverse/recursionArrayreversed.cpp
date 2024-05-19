#include <iostream>
using namespace std;

void reverseArr(int arr[], int start,int end){
    if(start >= end){
        return;
    }
    else{
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    reverseArr(arr, start+1, end - 1);
}
void printArr(int arr[], int size){
    for(int i = 0 ; i < size; i++){
        cout<< arr[i]<< " ";
    }
}
int main(){
  int arr[] = {1,2,3};
  int size = sizeof(arr)/sizeof(arr[0]);

  reverseArr(arr, 0, size-1);
  printArr(arr, size);


    return 0;
}