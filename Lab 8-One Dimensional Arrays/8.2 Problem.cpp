#include<iostream>
using namespace std;
const int max_size = 5;
int arr[max_size]={};
int count = 0;
int main(){
cout<<"Please Enter Five Different Numbers"<<endl;
while(count< max_size&&cin>>arr[count]){
    count++;
}
//while allow coditional execution of the code that will be exectutes as the codition is true
//the condition is count less than array size which is 5 constant
//by this i allowed to store my array element in count not max_size
//the execution code is that count++
cout<<"The array is diverse order is "<<endl;
for (int i = count - 1; i>=0; i--){
    cout<<arr[i];
//for loop allow us to go through arrays element
//each element is array++
//subscrapbtin
    if(i>0){
        cout<<" ";
    }if(count>0){
        cout<<endl;
    }
}


return 0;
}

