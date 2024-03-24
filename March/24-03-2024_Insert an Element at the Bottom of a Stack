class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        vector<int> temp;
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        st.push(x);
        for(int i=temp.size()-1; i>=0; i--){
            st.push(temp[i]);
        }
        return st;
    }
};
