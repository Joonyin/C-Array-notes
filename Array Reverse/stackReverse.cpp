#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void reverseStack(int arr[],int size){
    std::stack<int> stack;
    //Push Elements onto the stack
    for(int i = 0; i < size; i++){
        stack.push(arr[i]);
    }
    //Pop element from the stack to reverse the array
    for(int i = 0; i < size; i++){
        arr[i] = stack.top();
        stack.pop();
    }

}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    reverseStack(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<< " ";
    }
    return 0;
}