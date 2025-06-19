#include<iostream>
using namespace std;
int main(){
int price,numbr1,number2,sum;
cout<<"Please enter the unit price for first unit "<<"\n"<<"Please Enter the unit price for second unit"<<endl;
cin>>numbr1>>number2;
sum = numbr1 + number2;
int discount = sum*.100;
if(sum<1000){
    cout<<"the amount is "<<sum<<endl;
}else{
    cout<<"your bill is "<<sum-discount<<endl;
}
return 0;
}


