// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;
    
//         Node(int data){
//             this->data=data;
//             this->next=NULL;
//         }

// };
// void insertathead(Node* &head,int x){
//     Node*newnode=new Node(x);
//     newnode->next=NULL;
//     if(head==NULL){
//         head=newnode;
//     }
//     else{
//         newnode->next=head;
//         head=newnode;
//     }
// }
// void print(Node* head){
//     while(head){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }

// void insertatend(Node* &head,int data){
//     Node* newnode=new Node(data);
//     newnode->next=NULL;
//     Node*curr=head;
//     if(curr==NULL){
//         head=newnode;
//     }
//     while(curr->next!=NULL){
//         curr=curr->next;
//     }
//     curr->next=newnode;
    
    
// }
// void insertatpos(Node* &head,int pos,int data){
//     Node*newnode=new Node(data);
//     Node*curr=head;
//     if(pos==1){
//         newnode->next=head;
//         head=newnode;
//     }
//     for(int i=2;i<pos;i++){
//         curr=curr->next;
//     }
//     Node*currnext=curr->next;
//     curr->next=newnode;
//     newnode->next=currnext;

    
// }

// //deletion of singly linked list
// void deleteatbeg(Node* &head){
//     Node*newhead=head;
//     head=head->next;
//     delete(newhead);

// }

// void deleteatend(Node* &head){
//     Node*curr=head;
//     while(curr->next->next!=NULL){
//         curr=curr->next;
//     }
//     Node*temp=curr->next;
//     curr->next=NULL;
//     delete(temp);
// }


// int main(){ 
//    Node*head=new Node(1);
   
// //    insertathead(head,5);
// //    insertathead(head,3);
// //    insertathead(head,4);
// //    insertathead(head,2);
// insertatend(head,5);
//    insertatend(head,3);
//    insertatend(head,4);
//    insertatend(head,2);
//    print(head);
//    cout<<endl;

//  //insertatpos(head,3,2);
// //  deleteatbeg(head);
// deleteatend(head);
//  print(head);


   
   
    

    
    

// }

                         //DOUBLY LINKED LIST


// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//      int data;
//      Node* prev;
//      Node* next;
//      Node(int data){
//         this->data=data;
//         prev=next=NULL;
//      }
// };

// void insertatbeg(Node* &head,int data){
//     Node* newnode=new Node(data);
//     if(head==NULL){
//         head=newnode;
//     }
//     newnode->next=head;
//     head->prev=newnode;
//     head=newnode;
// }

// void insertatend(Node* &head,int data){
//     Node* newnode=new Node(data);
//     Node*curr=head;
//     while(curr->next!=NULL){
//         curr=curr->next;
//     }
//     newnode->prev=curr;
//     curr->next=newnode;
//     newnode->next=NULL;

// }

// void print(Node* head){
//     while(head){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }

// int main(){
//     Node* head=new Node(2);
//     // insertatbeg(head,3);
//     // insertatbeg(head,5);
//     // insertatbeg(head,6);

//     insertatend(head,3);
//     insertatend(head,5);
//     insertatend(head,6);
//     print(head);

// }

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node* next;
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
//iterative
Node* reverse(Node* &head){
    Node*curr=head;
    Node*prev=NULL;
    Node*next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

//recursive
Node*reverseR(Node* &head){
   if(head==NULL || head->next==NULL){
    return head;
   }
   Node*curr=head->next;
   head->next=NULL;
   Node*reverserest=reverseR(curr);
   curr->next=head;
   return reverserest;

}

Node*middle(Node* &head){
    Node*fast=head->next;
    Node*slow=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
    }
    return slow;
}

Node* duplicate(Node*head){
    map<int,bool>mp;
    Node*curr=head;
    Node*prev;
    while(curr->next!=nullptr){
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

int main(){
   Node*head=new Node(2);
   insert(head,4);
   insert(head,4);
   insert(head,3);
   insert(head,3);
   print(head); 
   cout<<endl;
   //Node*temp=middle(head);
   //cout<<temp->data;
   //palindrome
   //duplicatefromsorted
   //Node*temp=duplicate(head);
   //print(temp);

   
}