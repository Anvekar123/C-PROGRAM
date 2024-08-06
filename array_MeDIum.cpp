#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        int no = nums[i];
        int more = target - no;
        if (mpp.find(more) != mpp.end())
        {
            return {mpp[more], i};
        }
        mpp[no] = i;
    }
    return {-1, -1};
}

// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
void sortColors(vector<int> &nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {

            swap(nums[mid], nums[low]);
            mid++;
            low++;
        }
        else if (nums[mid] == 1)
            mid++;
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int majorityElement(vector<int> &nums)
{
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second > (nums.size() / 2))
            return it.first;
    }
    return -1;
}


int majorityElement(vector<int> &nums)
{
    int cnt=0, el;
    for (int i = 0; i < nums.size(); i++)
    {
            if(cnt==0)
            {
                cnt=1;
                el=nums[i];
            }
            else if(nums[i]==el)
            {
                cnt++;
            }
            else cnt--;

            int check=0;
            for (int i = 0; i < nums.size(); i++)
            {
                    if(nums[i]==el) check++;
            }
            if (check>(nums.size()/2))
            {
                return el;
            } else{ return -1;
            }
            
    }
    
}

    int maxSubArray(vector<int>& nums) {
     int sum=0;
     int maxi=INT_MIN;
     for (int i = 0; i < nums.size(); i++)
     {
        sum+=nums[i];
        maxi= max(maxi,sum);
        if(sum<0) sum=0;
     }
     return maxi;
        
    }

       int pairWithMaxSum(vector<int> &arr) {
    int sum=0;
    for(int i=0;i<arr.size()-1;i++)
    {
        for(int j=i+1; j<arr.size();j++)
        {
            int temp = arr[i]+ arr[j];
            if(sum<temp && j==i+1) sum=temp;
        }
    }
  return sum;
    }

    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int pos =0;
        int nev=1;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                arr[nev]= nums[i];
                nev+=2;
            }
            else{
                arr[pos]=nums[i];
                pos+=2;
            }
        }
        return arr;

    }
    vector<int> alternateNumbers(vector<int>&a) {
vector <int> pos,nev;
for(int i=0;i<a.size();i++)
{
    if(a[i]>0)
    {
        pos.push_back(a[i]);
    }
    else
    {
        nev.push_back(a[i]);
    }
}
if(pos.size()>nev.size())
{
    for(int i=0;i<nev.size();i++)
    {
        a[i*2]=pos[i];
        a[i*2+1]=nev[i];
    }
    int index= nev.size()*2;
    for(int i=index;i<pos.size();i++)
    {
        a[i]=pos[i];
    }
}
else
{
        for(int i=0;i<pos.size();i++)
    {
        a[i*2]=pos[i];
        a[i*2+1]=nev[i];
    }
    int index= pos.size()*2;
    for(int i=index;i<nev.size();i++)
    {
        a[i]=pos[i];
    }
}
return a;
}

    void nextPermutation(vector<int>& nums) {
        int ind=-1;
        int n= nums.size();
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                ind=i;
                break;
            }
        }
        if(ind==-1) 
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-2;i>ind;i--)
        {
            if(nums[i]>nums[ind])
            {
                swap(nums[i],nums[ind]);
            }
        }
        reverse(nums.begin()+ind,nums.end());
        return;
    }

    vector<int> leaders(int n, int arr[]) {
        vector<int> lead;
        int base=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]>=base)
            {
                lead.push_back(arr[i]);
            }
            base = max(base,arr[i]);
        }
        
        reverse(lead.begin(),lead.end());
        return lead;
        }

        int longestSuccessiveElements(vector<int>&a) {
    sort(a.begin(),a.end());
    int cnt=0;
    int n= a.size();
    int lastSmaller= INT_MIN;
    int Largest=1;
    for(int i=0 ;i<=n;i++)
    {
          if (a[i]-1 == lastSmaller) {
            cnt++;
            lastSmaller=a[i];
          } 
          else if (lastSmaller != a[i])
          {
              cnt=1;
              lastSmaller =a[i];
          }
          Largest= max(Largest,cnt);
    }
    return Largest;
}
