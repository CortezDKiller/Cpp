#include<iostream>

using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){

    for(int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }

    return false;
}

void rowWiseSum(int arr[][4], int row, int col){

    cout<<"Inside Sum function"<<endl;

    for (int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            cout<<"Element : "<<arr[i][j] <<endl;
            sum = sum+arr[i][j];
        }
        cout<< "Row: "<<i+1<<" sum = "<<sum<<endl;
    }
}

int main(){

    ///Create 2D array
    int arr[3][4];

    //taking input row wise
    cout<<"Enter the Array Row wise..."<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row][col];
        } 
    }


    /*taking input col wise
    cout<<"Enter the Array Col wise..."<<endl;
    for(int col=0; col<4; col++){
        for(int row=0; row<3; row++){
            cin>>arr[col][row];
        } 
    }*/

    //Printing the 2D array
    cout<<"Printing the Array..."<<endl;
    for(int row=0; row<3; row++){
        //cout<< "Row: "<<row<<" - ";
        for(int col=0; col<4; col++){
            cout << arr[row][col]<<" ";
        }
        
        cout<<endl;
    }

    int target;
    cout<<"Enter the element you want to search: ";
    cin>>target;
    cout<<endl<<"Is the element present : "<<isPresent(arr, target, 3, 4)<<endl<<endl;

    cout<<"Calling Sum function..."<<endl;

    rowWiseSum(arr, 3, 4);

}