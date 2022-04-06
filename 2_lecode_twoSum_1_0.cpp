#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int i,j;
    int length=nums.size();
    for( i = 0; i < length-1; i++ )
        {for( j = i+1; j < length; j++ )
            if(nums[i]+nums[j]==target){
            return {i,j};
            }
        }
    return {0,0};
    }   
};
int main (){
    int i=0,target=9;
    vector<int> vec;
    vector<int> s;
    int inp[]={1,2,6,7,11,15};
  //  cout<<sizeof(inp)/sizeof(int)<<",";
    for(i=0; i<sizeof(inp); i++)
     {
        vec.push_back(inp[i]); //10个元素依次进入，结果为10
     }
    Solution mysolve_sun;
    s=mysolve_sun.twoSum(vec,target);
    for(int i=0;i<s.size();i++)//size()容器中实际数据个数 
    {
        cout<<s[i]<<",";
    }
    return 0;
}