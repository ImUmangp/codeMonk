#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cout<<"Enter among how many numbers you want to know largest:)"<<endl;
cin>>n;
int i=1,a;
int max=INT_MIN;
while(i<=n){
    if(i==1){
        cout<<"First Number:";
        cin>>a;
          if(max<a){
          max=a;
          }
    }
    else{
        cout<<"Enter Next Number:";
         cin>>a;
    if(max<a){
          max=a;
    }    
}
i++;
}
cout<<"Largest Number among "<<n<<" is "<<max<<endl;
return 0;
}