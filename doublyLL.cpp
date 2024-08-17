#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node * back;

    public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    
    }

    Node(Node * next1, Node * back1, int data1)
    {
        next= next1;
        back  =back1;
        data = data1;
    }

};

Node * doubleLL(vector<int> & arr)
{
    Node * head = new Node(arr[0]);
    Node * prev = head;
    for(int i = 1; i< arr.size(); i++)
    {
        Node * temp  = new Node(nullptr,prev,arr[i]);
        prev->next = temp;
        prev = temp;

    }
    return head;
}
void print(Node * head)
{
    while(head !=NULL)
    {
        cout<< head->data<<" ";
        head = head->next;
    }
}

Node * deleteHead(Node * head)
{
    if(head == NULL || head->next == NULL)
    {
        return NULL;
    }

    Node * prev = head;
    head=  head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;

    return head;
    
}

Node * deleteTail(Node * head)
{
    Node * tail = head;
    while(tail->next != NULL)
    {
        tail= tail->next;
    }
    Node * prev =  tail->back;
    prev->next =nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

Node * deleteKnode(Node * head, int k)
{
    if(head == NULL)
    {
        return NULL;
    }
    int cnt=0;
    Node * knode = head;
    while(knode != NULL)
    {
        cnt++;
        if(cnt == k) break;
        knode = knode->next;
    }
    Node * prev = knode->back;
    Node * front = knode->next;
    if(prev == NULL && front == NULL) 
    {
        delete knode;
        return NULL;
    }
    else if(prev == NULL)
    {
        return deleteHead(head);
    }
    else if( front == NULL)
    {
        return deleteTail(head);
    }
    prev->next = front;
    front->back = prev;

    knode->back =nullptr;
    knode->next =  nullptr;

    delete knode;
    return head;



}
void deleteNode(Node * temp)
{
    Node * prev = temp->back;
    Node * front = temp->next;

    if(front == NULL)
    {
        temp->back =nullptr;
        prev->next = nullptr;
        free(temp);
        return;
    }
    prev->next = front;
    front->back= prev;

    temp->back = temp->next = nullptr;
    free(temp);
    return;
}

Node * insertNodeB(Node * head, int val)
{
    Node * newnode = new Node(head,nullptr,val);
    head->back = newnode;
    return newnode;

}

Node * nodebeforetail(Node * head, int val)
{
    if(head->next == NULL)
    {
        return insertNodeB(head, val);
    }
    Node * tail = head;
    while(tail->next != NULL)
    {
        tail= tail->next;
    }

    Node* prev = tail->back;
    Node * newnode = new Node(tail,prev, val);
    prev->next = tail->back = newnode;

    return head;
}

Node * insertAtposK(Node * head, int k, int val)
{
    if(k==1)
    {
        return insertNodeB(head, val);
    }
    Node * temp = head;
    int cnt=0;
    while(temp!= NULL)
    {
        cnt++;
        if(cnt== k) break;
        temp = temp->next;
    }

    Node * prev = temp->back;
    Node* newnode = new Node(temp, prev, val);
    prev->next = temp->back = newnode;
    return head;
}
void insertBeforeKpos(Node * pos, int val)
{   
    Node * prev = pos->back;
    Node * newnode = new Node(pos,prev,val);
    prev->next = pos->back = newnode;
}
int main(){
    vector<int> arr = {2,5,9,8};
    Node * head = doubleLL(arr);
    //print(head);

    //head = deleteHead(head);
    // print(head);
    // head = deleteTail(head);
    // head = deleteKnode(head,4);
    // deleteNode(head->next);
    // print(head);
    // head = nodebeforetail(head, 55);
    // head = insertAtposK(head,2, 55);
    insertBeforeKpos(head->next,69);
    print(head);
    // cout<<endl;
    // deleteNode(head->next);
    // print(head);


    return 0;
}