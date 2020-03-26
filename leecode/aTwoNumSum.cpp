#include <iostream>
#include<vector>
#include<map>
#include<unordered_map>
// #include<hash_map>

using namespace std;

class Solution {
public:
    //暴力解法
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> c ; 使用vector方法。
        for(int i = 0 ; i <nums.size()-1 ;i++){
            for(int j = i+1 ; j <nums.size() ;j++){
                if(nums[i] + nums[j] == target){
                    
                        // c.push_back(i);
                        // c.push_back(j);
                        // cout<<nums[i]<<nums[j]<<endl;
                        // return c;
                        return {i,j};
                }
          }
        }
        return {};
    }
    //hash Map
    vector<int> twoSum2(vector<int>& nums, int target) {
      
        unordered_map<int,int> m;

       for(int i=0;i<nums.size();i++){
            m[nums[i]] = i;         //向map中添加元素 [] 重载
       }

        //遍历一次，查找
        for(int i = 0 ; i < nums.size() ; i++){
            int aim = target - nums[i];
            if(m.find(aim) != m.end()){
                cout<<i<<" "<<m[aim]<<endl;
                return {i,m[aim]};
            }
        }
        return {};
    }
};

int main(){
    vector<int> c = {3,2,4};
    int target = 6;
    Solution *s = new Solution();
    s->twoSum2(c,target);
}


