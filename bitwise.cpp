#include<bits/stdc++.h>
using namespace std;
string convertBinary(int n )
{
    string st = "";
    while(n!=0)
    {
        if(n%2==1) st+="1";
        else st+="0";
        n=n/2;
    }
    reverse(st.begin(),st.end());
    return st;
}

int convertToDecimal(string st)
{
    int num =0, p2=1;
    int len = st.size();
    for(int i=len-1;i>=0;i--)
    {
        if(st[i]=='1')
        {
            num= num + p2;
        }
        p2= p2*2;
    }
    return num;

}
int CountNoOnes(int x)
{
    // int cnt=0;
    // while(x!=0)
    // {
    //     cnt += x&1;
    //     x=x>>1;
    // }
    // return cnt;


    // ---- BETTER ONE -----
    int cnt =0;
    while(x!=0)
    {
        x = x & (x-1);
        cnt++;
    }
    return cnt;

}
int main()
{
    // int a=5;
    // int b =6;
    // cout<<"a :"<<a<<" b :"<<b<<endl;
    // a = a^b;
    // b= a^b;
    // a= a^b;
    // cout<<"a :"<<a<<" b :"<<b<<endl;

    // int x =13;
    // cout<< "x: "<<x << " BIN :"<<convertBinary(x)<<endl;
    // string y= "1101";
    // cout<< "y: "<<y << " dec :"<<convertToDecimal(y)<<endl;
// int x=13;
// int i=2;
// if(((1<<i)&x) != 0) cout<< 1;
// else cout<<0;

// if(((x>>i)&1) != 0) cout<< 1;
// else cout<<0;

// int x =13;
// int i=2;
// cout<< (x | (1<<i));
// cout<< (x & (~(1<<i)));

// x =84;
// cout<<(x &(x-1));

// int x = 16;
// if((x &(x-1))==0) cout<< 1;
// else cout<<0;
cout<< CountNoOnes(15);
    return 0;
}