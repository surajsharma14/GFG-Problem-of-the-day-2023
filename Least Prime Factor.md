class Solution {
public:
    int minFlips(int a, int b, int c) {
        int num = 0;
        string as = bitset<32>(a).to_string();
        string bs = bitset<32>(b).to_string();
        string cs = bitset<32>(c).to_string();
        for(int i = 31;i>=0;i--){
            if(cs[i] == '1'){
                if(as[i] == '1' || bs[i] == '1')continue;
                else num += 1;
            }
           else{
               if(as[i] == '1' && bs[i] == '1')num += 2;
               else if(as[i] == '1' || bs[i] == '1')num += 1;
           }
        }
        return num;
      
    }
};
