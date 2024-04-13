class Solution {
    static Long reversedBits(Long x) {
        long ans=0;
        for(int i=0;i<32;i++){
            if((x&(1<<i))!=0){
                ans+=Math.pow(2,31-i);
            }
        }
        return ans;
    }
};

