class Solution {

  public:

    int minLaptops(int n, int start[], int end[]) {

        // Code here

        vector<vector<int>>v;

        priority_queue<int,vector<int>,greater<int>>pq;

        

        for(int i=0;i<n;i++)

          v.push_back({start[i],end[i]});

          

        sort(v.begin(),v.end());

        

        int lap=0;

        

        for(int i=0;i<n;i++)

        {

            if(pq.size()!=0 && v[i][0]>=pq.top())

              pq.pop();

            else

              lap++;

              

            pq.push(v[i][1]);

        }

        

        return lap;

    }

};
