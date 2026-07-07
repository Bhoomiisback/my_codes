class Solution {
public:
    long long sumAndMultiply(int n) {
        long long rev=0;
        while(n!=0){
            int digit=n%10;
            rev=rev*10+digit;
            n/=10;
        }
        long long num=0;
        long long sum=0;
        long long temp;
        while (rev!=0){
            temp=rev%10;
            if(temp!=0){
                num=num*10+temp;
                sum+=temp;
            }
            rev/=10;
        }
        
        return num*sum;
    }
};