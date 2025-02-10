#include<iostream>

using namespace std;

int Binary_Search(int arr[], int size, int key){

    cout<<"Binary Search..."<<endl;

    int start=0, end = size-1;

    while(start<=end){
        //int mid = (start+end)/2;
        // for mid use the below formula to avoid out of range issue
        // mid = start + (end - start)/2

        int mid = start + (end - start)/2 ;
        if(arr[mid]==key){
            return mid;
        }

        else if (arr[mid]<key){
            start=mid+1;
        }
        else{
            end = mid-1;
        }

        }

        return -1;
    }

int main(){

    int evenArr[6]={1,2,3,4,5,6};
    int oddArr[5]={1,2,3,4,5};

    int evenIndex= Binary_Search(evenArr,6,5);
    cout<<evenIndex<<endl;

    int oddIndex = Binary_Search(oddArr,5,3);
    cout<<oddIndex<<endl;

}