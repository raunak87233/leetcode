class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int>v(n),pre(n);
        int i=0;
        for(auto x:words){
            int l=x.size()-1;
            if((x[0]=='a' or x[0]=='e' or x[0]=='i' or x[0]=='o' or x[0]=='u')
              and(x[1]=='a' or x[1]=='e' or x[1]=='i' or x[1]=='o' or x[1]=='u'))
                v[i++]=1;
            else v[i++]=0;
            
        }
        pre[0]=v[0];
        for(int i=1;i<n;i++) pre[i]=pre[i-1]+v[i];
        int q=queries.size();
        vector<int>ans(q,0);
        for(int i=0; i<q; i++){
            int st=queries[i][0];
            int end=queries[i][1];
            if(st==0) ans[i]=pre[end];
            else ans[i]=pre[end]-pre[st-1];
            
        }
        return ans;
        
    }
};
