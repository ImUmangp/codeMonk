/*
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W),
 you need to convert all Fahrenheit values from Start to End at the gap of W,
  into their corresponding Celsius values and print the table.
*/
#include<bits/stdc++.h>
using namespace std;

 void fToCTabel(int start,int end,int step){
          while(start<=end){
              cout<<start<<"\t"<<int((5.0/9)*(start-32))<<endl;
              start+=step;
          }
}

int main(){
int sfv,Efv,ss;
cout<<"Enter Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W)"<<endl;
cin>>sfv>>Efv>>ss;
fToCTabel(sfv,Efv,ss);
return 0;
}