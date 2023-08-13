vector<int> reverseLevelOrder(Node *root)
{
    queue <Node*> q;
    q.push(root);
    vector<int> ans;
    while(!q.empty()){
    vector <int> v ;  
    int size = q.size();
    for(int i=0; i<size; i++){
        Node* temp=q.front();
        q.pop();
        v.push_back(temp->data);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
         
    }
    ans.insert(ans.begin(), v.begin(), v.end());
}
return ans;
}
https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1?page=1&difficulty[]=0&category[]=Tree&sortBy=submissions
