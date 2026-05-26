#include<iostream>
using namespace std;

int counting(int n){
    int i=1;
    while(i<=n){
      cout<<i<<"\t";
      i++;
    }

}
  
int main(){
    int n;

cout<<"Write the value:";
cin>>n;
counting(n);

return 0;
}
