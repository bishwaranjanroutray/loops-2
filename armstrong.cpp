// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong
// number.

#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=500;i++){
        int a=i;
        int n=0,ld;
        while(a>0){
            ld=a%10;
            n+=(ld*ld*ld);
            a/=10;
        }
        if(n==i)
        cout<<i<<endl;
    }
}