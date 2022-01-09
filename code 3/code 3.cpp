#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int rob(vector<int> nums) {
       int curr, prev1 = 0, prev2 = 0; 
        
       for (int x = 0; x < nums.size(); ++x) {
           curr = max (nums[x] + prev2, prev1);
           prev2 = prev1;
           prev1 = curr;
       }
        return curr;
    }
};

int main()
{
    Solution s1;
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    cout<<s1.rob(v);
    return 0;
}