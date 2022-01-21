//fahrenheit to celsius table
#include<iostream>
using namespace std;
int main(){
int start,end,step;
cout<<"Enter start end step value:"<<endl;
cin>>start>>end>>step;
for(int i=start;i<=end;i+=step){
    cout<<i<<' '<<int((i-32.0)*(5.0/9))<<endl;
}
return 0;
}