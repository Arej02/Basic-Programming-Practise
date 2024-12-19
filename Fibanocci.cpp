#include<iostream>
using namespace std;

int main(){
    int limit;
    cout<<"Enter the limit:";
    cin>>limit;
    int a=1,b=1;
    int i=1;
    if(limit==1)cout<<a;
    else if(limit==2)cout<<a<<" "<<b;
    else if(limit>2){
        cout<<a<<" "<<b<<" ";
        int c;
        while (i<limit-1)
        { 
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
            i++;
        }
        
    }
    return 0;
}