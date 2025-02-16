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

void Insertion_Sort(int arr[],int size){

    cout<<endl<<"Insertion Sorting the array"<<endl;
    
    for (int i=1; i<size; i++){
        int temp = arr[i];

        cout<<endl<<endl<<"Round : "<<i<<endl;

        for (int j=i-1; j>=0; j--){
            
            if (arr[j] > temp){
                
                arr[j+1] = arr[j];
                arr[j]=temp;
            }
            else{
                printArray(arr,5);
                break;
            }

            printArray(arr,5);
        }


    }

    cout<<endl<<"Insertion Sort Ends"<<endl<<endl;
    

}

int main(){

    int arr[5]={5,6,3,9,1};

    Insertion_Sort(arr,5);

    printArray(arr,5);

}