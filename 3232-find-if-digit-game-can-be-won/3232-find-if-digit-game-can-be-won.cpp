class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int SingleDigit=0;
        int doubleDigit=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                SingleDigit+=nums[i];
            }
            else{
                doubleDigit+=nums[i];
            }
        }
            if(SingleDigit==doubleDigit){
                return false;
            }
            else{
                return true;
            }
        }
};