//Check for upper case or lower case
#include<iostream>
using namespace std;
int main(){
char a;
cout<<"Give a character you want to check for:"<<endl;
cin>>a;
if(a>=65&&a<=90){
    cout<<a<<" is a Upper case character"<<endl;
}
else if(a>=97&&a<=122){
    cout<<a<<" is a Lower case character"<<endl;
}
return 0;
}