#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1)
    {
        data= data1;
        next = next1;
    }
    public:
    Node(int data1)
    {
        data= data1;
        next = nullptr;
    }
};

Node * array2ll(vector<int> &arr)
{
    Node * head = new Node(arr[0]);
    Node * mover = head;

    for(int i=1;i<arr.size();i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lenLL(Node *head)
{
    int cnt =0;
    Node *temp = head;
    while(temp)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int checkpresent(Node * head, int val)
{
    Node * temp = head;
    while(temp)
    {
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}

Node *removehead( Node * head)
{
    if(head== NULL) return head;
    Node * temp = head;
    head= temp->next;
    delete temp;
    return head;
}
 void printele( Node * head)
 {
    Node * temp = head;
    while(temp)
    {
        cout<< temp->data << " ";
        temp = temp->next;
    }
 }

 Node * removetail(Node * head)
 {
    if(head== NULL || head->next == NULL) return head;
    Node *temp = head;
    while(temp->next->next !=NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next =  NULL;
    return head;
 }

Node * removek(Node * head, int k)
{
    if(head == NULL) return head;
    if(k == 1)
    {
        Node * temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    
    Node * temp = head;
    Node* prev = NULL;
    int cnt=0;
    while(temp != NULL)
    {
        cnt++;
        if(cnt == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev= temp;
        temp= temp->next;

    }
    return head;
}

Node * removebyele(Node * head, int ele)
{
    if(head == NULL) return head;
    if(head->data == ele)
    {
        Node * temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node* temp = head;
    Node * prev = NULL;
    while (temp!=NULL)
    {
        if(temp->data == ele)
        {
            prev->next = prev->next->next;
            free(temp);
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;

}

Node * insertTail(Node * head, int val)
{
    if(head == NULL)
    {
        return new Node(val);
    }

    Node * temp = head;
    while(temp-> next != NULL)
    {
        temp = temp-> next;
    }
    temp->next = new Node(val);
    return head;
}

Node * insertAtHead(Node * head, int val)    
{
    return new Node(val, head);
}



Node * insertEleK(Node * head, int ele, int k)
{
    if(head == NULL)
    {
        if(k==1)
        {
            return new Node(ele);
        }
        else{
            return head;
        }
    }
        if(k == 1)
        {
            return new Node(ele, head);
        }
        Node * temp = head;
        int cnt =0;
        while(temp != NULL)
        {
            cnt++;
            if(cnt ==(k-1))
            {
                Node * x = new Node(ele, temp->next);
                temp->next=x;
                break;
            }
            temp= temp->next;
        }
        return head;
    
}

Node * inserteleBefore(Node * head, int ele, int val)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(head->data == val)
    {
        return new Node(ele,head);
    }
    Node * temp = head;
    while(temp != NULL)
    {
        if(temp->next->data == val)
        {
            Node * x = new Node(ele,temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{

vector<int> arr= {15,25,36,45};

//Node *y = new Node(arr[0],nullptr);
// cout<< y->data<<endl;
// cout<<y->next<<endl;

Node * head = array2ll(arr);
// cout<< head->data<<endl;

Node * temp = head;
// while(temp)
// {
//     cout<< temp->data <<" ";
//     temp = temp->next;
// }
// cout<< endl;
// cout<< "length :"<< lenLL(head)<<endl;
// cout<< checkpresent(head, 38);
printele(head);
cout<<endl;
// head =  removehead(head);
// printele(head);
// head = removetail(head);
// head =  removek(head,8);
// head = removebyele(head,25);
// head = insertAtHead(head, 150);
// head = insertTail(head,100);
// head = insertEleK(head,6699,5);
head = inserteleBefore(head, 1007,25);

printele(head);

    return 0;
}