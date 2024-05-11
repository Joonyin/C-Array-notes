#include <iostream>
using namespace std;

//function that find an element first before delete it
int findElement(int arr[], int size, int x );

//function to delete found element in array
int deleteElement(int arr[], int size){
    int pos = findElement(arr , size , 7);
    if( pos == -1){
        cout<< "The element are not found in the array";
        return size;
    }
    else{
        for(int i=pos; i < size; i++){
            arr[i] = arr[i + 1];
        }
    }
    return size - 1;
}

int main(){
  int arr[] = {1,2,3,4,5,6};
  int size = sizeof(arr)/sizeof(arr[0]);

  int pos = findElement(arr , size , 7);
    if( pos == -1){
        cout<< "The element are not found in the array";
        }
 //after delete the element , the size need to asign to value smaller than 1
    else{
     size = deleteElement(arr, size);
  

  for(int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
  }
 }
   




    return 0;
}

//Function to implement search operation
int findElement(int arr[], int size, int x ){
  for(int i=0; i < size; i++){
    if(arr[i] == x ){
        return i;
    }
  }
  //if the element wasnot found
    return -1;
  


}
