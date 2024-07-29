/*
#include<bits/stdc++.h>
using namespace std;
void printct(int n){
if (n==0) return;
cout<<n<<"\n";
n--;
printct(n);
}
int main()
{
    printct(5);
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
    if(i==0) return;
    cout<<i<<" ";
    print(i-1,n);
}
void sumall(int i, int sum){
    if(i<1) 
    {
        cout<<sum;
        return ;
    }
    sumall(i-1,sum+i);
}
int fact(int n)
{
    if(n==0) return 1;
    return n* fact(n-1);
}
 int main(){
    // sumall(3,0);
   cout<< fact(5);
    return 0;
 }
 
 */
#include<bits/stdc++.h>
using namespace std;
void num(int i, int arr[], int n)
{
    if(i>=n/2) return;
    swap(arr[i],arr[n-1-i]);
    num(i+1,arr,n);
}
bool palin(int i, string &s)
{
    for (int j = 0; j < s.size(); j++)
    {   s[j]=tolower(s[j]);
        if(s[j]<'A')s.erase(s.begin()+j);
        if(s[j]>'Z' && s[j]<'a')s.erase(s.begin()+j);
        if(s[j]>'z')s.erase(s.begin()+j);
    }
    if(i>=s.size()/2) return true;
    if(tolower(s[i] )!= tolower(s[s.size()-1-i])) return false;
    return palin(i+1,s);

    
}
int fibo(int n)
{
    if(n<=1) return 1;
    int lst= fibo(n-1);
    int sec = fibo(n-2);
    return lst+sec;
}
int main()
{
    int arr[]= {1,2,3,4,5,6};
   // num(0,arr,6);
   string s = "A man, a plan, a canal: Panama";
   palin(0,s);

//     for (int j = 0; j < s.size(); j++)
//     {   s[j]=tolower(s[j]);
//         if(s[j]<'A')s.erase(s.begin()+j);
//         if(s[j]>'Z' && s[j]<'a')s.erase(s.begin()+j);
//         if(s[j]>'z')s.erase(s.begin()+j);
//     }
//   cout<<s<<" \n";

   //cout<<palin(0,s);
    //cout<<fibo(4);
    //for (int i = 0; i < 6; i++) cout<<arr[i]<<" ";    
    return 0;
}