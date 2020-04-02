#include <iostream>
#include <unordered_map>
#include<vector>
using namespace std;
unordered_map<int,int> map;
unordered_map<int,int>::iterator it;

int maxSubArray(vector<int>& nums){
   if(nums.size() <=0){
       return 0;
   }
   int prevMax = nums[0];
   int res = nums[0];
   for(int i =1 ; i<nums.size();i++){
       //每次取最大值，当前最大加上下一个元素以及下一个元素值。
       //res每次取当前值和最大值的大者；
    //    [-2,1,-3,4,-1,2,1,-5,4],             i: 0,1,2,3,4,5,6,7,8
       prevMax = max(prevMax+nums[i],nums[i]); //-2,1,-2,4,3,5,6,1,5
       res = max(res,prevMax);//-2,1,1,4,4,5,6,6,6
   }
   return res;
}
int max(int a, int b){
    if(a>= b){
        return a;
    }
    return b;
}
int main(){
    vector<int> a ={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(a)<<endl;
    return 0;
}