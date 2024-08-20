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



Node* oddEvenList(Node* head)
{
if(head == NULL || head->next == NULL)
{
    return head;
}
Node * even = head->next;
Node * odd = head;
Node * evenHead = head->next;

while(even != NULL && even->next != NULL)
{
    odd->next = odd->next->next;
    even->next = even->next->next;

    odd = odd->next;
    even = even->next;

}
odd->next = evenHead;
return head;
}

Node* removeKthNode(Node* head, int k)
{
Node * fast = head;
Node * slow= head;
for(int i=0;i<k;i++) fast=fast->next;
if(fast== NULL)
{
    Node * newhead = head;
    newhead = newhead->next;
    free (head);
    return newhead;
}
while(fast->next!=NULL)
{
    slow= slow->next;
    fast= fast->next;
}

Node * delnode = slow->next;
slow->next= slow->next->next;
free(delnode);

return head;
}



Node* deleteMiddle(Node* head){
if(head == NULL || head->next== NULL)
{
   // free(head);
    return NULL;
}
Node * slow=head;
Node * fast = head->next->next;
while(fast != NULL && fast->next != NULL )
{
    slow = slow->next;
    fast = fast->next->next;
}
Node * delnode = slow->next;
slow->next = slow->next->next;
free(delnode);
return head;


}

Node *sortLL(Node *head)
{
if(head == NULL || head->next == NULL)
{
	return head;
}
vector<int> v;
Node* temp = head;
while(temp != NULL)
{
	v.push_back(temp->data);
	temp = temp ->next;
}
sort(v.begin(), v.end());
temp = head;
int cnt=0;
while(temp != NULL)
{
	temp->data = v[cnt];
	temp = temp ->next;
	cnt++;
}
return head;
}
Node * mergesortedll(Node * left, Node * right)
{
	Node * dummyHead = new Node(-1);
	Node * temp = dummyHead;

	while(left != NULL && right != NULL)
	{
		if(left->data >= right->data)
		{
			temp->next = right;
			right = right->next;
		}
		else
		{
			temp->next= left;
			left = left->next;
		}
		temp= temp->next;
	}

	if(left != NULL)
	{
		temp->next= left;
	}
	else
	{
		temp->next = right;
	}

	return dummyHead->next;
}

Node * findmiddle(Node * head)
{
	if(head == NULL || head->next != NULL)
	{
		return head;
	}
	Node * slow= head;
	Node * fast= head->next;
	while(fast != NULL && fast->next!= NULL)
	{
		slow = slow->next;
		fast= fast->next->next;
	}
	return slow;
}

Node *sortLL(Node *head)
{
if(head == NULL || head->next ==NULL)
{
	return head;
}

Node * middle = findmiddle(head);
Node * right = middle->next;
middle->next= NULL;
Node * left = head;

left = sortLL(left);
right = sortLL(right);

return mergesortedll(left, right);

}

Node* sortList(Node *head){
if(head == NULL || head->next == NULL)
{
    return head;
}
Node * zerohead = new Node(-1);
Node * onehead = new Node(-1);
Node * twohead = new Node (-1);
Node * zero = zerohead;
Node * one = onehead;
Node * two = twohead;
Node * temp = head;

while(temp != NULL)
{
    if(temp->data == 0)
    {
        zero->next = temp;
        zero = temp;
    }
    else if (temp->data==1)
    {
        one->next = temp;
        one= temp;
    }
    else{
        two->next = temp;
        two= temp;
    }
    temp = temp->next;
}

zero->next = (onehead->next) ? (onehead->next) : twohead->next;
one->next = twohead->next;
two->next= NULL;

delete (zerohead);
delete (onehead);
delete (twohead);

return zerohead->next;


}
#include <bits/stdc++.h>
using namespace std;
Node* findIntersection(Node *firstHead, Node *secondHead)
{
 map<Node*, int> mpp;
 Node * temp1 = firstHead;
 while(temp1 != NULL)
 {
     mpp[temp1]=1;
     temp1= temp1->next;
 }
 Node * temp2 = secondHead;
 while(temp2 != NULL)
 {
     if(mpp.find(temp2) != mpp.end()) return temp2;
     temp2= temp2->next;
 }
 return NULL;
}

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    if(firstHead == NULL || secondHead == NULL)
    {
        return NULL;
    }
    Node * temp1 = firstHead;
    Node * temp2 = secondHead;
    while(temp1 != temp2)
    {
        temp2= temp2->next;
        temp1= temp1->next;
        if(temp1 == temp2) return temp1;
        if(temp2 == NULL) temp2 = firstHead;
        if(temp1 == NULL) temp1 = secondHead;
    }
    return  temp2;
}
Node * reversell(Node * head)
{
    if(head== NULL || head->next == NULL) return head;

    Node * newhead= reversell(head->next);
    Node * front = head->next;
    front->next = head;
    head->next = NULL;
    return newhead; 
}

Node *addOne(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node *revhead = reversell(head);
    Node * temp = revhead;
    int cnt =1;
    while(temp!= NULL)
    {
        temp->data = temp->data +1;
        if(temp->data ==10)
        {
            temp->data =0;
            cnt=1;
        }
        else{
            cnt=0;
            break;
        }
        temp = temp->next;
    }
    if(cnt==1)
    {
        head = reversell(revhead);
        Node * newnode = new Node(1,head);
        return newnode;
    }

        head = reversell(revhead);
        return head;
}
int helperadd(Node * temp)
{
    if (temp ==NULL) return 1;
    int carry = helperadd(temp->next);
    temp->data= temp->data + carry;
    if(temp->data <10)
    {
        return  0;
    }
    temp->data = 0;
    return 1;
}
Node *addOne(Node *head)
{
    int carry = helperadd(head);
    if(carry ==1)
    {
        Node * one = new Node(1,head);
        return  one;
    }
    return head;
}


Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node * dummynode = new Node(-1);
    Node * curr = dummynode;
    Node * temp1 = num1;
    Node * temp2 = num2;
    int carry=0;
    while(temp1 !=NULL || temp2 != NULL)
    {
        int sum=carry;

        if(temp1) sum = sum+ temp1->data;
        if(temp2) sum = sum + temp2->data;
        Node * NewNode = new Node(sum%10);
        carry = sum/10;
        curr->next = NewNode;
        curr = NewNode;

        if(temp2) temp2 = temp2->next;
        if(temp1) temp1 = temp1->next;

    }
    if(carry)
    {
        Node * NewNode = new Node(carry);
        curr->next = NewNode;
    }
    return dummynode->next;
}
