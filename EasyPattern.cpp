#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=1;i<n;i++){
        for(int j=n;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    int choice;
    cout<<"Enter the number of rows:";
    cin>>n;
    do{
        cout<<"\n--------------------------Easy Pattern Program---------------------------";
        cout<<"\n1. Pattern 1";
        cout<<"\n2. Pattern 2";
        cout<<"\n3. Pattern 3";
        cout<<"\n4. Pattern 4";
        cout<<"\n5. Pattern 5";
        cout<<"\n6. Exit";

        cout<<"\nPlease enter your choice:"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            pattern1(n);
            break;
        case 2:
            pattern2(n);
            break;
        case 3:
            pattern3(n);
            break;
        case 4:
            pattern4(n);
            break;
        case 5:
            pattern5(n);
            break;
        case 6:
            break;
        }
    }while(choice!=6);
    return 0;
}
