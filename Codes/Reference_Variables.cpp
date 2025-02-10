#include<iostream>

using namespace std;

int main (){
    int x=45;
    int &y=x;   //Reference Variable
    cout<<y<<endl;

    const int a=33;
  

    //Control Structures: if else, Switch case;
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    
    
    if(age>18){
        cout<<"You're an Adult";
    }
    else if (age==18){
        cout<<"Almost there";
    }
    else{
        cout<<"You're a minor";
    }

     

    switch(age){
        case 18:
            cout<<" just adult"<<endl;
            break;
        default:
            cout<<"Bye";
            break;
    }
     

    //Arrays & Looping
    
    int marks[]={95,96,98,99,100};

    int sum=0;      //Had to be defined outside FOR. If defined inside for, printing outside would give scope issues.

    for (int i=0 ; i<5 ; i++){
        sum=sum+marks[i];
    }

    cout<<"Your Percentage is: "<<(sum/5)<<"%"<<endl;


    return 0;
}
