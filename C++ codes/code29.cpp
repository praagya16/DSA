#include<iostream>
using namespace std;

 int power(int a,int b){
        int product=1;

        for(int i=1; i<=b; i++){
            product= product*a;
        }
        return product;
    }


int main(){
    int a,b;

cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;
cout<<"a^b:"<<power(a,b);
}