/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
void levelordertraversal(Node*root){
    if(root==nullptr){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        for(int i = 0 ; i<size; i++){
            Node*front=q.front();
            q.pop();
            if (i < size - 1) {
            front->next = q.front();
            }
            if(front->left!=nullptr){
                q.push(front->left);
            }
            if(front->right!=nullptr){
                q.push(front->right);
            }
        }
    }

}
    Node* connect(Node* root) {
        levelordertraversal(root);
        return root;
    }
};