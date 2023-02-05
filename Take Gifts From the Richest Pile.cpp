class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long n = gifts.size();
        for (int i=0;i<k;i++){
            sort(gifts.begin(),gifts.end());
            gifts[n-1]=sqrt(gifts[n-1]);
        }
        long long sum = 0;
        for(int i:gifts)
            sum+=i;
        return sum;
        
        
    }
};
