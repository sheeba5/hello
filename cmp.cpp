#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node{
    int data;
    struct node *left,*right;
};

int sizeT(node* root) { 
    if (root == NULL) 
        return 0; 
    return (1 + sizeT(root->left) + sizeT(root->right)); 
} 
  
bool isComplete(node* root,int i,int n) { 
    if (root == NULL) 
        return true; 
    if (i >= n) 
        return (false); 
    return isComplete(root->left, 2*i + 1, n) && isComplete(root->right, 2*i + 2,n); 
} 
  
node* createN(int x){
    node *n = new node();
    n->data=x;
    n->left=n->right=NULL;
    return n;
}
node* insert(node *root,int x){
    if(root==NULL)
        return createN(x);
    if(x<root->data)
        root->left=insert(root->left,x);
    else
        root->right=insert(root->right,x);
    return root;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        node *root=NULL;
        while(n--){
            int x;
            cin>>x;
            int a[n+1];
            for(int i=1;i<=n;i++){
                scanf("%d",&a[i]);
            }
            for(int i=1;i<=n/2;i++){
                insert(rootm   )
            }
        }
        int p=0;
        int s=sizeT(root);
        if(isComplete(root,p,s)) 
        printf("Yes\n"); 
    else
        printf("No\n"); 
    }
    return 0;
}
