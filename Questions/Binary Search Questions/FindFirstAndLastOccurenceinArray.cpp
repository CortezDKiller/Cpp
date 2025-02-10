#include<iostream>

using namespace std;

int first_Occurence(int arr[], int size, int key){

    int start=0,end=size-1;
    int ans=-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if (arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        else if (arr[mid]<key){
            start = mid +1;
        }
        else if (arr[mid]>key){
            end = mid -1;
        }
    }
    return ans;
}

int last_Occurence(int arr[], int size, int key){

    int start=0,end=size-1;
    int ans=-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        

        if (arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        else if (arr[mid]<key){
            start = mid +1;
        }
        else if (arr[mid]>key){
            end = mid -1;
        }
    }
    return ans;
}


int main(){

    int arr[10]={1,2,2,2,2,2,2,2,3,5};

    cout<<"The first occurence of 2 is : "<<first_Occurence(arr,10,2)<<endl;
    cout<<"The last occerence of 2 is : "<<last_Occurence(arr,10,2)<<endl;

    cout<<"Total number of occurences : "<< last_Occurence(arr,10,2) - first_Occurence(arr,10,2) + 1 << endl;


}