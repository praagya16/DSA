#include<iostream>
using namespace std;

int main(){
    int n,x,y,z;
    cout<<"Enter the value of n for fibonacci series:";
    cin>>n;
    x=0;
    y=1;
    z=x+y;
    cout<<"Fibonaaci series:"<<x<<" "<<y<<" ";
    for(int i=1; i<=n; i++){
        cout<<z<<" ";
        x=y;
        y=z;
        z=x+y;
    }
}