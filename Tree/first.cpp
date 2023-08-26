#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

//preorder recursive
void Preorder(Node*root){
    if(root==NULL)
        return;
    
    
        cout<<root->data<<" ";
        Preorder(root->left);
        Preorder(root->right);
    
}

//Inorder recursive
void Inorder(Node*root){
    if(root==NULL)
        return;
    
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    
}

//postorder recursive
void Postorder(Node*root){
   if(root==NULL)
        return;
    
         Postorder(root->left);
        Postorder(root->right);
        cout<<root->data<<" ";
    
}
//levelorder
void Level(Node*root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node*temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

//preorder Iterative
void Pre(Node*root){
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        Node*temp=st.top();
        cout<<temp->data<<" ";
        st.pop();
        if(temp->right){
            st.push(temp->right);
        }
        if(temp->left){
            st.push(temp->left);
        }
    }
}

//postorder Iterative
void Post(Node*root){
    stack<Node*>st1,st2;
    vector<int>ans;
    st1.push(root);
    while(!st1.empty()){
        Node*temp=st1.top();
        st1.pop();
        st2.push(temp);
        if(temp->left){
            st1.push(temp->left);
        }
        if(temp->right){
            st1.push(temp->right);
        }
    }
    while(!st2.empty()){
        ans.push_back(st2.top()->data);
        st2.pop();
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
}

//Inorder Iterative

void In(Node*root){
    stack<Node*>st;
    Node*node=root;
    while(true){
        if(node!=NULL){
            st.push(node);
            node=node->left;
        }
        else{
            if(st.empty()==true) break;
            node=st.top();
            st.pop();
            cout<<node->data<<" ";
            node=node->right; 
        }
    }
}

void reverselevelorder(Node*root){
    queue<Node*>q;
    stack<Node*>s;
    q.push(root);
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        s.push(temp);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        

    }
    while(!s.empty()){
        Node*d=s.top();
        cout<<d->data<<" ";
        s.pop();
    }
}




int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    // Preorder(root);
    // cout<<endl;
    // Inorder(root);
    // cout<<endl;
    // Postorder(root);
    // cout<<endl;
    Level(root);
    cout<<endl;
    reverselevelorder(root);
    cout<<endl;
    // Pre(root);
    // cout<<endl;
    // Post(root);
    // cout<<endl;
    // In(root);

    
}