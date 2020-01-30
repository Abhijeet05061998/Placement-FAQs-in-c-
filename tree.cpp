#include<iostream>
#include"TreeNode.cpp"
using namespace std;
TreeNode<char>* Takeinput()
{
    char data;
    cout<<"Enter the data:"<<endl;
    cin>>data;
    TreeNode<char>*root=new TreeNode<char>(data);
    int n;
    cout<<"Enter the number of Root data:"<<data<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        TreeNode<char>* child=Takeinput();
        root->children.push_back(child);
    }
    return root;
}
void printTree(TreeNode<char>* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }
}
int main()
{
    TreeNode<char>*root=Takeinput();
    printTree(root);
}
