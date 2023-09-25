// Print the factorials of first ‘n’ numbers

#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number to find the factorial of: ";
    int n,f=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        f=f*i;
        cout<<f<<endl;
    }
   
}