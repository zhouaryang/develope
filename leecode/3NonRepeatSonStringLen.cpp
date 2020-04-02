#include<iostream>
#include<string>
#include<unordered_map>
#include<unordered_set>

using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        //s[start,end) 前面包含 后面不包含
        int start(0), end(0), length(0), result(0);
        int sSize = int(s.size());
        unordered_map<char, int> hash;
        while (end < sSize)
        {
            char tmpChar = s[end];
            //仅当s[start,end) 中存在s[end]时更新start hashmap中存放char,下标，
            if (hash.find(tmpChar) != hash.end() && hash[tmpChar] >= start)
            {
                start = hash[tmpChar] + 1;//下标加1，
                length = end - start;
            }
            hash[tmpChar] = end;

            end++;
            length++;
            result = max(result, length);
        }
        return result;
    }
};


int main(){
    string s = "pwwkew";
    Solution *so = new Solution();
    // int a = so->lengthOfLongestSubstring(s);
    // cout<<a<<endl;
    string b = "abkdkl";
    cout<<"result:"<<so->lengthOfLongestSubstring(b)<<endl;;
}