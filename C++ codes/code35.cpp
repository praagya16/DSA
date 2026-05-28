#include<iostream>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<",";
    }
}

void SwapAlternate(int arr[],int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
   int arr[6]={1,2,3,4,5,6};
   cout<<"Swapped array:";

    //function call
    SwapAlternate(arr,6);
    PrintArray(arr,6);

    return 0;
}