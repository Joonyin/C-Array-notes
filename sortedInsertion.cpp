#include <iostream>
using namespace std;

int insertion(int arr[], int n, int key,int capacity){
    if(n>=capacity){
        return n;
    }
    int i;
    for( i = n-1; (i>=0 && arr[i]>key); i--){
        arr[i+1] = arr[i];
    }
    arr[i+1] = key;
    return n+1;
}

int main(){
    int arr[20] = {1,2,3,4,5,6,7,8,50};
    int capacity = sizeof(arr)/sizeof(arr[0]);
    int n = 9;

    n = insertion(arr,n,23,capacity);

    for(int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }



    return 0;
}