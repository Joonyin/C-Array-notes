#include <iostream>
using namespace std;

void Krotation(int arr[], int n, int k){
    int temp = 0;
    int p = 1;
    k = k % n;
    while(p<=k){
        temp = arr[n-1];
        for(int i = n - 1; i > 0; i--){
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
        p++;
        
    }
    for(int i =0; i < n; i++){
        cout<< arr[i]<< " ";
    }

}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    Krotation(arr, n, 4);

    

    return 0;
}