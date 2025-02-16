//PIVOT ARRAY

#include<iostream>

using namespace std;

void printArray(int arr[], int size){
    
    cout<<"Printing the array..."<<endl;
    
    for (int i=0; i<=size-1; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<endl;
}

int pivotArray(int arr[], int size){

    int s=1, e=size-2;

    while(s<=e){
        int mid = s + (e-s)/2;

        cout<<endl<<"Start : "<<s<<"   ";
        cout<<"End : "<<e<<"   ";
        cout<<"Mid : "<<mid<<endl<<endl;

        if (arr[mid-1]>arr[mid] && arr[mid]<arr[mid+1]){
            return mid;
        }
        else if (arr[mid]>arr[0]){
            s=mid+1;
        }
        else if (arr[mid]<arr[0]){
            e=mid-1;
        }

        printArray(arr,6);

    }

    return -1;
}

int main(){

    int arr[6]={7,8,9,1,2,3};

    printArray(arr, 6);

    cout<<endl<<pivotArray(arr,6)<<endl;


}