#include<iostream>
using namespace std;

int factorial(int n){
    int product=1;
    for(int i=1; i<=n; i++){
        product=product*i;
    }
    return product;
}

int ncr(int n, int r){
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    return num/denom;
}

int main(){
    int n,r;
    cout<<"Enter value of n:";
    cin>>n;
     cout<<"Enter value of r:";
    cin>>r;     
    cout<<"Value for n(c)r is:"<<ncr(n,r);

}