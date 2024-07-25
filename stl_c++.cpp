/// STL- standered template library

#include<bits/stdc++.h>
using namespace std;

void explainPair(){

pair<int, int> p= {1,3};
cout<<p.first<<" "<<p.second;
pair<int, pair<int,int>> p={1,{3,4}};

pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    
}

void explainVector(){

vector<int> v;
v.push_back(1);
v.emplace_back(2);

vector<pair<int, int>> vec;

vec.push_back({1,2}); /// sintax for pushback
vec.emplace_back(1,2);

vector<int> v(5,100); // {100,100,100,100,100}

vector<int> v1(5,20);

vector<int> v2(v1); /// copy one to another

// to access the element in the vector
// 1. v[0]=88;                {88,3,48,2,5,7}
// or by sing iterator
//syntax:
vector<int>:: iterator it=v.begin(); // here it points to the  memory location of 1st element
it++;
cout<<*(it)<<" "; // printing value at address

vector<int>::iterator it = v.end(); // it points after the end vector {88,3,48,2,5,7}"^" <- here
//if you want to point to last element then it-- need to be done; 

cout<<v[0]<<" "<<v.at(0); // 1st memory then value at memory
cout<<v.back() <<" "; // print last value

for(vector<int>::iterator it= v.begin();it!=v.end();it++)
{
    cout<<*(it)<<" ";
}
// shot method to get the loop

for (auto it = v.begin(); it!=v.end(); it++){ // here it automatically asign the data 
    cout<<*(it)<<" ";
}
// another method to print

for(auto it : v){
  cout<<it<<" ";
}
// to earse elements from a vector
//{10,20,30,40}
v.erase(v.begin()+1); //here it will remove 20 and then reshuffle it {10,30,40}
// if you want to delete series of element:
//{10,20,30,40,50}
v.erase(v.begin()+1, v.begin()+4);  // {10,50} [start,end)

// insert function

vector<int>v(2,100); //{100,100}
v.insert(v.begin(),300); //{300,100,100}
v.insert(v.begin()+1,2,10); //{300, ,10,100,100}

// copy entire vector to another
vector<int> copy(2,50); //{50,50}
v.insert(v.begin(), copy.begin(), copy.end()); // {50,50, 300, 10,10,100,100}
// size //{50,50}
cout<<v.size(); // 2
//{50,50}
v.pop_back(); //{50}

// v1{10,20}
// v2{30,40}
v1.swap(v2);  // v2{10,20}---  v1{30,40}

v.clear(); // {}--> delets all the elements in the vector
}

void explainList()
{
 list<int> ls;
 ls.push_back(2);//{2}
 ls.emplace_back(4);// {2,4}
ls.emplace_front(8);// {8,2,4}
}

void explainDeque(){
    // same as list vectors
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(4);// {2,4}
    dq.emplace_front(8);// {8,2,4}

    dq.pop_back(); //{8,2}
    dq.pop_front(); // {2}

}
 
//  --------------------------
 
// ALL THE OPERATION ARE HAPPENING IN CONSTANT TIME O(1)

/*
    push -> log n
    top  -> o(1)
    pop  -> log n
*/
// ----------------------------

void explainStack()
{
    // LIFO - stack follows last in  first out
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(4); //{4,3,2,1}
    st.emplace(5);// {5,4,3,2,1}
    
    cout<<st.top(); // print 5

    st.pop(); // it will remove 5 from stack {4,3,2,1}

    cout<<st.top(); // print 4
    cout<<st.size(); //4
    cout<< st.empty(); // true or false
    stack<int> s1,s2;
    s1.swap(s2);
}

void explainQueue()
  {
    // queue-- FIFO- first in first out
    queue<int> q;
    q.push(1); // {1}
    q.push(2); //{1,2}
    q.emplace(3); // {1,2,3}

    q.back()+=5; //3+5

    cout<< q.back(); //8
    cout<<q.front();// 1
    
    q.pop(); // {2,3}
    cout<< q.front(); // 2
  }

void explainPQ() // priority queue
{
    // MaxHeap-> highest value goes to the top
    priority_queue<int>pq;
    pq.push(5); //{5}
    pq.push(4); // {5,4}
    pq.push(9);// {9,5,4}  largest value goes to top

    cout<< pq.top(); // ptint 9
    pq.pop();// removes 8

    // minheap -> lowest value goes to the top
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5); //{5}
    pq.push(4); // {4,5}
    pq.push(9);// {4,5,9}  smallest value goes to top
}

// everything is in order and only unique element

void explainSet(){

set<int> st;
st.insert(1);
st.insert(2); //{1,2}
st.insert(2); //{1,2}
st.emplace(4); // {1,2,4}
st.emplace(3); //{1,2,3,4}

//{1,2,3,4}
auto it = st.find(3); // it will return an iterator

//{1,2,3,4}

auto it = st.find(6); // it will return the st.end() --{1,2,3,4} |<- it will point here

st.erase(2); //{1,3,4}
st.erase(it);// element or iterator {1,3,4}

//{1,2,3,4,5,6}

auto it1= st.find(2);
auto it2= st.find(5);
st.erase(it1,it2); // {1,5,6}

int cnt = st.count(1); // if present will return 1 or else return 0

}
// this will store elements in random order 
void explainMultiset(){
  multiset<int> ms;
  ms.insert(1); //{1}
  ms.insert(1); //{1,1}
  ms.insert(1); //{1,1,1}

  ms.erase(1); // it will remove all the elements

  int cnt = ms.count(1); // count no of ones
  ms.erase(ms.find(1)); // this will only delete 1 element
  ms.erase(ms.find(1), ms.find(1)+2); // this delete 1 elements  element

}

// this will store elements in random order 
// un_order_set
void explainUset(){
  // here lower and upper bound wont work
  // it will store element in random order
  // all unique elemnt
  // o(1)
}

// this is like dictinory in python has key and value
// it stores unique keys in sorted order, values an repeat
void explainMap()
{
   map<int, int> mpp;
   
   map<int , pair<int, int>> mpp;
   //{{1,3}, {6,9}, {6,4}}

   map<pair<int, int>, int> mpp;
   mpp[1]=2;
   mpp.insert({1,3});
   mpp.emplace(3,6);
   mpp[{2,3}]=9;

   for(auto it: mpp){
    cout << it.first <<" "<< it.second <<"\n";
   }

   cout<< mpp[1];
   cout<< mpp[4];
   auto it =mpp.find(3); //it gives the key value 
    cout<< *(it).second;

    auto it = mpp.find(5); // if the element is not there then it points to the end

    auto it = mpp.lower_bound(2); // it will point to this element

   auto it = mpp.upper_bound(2);   // it will pt to heigher value to this
  
  // erase, swap, size, empty, are same

}
void explainMultiple()
{
  // same as map but can store multiple keys duplicates
  // only mpp[key] cannot be used
}

void explainUnorederdMap(){
  //o(1)
  //unique elemnt  in unorederdly manner
}

bool comp(pair<int,int>p1, pair<int, int>p2){
  // eg-
  // sort it according to 2nd element
  //if 2nd element is same, then sort
  // it according to 1st element but in descending
  if(p1.second<p2.second) return true;
  if(p1.second>p2.second) return false;
  if(p1.first > p2.first) return true;
  return false;
}
void extra()
{
  sort(a,a+n); // it can sort arry and vector provide ini and end
  sort(v.begin(), v.end());

  sort(a+2,a+4); // sort only given range
  sort(a, a+n, greater<int>);

  sort(a, a+n, comp); //comp-> is a self written comparator;
  //this is a  bool comp -> as per user needs

  int num=7;
  int cnt = __builtin_popcount(); // this will return binary value in nos(3)--00000111 

  long long = 1585445865896;
  int cnt = __builtin_popcountll();  

  // if you want all the permutation then it do so
  string s="1235"; // but it should be in sorted
  sort(s.begin(), s.end());

  do{
    cout<< s<< endl;
  }while(next_permutation(s.begin(), s.end()));

  int maxi = *max_element(a,a+n);
  int mini = *min_element(a,a+n);
}