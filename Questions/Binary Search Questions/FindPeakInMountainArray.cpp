#include<iostream>

using namespace std;

int Peak(int arr[], int size){

    int start = 0, end = size-1;
    int ans=-1;

    cout<<endl<<"Inside Peak function....."<<endl<<endl;

    while (start<=end){

        int mid= start +(end-start)/2;

        cout<<"Start: "<< start<<"  ";
        cout<<"End: "<<end<<"  ";
        cout<<"Mid: "<<mid<<"  ";
        cout<<"Ans:"<<ans<<endl;

        cout<<((arr[mid]>arr[mid-1]) && (arr[mid]>arr[mid+1])) << endl;

        if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            ans = mid;
            break;
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

    int arr[6]={1,2,3,4,5,0};
    int ans;
    cout<<endl<<"Array Given......."<<endl;

    ans=Peak(arr,6);
    cout<<"The peak is at the index : "<< ans <<endl;

}
