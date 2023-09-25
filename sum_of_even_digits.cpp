// WAP to print the sum of all the even digits of a given number.
// Sample Input : 4556
// Output: 10

#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number: ";
    int n,s=0,ld;
    cin>>n;
    while(n>0){
        ld=n%10;
        if (ld%2==0) s+=ld;
        n/=10;
    }
    cout<<"sum of all the even digits of a given number is:"<<s;

}