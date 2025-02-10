#include<iostream>

using namespace std;

void print_array(int arr[], int size){
    cout<<endl<<"Printing the array..."<<endl;

    for (int i=0; i<size; i++){
        cout<<arr[i];
    }

    cout << endl<< endl;
}

void input_array(int arr[], int size){
    for (int i = 0; i<size; i++){
        cin>>arr[i];
    }

    print_array(arr,size);
}

void reverse_array(int arr[], int size){
    cout<<"Reversing an array..."<<endl;
    int start=0, end=size-1;
    while (start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    print_array(arr,size);
}

void swap_alternate(int arr[], int size){
    cout<<"Swapping Alternate..."<<endl;
    int start = 0, end = 1;
    while (end<size){
        swap(arr[start], arr[end]);
        start+=2;
        end+=2;
    }

    print_array(arr,size);
}

int main(){

    int arr1[5];
    int arr2[6];

    cout<<"Enter the 1st array : ";
    input_array(arr1,5);
    reverse_array(arr1,5);
    swap_alternate(arr1,5);

    cout<<"Enter the 2nd array : ";
    input_array(arr2,6);
    reverse_array(arr2,6);
    swap_alternate(arr2,6);

}