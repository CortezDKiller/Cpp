//LeetCode :- 852

#include<iostream>

using namespace std;

int Peak(int arr[], int size){

    int start = 1; //Since the  question says it is a guaranteed Mountain Array, Peak cannot be at 1 or size-1
    int end = size-2; //Since the  question says it is a guaranteed Mountain Array, Peak cannot be at 1 or size-1
    int ans=-1;

    cout<<"inside Peak function....."<<endl;

    while (start<=end){

        int mid= start +(end-start)/2;

        if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            ans = mid;
        }
        else if (arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else if (arr[mid]<arr[mid-1]){ //Avoid using [mid-1] index as the value can come out to be -1 which will go out oubounds. 
            end= mid-1;                 //Also, "else if" takes more time & memory than else as seen on LeetCode.
        }
    }

    return ans;
}

int main(){

    int arr[5]={1,2,3,4,1};
    cout<<"Array Given......."<<endl;

    cout<<"The peak is at the index : "<< Peak(arr,5)<<endl;

}
