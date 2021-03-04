#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

struct TreeNode{
    char data;
    TreeNode *leftChild;
    TreeNode *rightChild;
    TreeNode(char c): data(c),leftChild(NULL),rightChild(NULL){}
};

// 先序中序序列构造二叉树
TreeNode* Build(string preOrder, string inOrder){
    if(preOrder.size() == 0)
        return NULL;
    char c = preOrder[0];
    TreeNode* root = new TreeNode(c);
    int position = inOrder.find(c);
    root->leftChild = Build(preOrder.substr(1,position),inOrder.substr(0,position));    
    root->rightChild = Build(preOrder.substr(position+1),inOrder.substr(position+1));    
    return root;
}

// 输出二叉树的后序遍历
void PostOrder(TreeNode *root){
    if(root == NULL)
        return;
    PostOrder(root->leftChild);
    PostOrder(root->rightChild);
    cout << root->data;
}

int main(){
    string preOrder,inOrder;
    while(cin >> preOrder >> inOrder){
        TreeNode* root = Build(preOrder,inOrder);
        PostOrder(root);
        cout << endl;
    }
    return 0;
}