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
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=0;
        for(int i=m;i<n+m;i++)
        {
            if(nums1[i]!=0)continue;
            else
            {
                nums1[i]= nums2[k];
                k++;
            }
        }
        sort(nums1.begin(), nums1.end());
        
    }

    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        long long sn1= (n*(n+1))/2;
        long long sn2 = (n*(n+1)*(2*n+1))/6;
        long long s1=0,s2=0;
        for(int i=0;i<n;i++)
        {
            s1+=arr[i];
            s2 += arr[i]*arr[i];
        }
        long long val1 =  s1 - sn1;
        long long val2 = s2-sn2;
        val2 = val2/val1;
        long long x  = (val1 + val2)/2;
        long long y = x-val1;
            
            return {(int)x, (int)y};
        }


int merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //Modification 1: cnt variable to count the pairs:
    int cnt = 0;

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1); //Modification 2
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return cnt; // Modification 3
}

int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);  // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += merge(arr, low, mid, high);  // merging sorted halves
    return cnt;
}
#include <bits/stdc++.h>
using namespace  std;
void Merge(vector<int> &arr, int low, int mid, int high)
{
    int left =low;
    int right = mid+1;
    vector<int> temp;
    while(left<=mid && right <=high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++)
    {
        arr[i]= temp[i-low];
    }
}

int countpair(vector<int> &arr, int low, int mid, int high)
{
    int cnt=0;
    int right= mid+1;
    for(int i=low;i<=mid;i++)
    {
        while(right<=high && arr[i]> 2*arr[right]) right++;
        cnt+= (right - (mid+1));
    }

    return cnt;
}

int  mergesort(vector<int> &arr, int low, int high)
{
    int cnt=0;
    if(low>= high) return cnt;
    int mid = (low+high)/2;
    cnt+=mergesort(arr, low, mid);
    cnt+=mergesort(arr,mid+1,high);
    cnt+=countpair(arr, low, mid, high);
    Merge(arr,low,mid,high);

    return cnt;
}



int team(vector <int> & arr, int n)
{
    return mergesort(arr, 0, n-1);
}

#include<vector>
#include <bits/stdc++.h>
int subarrayWithMaxProduct(vector<int> &arr){
int pre =1;
int suf= 1;
int maxi = INT_MIN;
int n = arr.size();

for(int i=0;i<n;i++)
{
	if(suf ==0) suf =1;
	if(pre == 0) pre = 1;
	pre = pre*arr[i];
	suf  = suf*arr[n-1-i];
	maxi = max(maxi, max(suf,pre));
}
return maxi;


}
