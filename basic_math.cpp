/*

#include<bits/stdc++.h>
using namespace std;

int main(){
 // time complexcity is log10(n) when we divide a no by 10
 // log2(n)--- when n/2
 // log5(n)--- when n/5
    int N;
    cout<<"enter a no"<<"\n";
    cin>>N;
    int lst_digit, cnt=0;
    int ori =N;
    while(N>0)
    {
        lst_digit = N%10;
        N=N/10;
        cout<<"dub digit:"<<lst_digit<<"\n";
        if( lst_digit==0){
            continue;}
            if(ori%lst_digit ==0)cnt=cnt+1;
        cout<<"div--"<<ori/lst_digit<<"\n";
        cout<<"count: "<<cnt<<"\n";
        
        
    }
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
 // time complexcity is log10(n) when we divide a no by 10
 // log2(n)--- when n/2
 // log5(n)--- when n/5
    int N;
    cout<<"enter a no"<<"\n";
    cin>>N;
    int x=N;
   int last_no, cnt=0, rev=0,p=0;
    while(x>0)
    {
        last_no = x%10;
        cout<<"x= "<<last_no<<"\n";
        x/=10;
        if(last_no==0 && cnt==0){
            cnt++;
            continue;
        }
        rev=rev*10+last_no;
        p++;
    }
    cout<<rev;
    return 0;
}
*/
/*
#include<bits/stdc++.h>
 using namespace std;
bool comp(int x)
{
    int num=x;
    if (x<0)
    {
            return false;
    }
    int last_no,rev=0;
    while (x>0)
    {
        last_no =x%10;
        x/=10;
        rev=rev*10 +last_no;
        cout<<rev<<"\n";
    }
    if(rev==num) return true;
    return false;

    
    
}
 int main(){
int n;
cout<< " enter a no:"<<"\n";
cin>>n;
cout << "the op is"<<comp(n);
    return 0;
 }
 */

/*
#include<bits/stdc++.h>
using namespace std;

bool astro(int x){
int num=x;
int lst, sum=0;
while (x>0)         
{
    lst = x%10;
    sum=sum+ lst*lst*lst;
    x/=10;
}
if (sum==num)
{
        return true;
}
return false;

}
int main()
{

    int n;
    cout<<"enter a no"<<"\n";
    cin>>n;
    cout<<"the op is: "<<astro(n);
    return 0;
}
*/
/*
#include<bits/stdc++.h>

using namespace std;

// vector<int,int> LcmHcf(int n, int m )
// {
//     vector<int> vn,vm;

// }
int main(){
int n=4;
int sum=0,final_sum=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if(i%j==0) sum=sum+j;
                cout<<sum<<" ";
            }
            cout<<"\n";
            final_sum+=sum;
            sum=0;
             cout<<final_sum<<" "<<"\n";

        }
        cout<<final_sum;

    return 0; 
    }
    */

   /*
   #include<bits/stdc++.h>
   using namespace std;
  
   
    int gcd(int a, int b)
    {
        while (a>0 &&b>0)
        {
            if (a>b) a=a%b;
            if(b>a) b=b%a;
        }
        if(a==0) return b;
        else return a;
        
        
    }
    */
/*
    vector<long long> lcmAndGcd(long long A , long long B) {
    long long int n=A,m=B;
    vector <long long>v;
    while(n>0 && m>0)
    {
        if(n>m) n=n%m;
         else m=m%n;
    }
    if(n==0){
     return {(A*B)/m,m};
    } 
  if(m==0) 
  {
  return {(A*B)/n,n};
  } 
    }

   int main(){
vector<long long> vec= lcmAndGcd(14,8);

for(auto it: vec)
{
    cout<<it<<" ";
}

    return  0;
   }
   */
/*
#include<bits/stdc++.h>
using namespace std;
int jump(int arr[], int n){
    int cnt=0;
for (int i = 0; i < n; i++)
{
    if (arr[i]==0)  return -1;
    if(arr[i]==1)
    {
        cnt++;
        cout<<"at 1--"<<"\n";
        continue;
    }
    if (arr[i]<n-i)
    {
        i+=arr[i]-1;
    }
    cnt++;
    cout<<"at arr[i]<n-i: cnt:"<<arr[i]<<"<"<<n-i<<":"<<cnt<<"\n";

    if (arr[i]>n-i)
    {
        cout<<"Last cnt:"<<cnt<<"\n";
        return cnt;        
    }
    
}


}
int main()
{
//int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}, n = 11;
int arr[] = {0, 10, 20}, n = 3;
//int arr[] = {1, 4, 3, 2, 6, 7}, n = 6;
int x= jump(arr,n);
cout<<"=="<<x;

    return 0;
}
*/