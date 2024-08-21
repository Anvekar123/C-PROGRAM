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



Node* reverseDLL(Node* head)
{   
if(head ==NULL || head->next == NULL)
{
    return head;
}

Node * currrent = head;
Node * last = NULL;

while(currrent != NULL)
{
    last = currrent->prev;
    currrent->prev = currrent->next;
    currrent->next = last;
    currrent = currrent->prev;
}

return last->prev;

}
Node *findMiddle(Node *head) {
    // Write your code here
    Node * slow = head;
    Node * fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast= fast->next->next;
    }

    return slow;
}

Node* reverseLinkedList(Node *head)
{
    // Node * front = NULL;
    // Node * prev = NULL;
    // Node * temp = head;
    // while(temp != NULL)
    // {
    //     front = temp->next;
    //     temp->next = prev;
    //     prev= temp;
    //     temp = front;
    // }
    // return prev;
if(head== NULL || head->next == NULL)
{
    return head;
}
Node * newHead = reverseLinkedList(head->next);
Node * front = head->next;
front->next= head;
head->next =  NULL;
return newHead;
}
bool detectCycle(Node *head)
{
    Node * slow = head;
    Node * fast = head;
    while(fast!=NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}

Node *firstNode(Node *head)
{
    Node * slow= head;
    Node * fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            slow = head;
            while (slow != fast) {
              slow = slow->next;
              fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}

int looplen(Node * slow, Node * fast )
{
    int cnt =1;
    fast= fast->next;
    while(slow != fast)
    {
        fast= fast->next;
        cnt++;
    }
    return cnt;
}
int lengthOfLoop(Node *head) {
Node * slow= head;
Node * fast = head;
while(fast != NULL && fast->next != NULL)
{
    slow = slow->next;
    fast= fast->next->next;
    if(slow == fast)
    {
        return looplen(slow, fast);
    }
}
return 0;
}


Node * reverseHead(Node * head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    Node * newHead = reverseHead(head->next);
    Node * front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}

bool isPalindrome(Node *head)
{
if(head== NULL || head->next == NULL) return true;

Node * slow= head;
Node * fast = head;

while(fast->next != NULL && fast->next->next != NULL)
{
    slow = slow->next;
    fast= fast->next->next;
}
Node * newHead= reverseHead(slow->next);
Node * fst = head;
Node * snd = newHead;

while(snd != NULL)
{
    if(fst->data != snd->data)
    {
        reverseHead(newHead);
        return false;
    }
    fst= fst->next;
    snd = snd->next;
}

reverseHead(newHead);
return true;
}

vector<pair<int, int>> findPairs(Node* head, int k)
{
    // if(head == NULL)
    // {
    //     return head;
    // }
    Node * left=head;
    Node * right = tail(head);
    vector<pair<int,int>> ans;
    while(left->data < right->data)
    {
        if(left->data + right->data == k)
        {
            ans.push_back({left->data,right->data});
            left=left->next;
            right= right->prev;
        }
        else if (left->data + right->data > k)
        {
            right = right->prev;
        }
        else{
            left= left->next;
        }
    }
    return  ans;
}
Node * removeDuplicates(Node *head)
{
Node * temp = head;
while(temp!= NULL && temp->next != NULL)
{
    Node * nextnode = temp->next;
    while(nextnode!= NULL && nextnode->data == temp->data)
    {
        Node * duplicate = nextnode;
        nextnode= nextnode->next;
        free(duplicate);
    } 
    if(nextnode!= NULL) nextnode->prev = temp;
    temp->next= nextnode;
    temp= temp->next;
}
return head;
}
Node * func(Node * head, int k)

{
     int cnt =1;
     Node * temp = head;
     while(k>1)
     {
          temp = temp->next;
          k--;
     }
     return temp;
}

Node *rotate(Node *head, int k) {
     if(head == NULL || k==0) return head;
Node * tail= head;
int len=1;
while(tail->next!=NULL)
{
     tail = tail->next;
     len++;
}
 k=k%len;
 if(k == 0) return head;
 tail->next = head;
 Node * newlast = func(head, len-k);
 head = newlast->next;
 newlast->next = NULL;
 return head;
}
Node * merge(Node * list1, Node * list2)
{
	Node * dummynode = new Node(-1);
	Node * curr = dummynode;
	while(list1!= NULL && list2!=NULL)
	{
		if(list1->data < list2->data)
		{
			curr->next = NULL;
			curr->child = list1;
			list1= list1->child;
			curr = curr->child;
		}
		else
		{
			curr->next = NULL;
			curr->child = list2;
			list2=list2->child;
			curr = curr->child;
		}
	}
	if(list1) curr->child = list1;
	else curr->child = list2;
	return dummynode->child;
}
Node* flattenLinkedList(Node* head) 
{
        if (head == NULL || head->next == NULL) {
                return head;
        }
		Node * mergehead = flattenLinkedList(head->next);
		head = merge(head, mergehead);
		return head;
}
void insertnode(Node * head)
{
	Node * temp = head;
	while(temp!= NULL)
	{
		Node * copy = new Node(temp->data);
		Node * nextele = temp->next;
		copy->next = nextele;
		temp->next = copy;
		temp = nextele;
	}
}
void connectrandom(Node * head)
{
	Node * temp	 = head;
	while(temp!=NULL)
	{
		Node * copy = temp->next;
		if(temp->random) copy->random = temp->random->next;
		else copy->random = NULL;
		temp= temp->next->next;
	}
}
Node * deepcopy(Node * head)
{
	Node * temp = head;
	Node * dummy = new Node(-1);
	Node * res = dummy;
	while(temp != NULL)
	{
		res->next = temp->next;
		res= temp->next;
		temp->next = temp->next->next;
		temp = temp->next;
	}
	return dummy->next;
}
Node *cloneLL(Node *head){
	insertnode(head);
	connectrandom(head);
	return deepcopy(head);
}
