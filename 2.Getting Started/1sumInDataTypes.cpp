#include<iostream>
using namespace std;
int main(){
cout<<"You have to perform operations on double and integers separately"<<endl;
cout<<" Give 1 for Integers and 2 for Double:"<<endl;
int n;
cin>>n;
if(n==1){
    cout<<"Example how integers behave in (5/9)*(f-32)"<<endl;
    cout<<"let f=100"<<endl;
    cout<<"Solution as a integer data types ans: "<<(5/9)*(100-32)<<endl;
    cout<<"But if you Solve as a double data types ans: "<<(5.0/9.0)*(100-32)<<endl;
}
else if(n==2){
     cout<<"Example how double behave in (5.0/9.0)*(f-32)"<<endl;
    cout<<"let f=100"<<endl;
    cout<<"Solution as a double data types ans: "<<(5.0/9.0)*(100-32)<<endl;
    cout<<"But if you Solve as a integer data types ans: "<<(5/9)*(100-32)<<endl;
}
return 0;
}