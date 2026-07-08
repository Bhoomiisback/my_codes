class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int largest =nums[nums.size()-1];
        int slargest;
        int tlargest;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!=largest){
                slargest=nums[i];
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!=largest&& nums[i]!=slargest){
            tlargest=nums[i];
                break;
        }
        else{
            tlargest=largest;
        }
        }
        return tlargest;
    }
};