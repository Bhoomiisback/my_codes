class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count=1;
        int maxi=1;
        int num=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
                else{
                    count=1;
                }
                    if (count>maxi){
                        maxi=count;
                        num=nums[i];
                    }
        }
    return num;
    }
};