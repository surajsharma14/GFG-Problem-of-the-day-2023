class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        int a=min(A,B);

        int b=max(A,B);

        int c=min(C,D);

        int d=max(C,D);

        int ans=0;

        while(b>d){

            b=b/2;

            

            if(b<a){

                swap(a,b);

            }

            

            ans++;

        }

        while(a>c){

            a=a/2;

            

            if(b<a){

                swap(a,b);

            }

            

            ans++;

        }

        return ans;
    }
};
