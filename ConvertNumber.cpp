#include<iostream> 
using namespace std;
void convertNumber2Word(int number){
    int reverse=0,remainder;
    while(number!=0){
        remainder=number%10;
        reverse=reverse*10+remainder;
        number/=10;
    }
    while(reverse!=0){
        remainder=reverse%10;
        switch (remainder)
        {
        case 0:
            cout<<"Zero"<<" ";
            break;
        case 1:
            cout<<"One"<<" ";
            break;
        case 2:
            cout<<"Two"<<" ";
            break;
        case 3:
            cout<<"Three"<<" ";
            break;
        case 4:
            cout<<"Four"<<" ";
            break;
        case 5:
            cout<<"Five"<<" ";
            break;
        case 6:
            cout<<"Six"<<" ";
            break;
        case 7:
            cout<<"Seven"<<" ";
            break;
        case 8:
            cout<<"Eight"<<" ";
            break;
        case 9:
            cout<<"Nine"<<" ";
            break;
        }
        reverse=reverse/10;
    }
    cout<<endl;
}
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    convertNumber2Word(number);
    return 0;
}
