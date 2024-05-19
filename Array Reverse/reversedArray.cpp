//Time complexity = O(n)
//Space complexity = O(n)

#include <iostream>
using namespace std;

void reversedArr(int arr[],int size){
    int reversedArr[size];//include the size so that the size will be static
    //change the position of array to reversed
    for(int i=0; i <size; i++){
        reversedArr[i] = arr[size - i - 1];
    }
    //print reversed array
    for(int i = 0; i < size; i++){
        cout<< reversedArr[i] << " ";
    }

}

int main(){
    int arr[]= {6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    reversedArr(arr, size);

    return 0;
}