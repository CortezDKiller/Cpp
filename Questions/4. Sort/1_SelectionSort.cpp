#include<iostream>

using namespace std;

void Selection_Sort(int arr[],int size){

    cout<<endl<<"Selection Sorting the array"<<endl;

    int i, j;

    for (i=0;i<size-1;i++){

        int minIndex=i;

        for (j=i+1; j<size; j++){
            if (arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }

        swap(arr[i],arr[minIndex]);
    }

}

void printArray(int arr[], int size){

    cout<<endl<<"Printing the Array"<<endl;

    int i;
    for (i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

int main(){

    int arr[5]={5,6,3,9,1};

    cout<<"Input Array....";

    printArray(arr,5);

    Selection_Sort(arr,5);

    printArray(arr,5);

}