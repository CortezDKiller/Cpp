#include<iostream>

using namespace std;

void printArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<< arr[i]<< " ";
    }
}

void reverseAlternate(int arr[], int size){

    for (int i= 0; i<size; i+=2){
        if (i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

    printArray(arr, size);

    cout<<endl;

}

/* void swap_alternate(int arr[], int size){
    cout<<"Swapping Alternate..."<<endl;
    int start = 0, end = 1;
    while (end<size){
        swap(arr[start], arr[end]);
        start+=2;
        end+=2;
    }
} */

int main(){

    int arr[6] ={1,2,3,4,5,6};
    int odd[5] = {1,2,3,4,5};
    int size= sizeof(arr)/sizeof(int);

    reverseAlternate(arr, size);
    reverseAlternate(odd, 5);



}