#include<iostream>

using namespace std;

void printArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[], int size){
    int start=0;
    int end = size-1;
    while (start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    printArray(arr, size);

    cout << endl;

}

int main(){

    int arr[5]={1,2,4,5,6};
    int brr[5]={9,8,7,6,5};

    int n=sizeof(arr)/sizeof(int);

    reverse(arr, n);
    reverse(brr, n);
}