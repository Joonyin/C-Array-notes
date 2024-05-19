#include <iostream>
using namespace std;

int binarySearch(int arr[],int low, int high,int key){
    if(low > high)
        return -1;
    int mid = (low+high)/2;
    if(arr[mid] == key)
        return mid;
    if(key > arr[mid])
        return binarySearch(arr,mid+1,high,key);
    return binarySearch(arr,low,mid-1,key);

    
}
int main(){
  int arr[] = {1,2,3,4,5,6,7,8};
  int n = sizeof(arr)/sizeof(arr[0]);

  cout<< "Index: " << binarySearch(arr,0,n-1,5);

  return 0;

}