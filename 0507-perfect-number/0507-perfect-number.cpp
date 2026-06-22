class Solution {
public:
    bool checkPerfectNumber(int num) {
        int div=0;
        for(int i=1;i<=num/2;i++){
            if (num%i==0){
                div+=i;
                
            }
        }
        if (div==num){
            return true;
        }
        return false;
    }
};