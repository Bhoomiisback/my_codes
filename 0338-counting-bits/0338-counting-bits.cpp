class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>arr;
        for (int i=0;i<=n;i++){
            int temp =i;
                int bits=0;
                while(temp!=0){
                    if (temp&1){
                        bits+=1;
                    }
                    temp=temp>>1;

                }
            arr.push_back(bits);
            }
        return arr;
    }
};