#include <iostream>
using namespace std;

//insert array into's function
void insertArray(int arr[7], int size, int x, int pos){
    for(int i = size-1; i>=pos; i-- ){
        arr[i+1]=arr[i];
    }
    arr[pos]= x;

}

int main(){
  int arr[7] = {10,2,57,4,19,30};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  insertArray(arr,size,10,2);

  for(int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
  }
  



    return 0;
}