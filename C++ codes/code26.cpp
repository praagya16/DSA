//Leetcode question 2.
#include<iostream>
using namespace std;

class Solution {
    public:
    int hammingweight(uint32_t n){

        int count=0;
        while(n!=0){

        if(n&1){
          count++;
        }
        n=n>>1;
    }
    return count;
  }
 
};
