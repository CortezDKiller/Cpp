#include<iostream>

using namespace std;

int Peak(int arr[], int size){

    int start = 0, end = size-1;
    int ans=-1;

    cout<<"inside Peak function....."<<endl;

    while (start<=end){

        int mid= start +(end-start)/2;

        if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            ans = mid;
        }
        else if (arr[mid]>arr[mid-1]){
            start=mid+1;
        }
        else if (arr[mid]<arr[mid-1]){
            end= mid-1;
        }
    }

    return ans;
}

int main(){

    int arr[5]={1,2,3,4,1};
    cout<<"Array Given......."<<endl;

    cout<<"The peak is at the index : "<< Peak(arr,5)<<endl;

}
