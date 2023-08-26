#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
      int data;
      Node*next;
      Node(int data){
        this->data=data;
        next=NULL;
      }
};
void insert(Node* &head,int data){
    Node*newnode=new Node(data);
    Node*curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=newnode;
    newnode->next=NULL;
}

void print(Node* head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* duplicate(Node*head){
    map<int,bool>mp;
    Node*curr=head;
    Node*prev;
    while(curr!=nullptr){
        int x=curr->data;
        if(mp.find(x)==mp.end()){
             mp[x]=true;
             prev=curr;
        }
        else{
            
            prev->next=curr->next;
            delete(curr);
        }
        curr=prev->next;

    }
    return head;
}

Node*sortzero(Node* &head){
    int zero=0,one=0,two=0;
    Node*curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            zero++;
        }
        else if(curr->data==1){
            one++;
        }
        else if(curr->data==2){
            two++;
        }
        curr=curr->next;
    }
    curr=head;
    while(zero--){
        curr->data=0;
        curr=curr->next;
    }
    while(one--){
        curr->data=1;
        curr=curr->next;
    }
    while(two--){
        curr->data=2;
        curr=curr->next;
    }
    return head;
}

Node* sortlist(Node*head){
    Node*one=new Node(-1);
    Node*One=one;
    Node*zero=new Node(-1);
    Node*Zero=zero;
    Node*two=new Node(-1);
    Node*Two=two;
    Node*curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            zero->next=new Node(0);
            zero=zero->next;
        }
        else if(curr->data==1){
            one->next=new Node(1);
            one=one->next;
        }
        else if(curr->data==2){
            two->next=new Node(2);
            two=two->next;
        }
        curr=curr->next;
    }
    zero->next=One->next;
    one->next=Two->next;
    return Zero->next;
}

int length(Node*head){
          int count=0;
          while(head!=NULL){
              head=head->next;
              count++;
          }
          return count;
      }

int main(){
   Node*head=new Node(2);
   insert(head,1);
   insert(head,2);
   insert(head,1);
   insert(head,0);
   print(head); 
   cout<<endl;
   //Node*temp=duplicate(head);
   //print(temp);
   //Node*temp=sortlist(head);
   //print(temp);
   cout<<length(head);

}