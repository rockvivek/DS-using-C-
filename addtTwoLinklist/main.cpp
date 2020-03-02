#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node *head1= NULL,*head2 = NULL;

void printList(Node *head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
Node* reverse(Node *head){
    Node *next = NULL,*prev = NULL,*curr = head;
    while(curr){
        next  = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void add(Node *head1 , Node *head2){
    int carry = 0;
    while(head1 || head2){
        int data = head1->data + head2->data + carry;
        if(data>9){
            head1->data = data%10;
            carry = data/10;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
}
int main()
{
   head1 = new Node(2);
   head1->next = new Node(3);
   head1->next->next = new Node(4);
   printList(head1);

   head2 = new Node(5);
   head2->next = new Node(6);
   head2->next->next = new Node(4);
   printList(reverse(head1));

    add(head1,head2);
    reverse(head1);
    return 0;
}
