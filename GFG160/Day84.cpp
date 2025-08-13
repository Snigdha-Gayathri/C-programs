class Solution {
  public:
    // Function to build the tree from given inorder and preorder traversals
    int preIndex=0;
    unordered_map<int,int> inIndexMap;
    Node* buildTreeHelper(vector<int> &preorder, vector<int>&inorder, int inStart, int inEnd)
    {
        if(inStart>inEnd) return NULL;
        int rootVal=preorder[preIndex++];
        Node* root=new Node(rootVal);
        int inIndex=inIndexMap[rootVal];
        
        root->left=buildTreeHelper(preorder, inorder, inStart, inIndex-1);
        root->right= buildTreeHelper(preorder,inorder, inIndex+1, inEnd);
        return root;
    }
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // code here
        int n=inorder.size();
        preIndex=0;
        inIndexMap.clear();
        
        for(int i=0;i<n;++i)
        {
            inIndexMap[inorder[i]]=i;
            
        }
        return buildTreeHelper(preorder,inorder,0,n-1);
        
    }
    void postorderTraversal(Node* root, vector<int>&result)
    {
        if(!root) return;
        postorderTraversal(root->left,result);
        postorderTraversal(root->right,result);
        result.push_back(root->data);

    }
};