class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        queue<Node*> q;
        q.push(root);
        int mx = INT_MIN;
        while(!q.empty()){
            int s = q.size(),sum =0;
            for(int i =0;i<s;i++){
                Node*n=q.front();
                q.pop();
                sum +=n->data;
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
            }
            mx = max(mx,sum);
        }
        return mx;
    }
};
https://practice.geeksforgeeks.org/problems/max-level-sum-in-binary-tree/1?page=2&difficulty[]=0&category[]=Tree&sortBy=submissions
