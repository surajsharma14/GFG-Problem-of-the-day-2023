class Solution {
  public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,int q) {
        vector<int>ans;
        sort(b.begin(),b.end());
        for(int i=0;i<q;i++){
            int x = query[i];
            int idx = upper_bound(b.begin(),b.end(),a[x])-b.begin();
            ans.push_back(idx);
        }
        return ans;
    }
};
