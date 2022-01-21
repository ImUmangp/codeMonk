#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three sides of a triangle:"<<endl;
    cin>>a>>b>>c;
    if( (a+b)>c && (b+c)>a && (a+c)>b){
        cout<<a<<" "<<b<<" "<<c<<" makes a Valid triangle:)"<<endl;
    }
    else{
        cout<<"Inputs doesn't make a valid triangle";
    }
    return 0;
}