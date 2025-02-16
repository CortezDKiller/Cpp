#include<iostream>

using namespace std;

int findPivot(int arr[], int size){
    int st=0, end=size-1;
    int mid, ans;

    // Love Babbar video 14

    cout<<"Inside Function...."<<endl;

    while (st<end){

        mid=st+(end-st)/2;

        if (arr[mid]>=arr[0]){

            st=mid+1;
   
        }
        else{
            end=mid;
        }

    }

    return st;
}

   /*  while (st<=end){

        cout<<"Inside While..."<<endl;

        mid=st+(end-st)/2;

        cout<<"Start="<<st<<" , End="<<end<<" , Mid="<<mid<<endl;

        if (arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){ // This condition will go out of bounds
            cout<<"Inside ANS Condition..."<<endl;
            ans=arr[mid];
            break;
        }
        else if (arr[mid]>arr[0]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }

    } */


   

int main(){

    int arr[5]={1,4,5,6,7};
    
    int sol=findPivot(arr,5);
    
    cout<<endl<<sol<<endl;
        
}