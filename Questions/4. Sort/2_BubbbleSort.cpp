#include<iostream>

using namespace std;

void printArray(int arr[], int size){

    cout<<endl<<"Printing the Array"<<endl;

    int i;
    for (i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void Bubble_Sort(int arr[],int size){

    cout<<endl<<"Bubble Sorting the array"<<endl;
    
    for (int i = 1; i < size; i++){   // No. of rounds, that's why i = 1;  i= size-1. Can take i=0; i<size  as well

        bool swapped=false;           //for optimizing

        cout<<endl<<endl<<"Round : "<<i<<endl;

        for(int j=0; j<size-i; j++){  // If i is take from 0 to n-1 then:- j<size-i-1

            if (arr[j] > arr[j+1]){

                swap (arr[j], arr[j+1]);
                swapped=true;
            }

            printArray(arr,5);

        }

        if (swapped==false){
            break;
        }
    }

    cout<<endl<<"Bubble Sort Ends"<<endl<<endl;
    

}

int main(){

    int arr[5]={5,6,3,9,1};

    Bubble_Sort(arr,5);



    printArray(arr,5);

}