#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a valid Number:"<<endl;
    cin>>a;
    if(a>=0 && a<10){
        cout<<"+ve one digit Number:)"<<endl;
    }
     else if(a>=10 && a<100){
        cout<<"+ve two digit Number:)"<<endl;
    }
    else if(a>=100 && a<1000){
        cout<<"+ve three digit Number:)"<<endl;
    }
    else if(a>=1000 && a<10000){
        cout<<"+ve Four digit Number:)"<<endl;
    }
    else
    cout<<"-ve Number:)"<<endl;
    return 0;
}