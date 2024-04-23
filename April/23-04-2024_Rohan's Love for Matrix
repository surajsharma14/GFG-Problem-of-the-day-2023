class Solution {
  public:
    int firstElement(int n) {
        int first=1,second=1,ans=0;
        if(n==1 || n==2) return first;
        for(int i=0;i<n-2;i++){
            ans=(first+second)%1000000007;
            first=second;
            second=ans;
        }
        return ans;
    }
};
