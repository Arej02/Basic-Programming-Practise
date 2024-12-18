#include<iostream>
using namespace std;
void sum(int number){
    int Sum=0,remainder;
    while(number!=0){
        remainder=number%10;
        Sum=Sum+remainder;
        number=number/10;
    }
    cout<<"\nThe sum is:"<<Sum;

}
void reverse(int number){
    int Reverse=0,remainder;
    while(number!=0){
        remainder=number%10;
        Reverse=Reverse*10+remainder;
        number=number/10;
    }
    cout<<"\nThe reverse of the number is:"<<Reverse;

}
void palindrome(int number){
    int Reverse=0,remainder;
    int backUp=number;
    while(number!=0){
        remainder=number%10;
        Reverse=Reverse*10+remainder;
        number=number/10;
    }
    if(backUp==Reverse)cout<<"\nThis is a Palindrom number";
    else cout<<"\nNot a Palindrom number";
}
void armstrong(int number){
    int Sum=0,remainder;
    int backUp=number;
    while(number!=0){
        remainder=number%10;
        Sum=Sum+remainder*remainder*remainder;
        number=number/10;
    }
    if(backUp==Sum)cout<<"\nThis is a Armstrong number";
    else cout<<"\nNot a Armstrong number";
}

int main(){
    int number;
    int choice;
    cout<<"Enter the number:";
    cin>>number;
    do{
        cout<<"\n--------------------Options-------------------";
        cout<<"\n1.Find the sum of the given number";
        cout<<"\n2.Reverse a number";
        cout<<"\n3.Find if the number is Palindrome";
        cout<<"\n4.Find if the number is Armstrong";
        cout<<"\n5.Exit";
        cout<<"\nEnter your choice:";
        cin>>choice;
        switch (choice)
        {
        case 1:
            sum(number);
            break;
        case 2:
            reverse(number);
            break;
        case 3:
            palindrome(number);
            break;
        case 4:
            armstrong(number);
            break;
        case 5:
            break;
        }
        }while(choice!=5);
    
    return 0;
}