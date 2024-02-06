class Solution
{
    public:
    //Function to return count of nodes at a given distance from leaf nodes.
    set<int> getNodes(Node* root, int k, int& result, int& leaves){
        if(root == nullptr) return {};
        if(root -> left == nullptr && root -> right == nullptr) {leaves++; return {0};}
        
        set<int> left  = getNodes(root -> left, k, result,leaves);
        set<int> right = getNodes(root -> right, k, result, leaves);
        
        
        set<int> curSet;
        for(auto it : left) curSet.insert(it+1);
        for(auto it : right) curSet.insert(it+1);
        
        if(curSet.find(k) != curSet.end()) result++;
        
        return curSet;
    }
    public:
    //Function to return count of nodes at a given distance from leaf nodes.
    int printKDistantfromLeaf(Node* root, int k)
    {
        int result = 0, leaves = 0;
        
        getNodes(root,k,result,leaves);
        
        if(k == 0) return leaves;
        return result;
    }
};
