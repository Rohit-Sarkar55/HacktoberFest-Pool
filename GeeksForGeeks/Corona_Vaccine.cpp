
/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution{
public:
    int helper(Node *root , int &count){
        
        if(root == NULL) return 0;
        
        int left = helper(root->left , count);
        int right = helper(root->right , count);
        
        if(left == -1 or right == -1){
            count++;
            return 1;
        }
        if(left == 1 or right == 1 ){
            return 0;
        }
        
        return -1;
        
    }
    int supplyVaccine(Node* root){
        int count =0;
        int cnt = helper(root , count);
        if(cnt == -1){
            count++;
        }
        return count;
    }
};
