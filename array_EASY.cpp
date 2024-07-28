// max size of array in (int main is 10^6),
// in global indexing it can store 10^7

// 1. Largest element in array
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
int arr[10]={5,6,1,4,56,28,43,11,4,15};
int largest_element =arr[0];
for (int i = 0; i < 10; i++)
{
    if (arr[i]>largest_element)
    {
        largest_element=arr[i];
    }
}
cout<<"largest element is: "<<largest_element;


    return 0;
}

*/

//--------------------------------------------------------------------------------------------------------------------
// 2.  2nd largest and 2nd smallest
/*
#include<bits/stdc++.h>
using namespace std;
int SecondLargest(vector<int> &arr, int n)
{
    int largest=arr[0];
    int sec_larg=-1;
    for (int i = 1; i < n; i++)
    {
            if(arr[i]>largest)
            {
                sec_larg=largest;
                largest=arr[i];
            }
            if(arr[i]< largest && arr[i]>sec_larg) 
            {
               sec_larg=arr[i]; 
            }
    }
    return sec_larg;
    
}
int SecondSmallest(vector<int> &arr, int n)
{
    int smallest=arr[0];
    int sec_smallest=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<smallest)
        {
            sec_smallest=smallest;
            smallest=arr[i];
        }
        else if (arr[i]!=smallest && arr[i]<sec_smallest)
        {
            sec_smallest=arr[i];
        }
        
        
    }
    return sec_smallest;
    
}
int main()
{
vector<int> arr={5,6,1,4,56,28,43,11,4,15};
int sec_largest =SecondLargest(arr,arr.size());
int sec_smallest =SecondSmallest(arr,arr.size());

cout<<"2nd  largest element is: "<<sec_largest<<"\n";
cout<<"2nd smallest element is: "<<sec_smallest;

    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    st.insert(1);
    st.insert(7);
    st.insert(8);
    st.insert(4);
    
    return  0;
}
*/
/*
#include<bits/stdc++.h>
//#include<algorithm>
using namespace std;

    void rotate(vector<int>& nums, int k) {
        // int length= nums.size();
        // for(int i=0;i<=k;i++)
        // {
        //     int temp=nums[0];
        //     cout<<temp<<"\n";
        //     for(int j=1;j<length;j++)
        //     {
        //         nums[j-1]=nums[j];
        //         cout<<nums[j-1]<<" ";
        //     }
        //     nums[length-1]=temp;
        //     cout<<nums[length-1];
        //     cout<<"\n";
        // }
            rotate(nums.begin(), nums.begin() + k, nums.end());

        
    }

 
int main()
{
vector<int> arr={1,2,3,4,5,6,7};
int len= arr.size();
//rotate(arr,3);
reverse(arr.begin(),arr.begin()+3);

for (int i = 0; i < arr.size(); i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}
*/

//-----------------------------------------------------------------------------------------

// void moveZeroes(vector<int>& nums) {
//         // vector<int> temp;
//         // for(int i=0;i<nums.size();i++)
//         // {
//         //     if(nums[i]!=0) temp.push_back(nums[i]);
//         // }
//         // for(int i=0;i<temp.size();i++)
//         // {
//         //     nums[i]=temp[i];
//         // }
//         // for(int i=temp.size();i<nums.size();i++)
//         // {
//         //     nums[i]=0;
//         // }
//         int j=-1;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]==0){
//                 j=i;
//                 break;
//             }
//         }
//          if(j==-1) return;

//         for(int i=j;i<nums.size();i++)
//         {
//             if(nums[i]!=0)
//             {
//                 int temp=nums[i];
//                 nums[i]=nums[j];
//                 nums[j]=temp;
//                 j++;
//             }
//         }

//     }



//    int searchInSorted(int arr[], int N, int K) 
//     { 
    
//     for(int i=0;i<N;i++)
//     {
//         if(arr[i]==K) return 1;
//     }
//     return -1;
//     }


    // vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    // {
    //     set<int> st;
    //     vector<int> un;

    //     for(int i=0;i<n;i++)
    //     {
    //         st.insert(arr1[i]);
    //     }
    //   for(int i=0;i<m;i++)
    //     {
    //         st.insert(arr2[i]);
    //     }
        
        
    //     for(auto it:st)
    //     {
     
    //         un.push_back(it);
    //     }
    //     return un;
    
    //  int i=0,j=0;
    //  vector<int> un;
    //  while(i<n && j<m)
    //  {
    //     if(arr1[i]<=arr2[j])
    //     {
    //         if(un.size()==0 || un.back() != arr1[i])
    //         {
    //             un.push_back(arr1[i]);
    //         }
    //         i++;
    //     }
    //     else
    //     {
    //         if(un.size()==0 || un.back() != arr2[j])
    //         {
    //             un.push_back(arr2[j]);
    //         }
    //         j++;
    //     }
    //  }
        
        
    //     while(i<n)
    //     {
    //          if(un.size()==0 || un.back() != arr1[i])
    //         {
    //             un.push_back(arr1[i]);
    //         }
    //         i++;
    //     }   
    //     while(j<m)
    //     {
    //          if(un.size()==0 || un.back() != arr2[j])
    //         {
    //             un.push_back(arr2[j]);
    //         }
    //         j++;
    //     }          
        
    //     return un;
        
    //     }

// #include<bits/stdc++.h>
// using namespace std;
// void intersection(int arr1[], int arr2[], int n, int m)
// {
//     int vis[n]={0};
//     vector<int> inter;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if(arr2[j]==arr1[i] && vis[j]==0)
//             {
//                 inter.push_back(arr2[j]);
//                 vis[j]=1;
//                 break;
//             }
//             if(arr2[j]>arr1[i]) break;
//         }
        
//     }
//     for (auto it: inter)
//     {
//             cout<<it<<" ";
//     }
    
    


// }


// #include<bits/stdc++.h>
// using namespace std;

//     int missingNumber(vector<int>& nums) {
//     int N= nums.size();
//     int hs[N]={0};
//     for(int i=0;i<=N;i++)
//     {
//         hs[nums[i]]=1;
//     }
//     for(int i=0;i<N;i++)
//     {
//         if(hs[i]==0)
//         {
//             return i;
//         }
//     }
//     return 0;
//     }

//     int main()
// {
// vector<int> arr1={3,0,1};
// int arr2[]={1,2,3,3,4,5,6,7};
// int n =missingNumber(arr1);
// cout<<n;

//     return 0;
// }

// to fin ad single no in arr
    // int singleNumber(vector<int>& nums) {
    //     int xr=0;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         xr=xr^nums[i];
    //     }
    //     return xr;
        
    // }