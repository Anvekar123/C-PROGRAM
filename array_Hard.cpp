   #include<bits/stdc++.h>
   using namespace std;
   
    vector<int> generaterow(int row)
    {
        vector<int> ansrow;
        long long ans=1;
        ansrow.push_back(ans);
        for(int i=1;i<row;i++)
        {
            ans= ans*(row-i);
            ans= ans/i;
            ansrow.push_back(ans);
        } 
        return ansrow;

    }
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++)
        {
            ans.push_back(generaterow(i));
        }
        return ans;
        
    }

vector<int> majorityElement(vector<int>& nums) {
        vector<int> ls;
        int mm = (nums.size()/3)+1;
        map<int, int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]]==mm)
            {
                ls.push_back(nums[i]);
            }
            if(ls.size()==2) break;
        }
        sort(ls.begin(), ls.end());
        return ls;
        
    }

vector<vector<int>> triplet(int n, vector<int> &arr)
{
vector<vector<int>>ans;
sort(arr.begin(), arr.end());
for(int i=0;i<n;i++)
{
    if(i>0 && arr[i]==arr[i-1])continue;
    int j=i+1;
    int k=n-1;
    while(j<k)
    {
        int sum= arr[i]+arr[j]+arr[k];
        if(sum>0)
        {
            k--;
        }
        else if(sum<0)
        {
            j++;
        }
        else{
            vector<int> temp ={arr[i],arr[j],arr[k]};
            ans.push_back(temp);
            j++;
            k--;
            while(j<k && arr[j]==arr[j-1])j++;
            while(j<k && arr[k]==arr[k+1]) k--;
        }
    }
}
return ans;
}

#include <bits/stdc++.h>
vector<vector<int>> fourSum(vector<int>& nums, int target) {
vector<vector<int>> ans;
sort(nums.begin(), nums.end());
int n= nums.size();
for(int i=0;i<n;i++)
{
    if(i>0 && nums[i]==nums[i-1])continue;
    for (int j = i + 1; j < n; j++) {
      if (j > i + 1 && nums[j] == nums[j - 1])
        continue;

      int k = j + 1;
      int l = n - 1;
      while (k < l)
    {
        long long sum= nums[i];
        sum+=nums[j];
        sum+=nums[k];
        sum+=nums[l];
        
        if(sum==target)
        {
            vector<int> temp ={nums[i], nums[j], nums[k], nums[l]};
            ans.push_back(temp);
            k++;
            l--;
            while(k<l && nums[k]==nums[k-1]) k++;
            while(k<l && nums[l]==nums[l+1]) l--;
        }
        else if(sum >target) l--;
        else k++;
    }
    }
}



return ans;
}
int maxLen(vector<int>& arr, int n) {
    int maxi=0;
    int sum=0;
    unordered_map<int, int>  mpp;
    for(int i=0;i<n;i++)
    {
        sum+= arr[i];
        if(sum==0)
        {
            maxi=i+1;
        }
        else
        {
            if(mpp.find(sum) != mpp.end())
            {
                maxi = max(maxi, i-mpp[sum]);
            }
            else
            {
                mpp[sum]=i;
            }
        }
    }
    return maxi;
    
}
int subarraysWithSumK(vector < int >a, int k) {
int xr=0;
map<int, int> mpp;
mpp[xr]++;
int cnt=0;
for(int i=0;i<a.size();i++)
{
    xr=xr^a[i];
    int x = xr^k;
    cnt+=mpp[x];
    mpp[xr]++;
}
return cnt;

}

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	
	vector<vector<int>> ans;
	for(int i=0;i<arr.size();i++)
	{
		if(ans.empty() || ans.back()[1]< arr[i][0])
		{
			ans.push_back(arr[i]);
		}
		else {
			ans.back()[1]= max(ans.back()[1], arr[i][1] );
		}
	}
	return ans;
	
}
