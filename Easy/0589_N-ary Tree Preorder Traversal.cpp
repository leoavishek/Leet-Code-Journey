/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void pre(Node* root,vector<int>& nodes){
        if(!root)
            return;
        nodes.push_back(root->val);
        for(auto i:root->children)
            pre(i,nodes);
    }
    vector<int> preorder(Node* root) {
        vector<int> nodes;
        pre(root,nodes);
        return nodes;
    }
};