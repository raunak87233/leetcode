class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long st=0, end=nums.size()-1;
        long long ans = 0;
        while(st<end) {
            string s1 = to_string(nums[st]);
            string s2 = to_string(nums[end]);
            string s=s1+s2;
            int c = stoi(s);
            ans+=c;
            st++;
            end--;
            
        }
        long long n = nums.size();
        if(n%2) {
            ans+=nums[n/2];
        }
        return ans;
    }
            
        };
