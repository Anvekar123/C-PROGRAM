/*
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        int arr[2];
        arr[0]=a+1;
        arr[1]=b+2;
        return ;
    }
};
int main(){

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        int arr[2];
        arr[0]=a+1;
        arr[1]=b+2;
        return arr;
    }
};
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
// void printpatten1(int n){
//     for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j <= i; j++)
//     {
//         cout<<"* ";
//     }
//     cout<<"\n";  
//   }
// }

// void printpatten2(int n){
//     for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j <= i; j++)
//     {
//         cout<<"* ";
//     }
//     cout<<"\n";   
//   }
// }

// void printpatten3(int n) {
//     for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//         cout<<j<<" ";
//     }
//     cout<<"\n";
//   }
//   }

// void printpatten4(int n) {
//     for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//         cout<<i<<" ";
//     }
//     cout<<"\n";
//   }
//   }

// void printpatten5(int n) {
//     for (int i = 0; i < n; i++)
//   {
//     for (int j = 1; j <n-i ; j++)
//     {
//         cout<<"* ";
//     }
//     cout<<"\n";
//   }
//   }

// void printpatten6(int n) {
//     for (int i = 0; i < n; i++)
//   {
//     for (int j = 1; j <=n-i ; j++)
//     {
//         cout<<j<<" ";
//     }
//     cout<<"\n";
//   }
//   }

// void printpatten7(int n) {
//     for (int i = 0; i < n; i++)
//   {
//    for (int j = 0; j < n-i-1; j++)
//    {
//     cout<<" ";
//    }
//    for (int k = 0; k < i*2+1; k++)
//    {
//     cout<<"*";
//    }
//     for (int j = 0; j < n-i-1; j++)
//    {
//     cout<<" ";
//    }
//     cout<<"\n";
//   }
//   }


// void printpatten8(int n){
// for (int i = 0; i <n; i++)
// {
//     for (int j = 0; j < i; j++)
//     {
//       cout<<" ";
//     }
//     for (int j = 0; j < 2*n-(2*i+1); j++)
//     {
//       cout<<"*";
//     }
//     for (int j = 0; j < i; j++)
//     {
//       cout<<" ";
//     }
//     cout<<"\n";
// }
//}

// void printpatten9(int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//       for (int j = 0; j < n-i-1; j++)
//       {
//           cout<<" ";
//       }
//       for (int j = 0; j < 2*i+1; j++)
//       {
//           cout<<"*";
//       }
//       for (int j = 0; j < n-i-1; j++)
//       {
//           cout<<" ";
//       }
//             cout<<"\n";      
// //   }
//   for (int i = 0; i < n; i++)
//   {
//       for (int j = 0; j < i; j++)
//       {
//           cout<<" ";
//       }
//       for (int j = 0; j <  2*n-(2*i+1); j++)
//       {
//           cout<<"*";
//       }
//       for (int j = 0; j <i; j++)
//       {
//           cout<<" ";
//       }
//       cout<<"\n";
//         }
// }

// void printpatten10(int n){
//   for (int i = 0; i < n; i++)
//   {
//       for (int j = 0; j <=i; j++)
//       {
//           cout<<"*";
//       }
//       cout<<"\n";   
//   }
//     for (int i = n-2; i >= 0; i--)
//   {
//       for (int j = 0; j <=i; j++)
//       {
//           cout<<"*";
//       }
//         cout<<"\n";
//   } 
// }

// void printpatten11(int n){
// for(int i =0;i<n;i++){
//   int toggle=1;
//   for(int j=0;j<=i;j++)
//   {
//     if(i%2==0){ 
//     cout<<toggle;
//     toggle=!toggle;
//     }
//     else{
//     toggle=!toggle;
//       cout<<toggle;
//     }
//   }
//   cout<<"\n";
// }
// }

// void printpatten12(int n)
// {
// for (int i = 1; i <= n; i++)
// {
//     for (int k = 1; k <=i; k++)
//     {
//       cout<<k<<" ";
//     }
//     for (int k = 1; k <=(2*n-2*i); k++)
//     {
//       cout<<" ";
//     }
//     for (int k = i; k >=1; k--)
//     {
//       cout<<k<<" ";
//     }
//     cout<<"\n"; 
// }
// }

// void printpatten13(int n){
// int no=1;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j <=i; j++)
//     {
//         cout<<no<<" ";
//         no++;
//     }
//     cout<<"\n";  
// }
// }

// void printpatten14(int n){
//   for (int i = 0; i < n; i++)
//   {
//       for (char j = 'A'; j <='A'+i; j++)
//       {
//           cout<<j<<" ";
//       }
//       cout<<"\n";
//   } 
// }

// void printpatten15(int n){
//   for (int i = n; i >= 0; i--)
//   {
//       for (char j = 'A'; j <='A'+i; j++)
//       {
//           cout<<j<<" ";
//       }
//       cout<<"\n";
//   } 
// }

// void printpatten16(int n){
//   for (int i = 0; i < n; i++)
//   {
//       for (int j = 0; j <=i; j++)
//       {
//           cout<<(char)('A'+i)<<" ";
//       }
//       cout<<"\n";
//   } 
// }

// void printpatten17(int n){
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j <n-i-1; j++)
//     {
//       cout<<" ";
//     }
//     char ch ='A';
//     int breakpoint = (2*i)/2;
//     for (int j = 0; j <2*i+1; j++)
//     {
//       if(j<breakpoint){
//       cout<<ch++;
//       }
//       else{
//       cout<<ch--;
//       }
//     }
//     for (int j = 0; j <n-i-1; j++)
//     {
//       cout<<" ";
//     }
//     cout<<"\n";   
// }
// }

// void printpatten18(int n)
// {
// for (int i = 0; i < n; i++)
// {
//   char ch='A';
//   ch= ch+n-i-1;
//     for (int j = 0; j <=i; j++)
//     {
//         cout<<ch++<<" ";
//     }
//     cout<<"\n";
// }
// }

// void printpatten19(int n)
// {
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n-i; j++)
//     {
//       cout<<"*"<<" ";
//     }
//     for (int j = 0; j < 4*i; j++)
//     {
//       cout<<" ";
//     }
//     for (int j = 0; j < n-i; j++)
//     {
//       cout<<"* ";
//     }
//     cout<<"\n";    
// }
// int space=2*n-2;
// for (int i = 0; i < n; i++)
// {
//       for (int j = 0; j <=i; j++)
//     {
//       cout<<"* ";
//     }
//     for (int j = 0; j <space*2; j++)
//     {
//       cout<<" ";
//     }
//        for (int j = 0; j <=i; j++)
//     {
//       cout<<"* ";
//     }
//     cout<<"\n";
//     space-=2;
// }
// }

// void printpatten20(int n){
//   int space=2*n-2;
// for (int i = 1; i <=n*2-1; i++)
// {
//   int star=i;
//     if(i>n)star=2*n-i;
//     for (int j = 1; j <=star; j++)
//     {
//         cout<<"*";
//     }
//     for (int j = 1; j <= space; j++)
//     {
//       cout<<" ";
//     }
//     for (int j = 1; j <=star; j++)
//     {
//         cout<<"*";
//     }
//     if(i<n){space-=2;}
//     else{ space+=2;}
//     cout<<"\n";
// }
//}

// void printpatten21(int n){
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       if(i==0||i==n-1|| j==0||j==n-1) cout<<"*";
//       else cout<<" ";
//     }
//     cout<<"\n";
//   } 
// }

void printpatten22(int n){
for (int i = 0; i < 2*n-1; i++)
{
    for (int j = 0; j < 2*n-1; j++)
    {
        int top=i;
        int left=j;
        int down= 2*n-2-i;
        int right = 2*n-2-j;
        cout<<(n-min(min(right,left),min(down,top)));
    }
    cout<<"\n";
}


}

int main(){
int n,t;
cout<<"no of time u want to check:"<<"\n";
  cin>>t;
  for (int i = 0; i < t; i++)
  {
 cout<<"enter a no"<<"\n";
 cin>>n;
 cout<<"\n";
 printpatten22(n);

  }
  
  
  return 0 ;
}