/*
totalSalary=basic+hra+da+allow-pf
     hra=20% of basic
     da=50% of basic
     pf=11% of basic
     allow = 1700 if grade = ‘A’
     allow = 1500 if grade = ‘B’
      allow = 1300 if grade = ‘C' or any other character   
      Round off the total salary and then print the integral part only.  
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int basic;
char grade;
cout<<"Give value for Basic and Grade:"<<endl;
cout<<"give basic:"<<endl;
cin>>basic;
cout<<"Grade:"<<endl;
cin>>grade;
double hra=0.2*basic;
double da=0.5*basic;
double pf=0.11*basic;
double allow=0;
 if(grade=='A'){
     allow=1700;
 }
 else if(grade=='B'){
     allow=1500;
 }
 else
 allow=1300;
 double total=basic+hra+da+allow-pf;
 cout<<"Total salary of employee with grade "<<grade<<" : "<<long(round(total))<<endl;
return 0;
}