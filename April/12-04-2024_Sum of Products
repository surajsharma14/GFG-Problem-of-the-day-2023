class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
        long long result = 0;
        for(int i = 31; i >= 0; i--) {
            long long bits = 0;
            for(int j = 0; j < n; j++) {
                bits += ((arr[j]>>i) & 1);
            }
            result = (result << 1) + bits * (bits - 1) / 2;
        }
        return result;
    }
};
