// hashing takes log(n) while using MAP
// where as unordered map takes O(1) and worst which is rare O(n)
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"size of arr"<<"\n";
    cin>>n;
    int arr[n];
    cout<<"give input"<<"\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //precompute hash table is 13
    int hash[13]={0};

    for (int i = 0; i < n; i++)
    {
            hash[arr[i]]+=1;
    }
    int q;
    cout<<"no of time  u want to check:"<<"\n";
    cin>>q;
    while (q--)
    {
        int no;
        cin>>no;
        cout<<"the repts "<<hash[no]<<"\n";
    }
    return  0;
}
*/

// character hashing
/*
#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cout<<"give the string"<<"\n";
    cin>>s;
    // perform hashing in total there are 256 char so
    int hashh[256]={0};
    for (int i = 0; i < s.size(); i++)
    {
        hashh[s[i]]++;
    }
    int q;
    cout<<"no of times you want to check"<<"\n";
    cin>>q;
    while (q--)
    {
        char ch;
        cin>>ch;
        cout<<"the char repts: "<<hashh[ch]<<"\n";
    }
    
    
    return 0;
}
*/

//using MAPS
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no of element"<<"\n";
    cin>>n;
    int arr[n];
    map<int, int> mpp;
    //unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++; 
            
    }
    int q;
    cout<<"the no of time you want ot check:"<< "\n";
    cin>>q;
    while (q--)
    {
        int no;
        cin>>no;
        cout<<"the no rpts "<<mpp[no]<<"\n";
    }
    


    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
void frequencyCount(int arr[],int N, int P)
    { int cnt;
        for(int i=1;i<=P;i++)
        {
           cnt=0;
          for(int j=0;j<N;j++)
        {
            if(i==arr[j]) cnt++;
        }
         arr[i]=cnt;
        }
        
    };

int main()
{
int arr[]={2, 3, 3, 1, 1};
frequencyCount(arr,5,5);
for (int i = 0; i < 5; i++)
{
        cout<<arr[i]<<" ";
}

    return  0;
}