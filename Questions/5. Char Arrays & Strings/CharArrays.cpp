#include<iostream>

using namespace std;

int  getLength(char arr[]){

    int count=0;
    
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    } 

    return count;

}

char toLowerCase(char ch){
    
    if (ch>='a' && ch<='z'){
        return ch;
    }
    else{
        ch = ch - 'A' +'a';
        return ch;
    }
}

char toUpperCase(char ch){

    if (ch>='A' && ch<='Z'){
        return ch;
    }
    else{
        ch = ch -'a' +'A';
        return ch;
    }
}

void reverse(char arr[], int length){

    int start=0, end=length-1;

    while (start<=end){
        swap(arr[start++],arr[end--]);
    }

}

bool checkPalindrome(char arr[], int length){
    
    int start=0, end=length-1;

    while (start<=end){
        if (arr[start++]!=arr[end--]){
            return 0;
        }
    }

    return 1;
}

int main(){

    char name[20];

    cout<<"Enter Your Name : "<<endl;
    cin>>name;

    cout<<"The Name is : "<<name<<endl;

    //name[2]='\0'; //Terminator

    cout<<name<<endl;
    cout<<"Length : "<< getLength(name)<<endl;

    cout<<endl<<"Reverse a String...."<<endl;
    reverse(name, getLength(name));
    cout<<name<<endl<<endl;

    cout<<"Is the input Palindrome? : "<<checkPalindrome(name, getLength(name))<<endl;

    cout<<"The lower case is : "<<toLowerCase('B')<<endl;

    cout<<"The upper case is : "<<toUpperCase('b')<<endl;
}