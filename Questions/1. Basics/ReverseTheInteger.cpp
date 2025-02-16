#include<iostream>

using namespace std;


int main() 
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int reverse=0;

    while (n>0){
        int digit = n%10;
        
        if (reverse>INT_MAX/10 || reverse<INT_MIN/10) {
            reverse=0;
            break;
        }

        reverse=reverse*10 + digit;
        n=n/10;
    }

    cout<<reverse<<endl;

}