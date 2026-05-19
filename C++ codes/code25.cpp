//Leetcode question 1.

#include<iostream>
using namespace std;

int main(){
    int n,a,sum=0,product=1;
    cout<<"Enter an integer:";
    cin>>n;
    
    while(n!=0){
        a=n%10;
        sum=sum+a;
        product=product*a;
        n=n/10;
    }
    int b=product-sum;
    cout<<"Sum of the integer digits: "<<sum<<"\n";
    cout<<"Product of the integer digits: "<<product<<"\n";
    cout<<"Difference btw sum and product of the integer: "<<b;
}