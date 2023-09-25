#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number to find the factorial of:";
    int n;
    cin>>n;
    int a=1,b=1,sum;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}