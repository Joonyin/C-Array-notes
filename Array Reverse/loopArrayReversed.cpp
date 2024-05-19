//time= O(n)
//space = O(1)

#include <iostream>
using namespace std;
//loop without using another array
void reversedArray(int arr[], int start, int end){
   while(start<end){
     int temp = arr[start];//change place
     arr[start] = arr[end];//change place
     arr[end] = temp;//change place 
     start ++;
     end--;
   }
   
}
//print array
void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<< arr[i] << " ";
    }
}

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9};
  int size = sizeof(arr)/sizeof(arr[0]);

  reversedArray(arr, 0, size -1);

  printArr(arr, size);

    return 0;
}