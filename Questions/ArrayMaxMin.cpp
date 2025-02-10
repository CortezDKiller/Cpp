#include<iostream>

using namespace std;

void printArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void getMax(int arr[],int size){
    int maxi= INT_MIN;

    for (int i=0; i<size; i++){
        // if (arr[i]>max){
        //     max = arr[i];
        // }

        maxi = max(maxi,arr[i]);
    }

    cout << "The Max value is : " << maxi << endl;
}

void getMin(int arr[],int size){
    int mini= INT_MAX;

    for (int i=0; i<size; i++){
        // if (arr[i]<min){
        //     min = arr[i];
        // }

        mini = min(mini, arr[i]);
    }

    cout << "The Min value is : " << mini << endl;
}


int main() 
{
    int arr[10];
    int n=sizeof(arr)/sizeof(int);
    cout<<"Enter the Array"<<endl;

    for (int i=0; i<10; i++){
        cin>>arr[i];
    }

    printArray(arr,n);
    getMax(arr,n);
    getMin(arr,n);

}