#include <bits/stdc++.h>
using namespace std;
int bs(vector<int> &arr, int low, int high, int target)
{
    if(low> high) return -1;
    int mid = (low+high)/2;
    if(arr[mid]== target) return mid;
    else if(target> arr[mid])
    {
        return bs(arr, mid+1, high,target);
    }

    return bs(arr, low, mid-1, target);
}
int search(vector<int> &nums, int target) {
return bs(nums,0, nums.size()-1, target);
}
int lowerBound(vector<int> arr, int n, int x) {
int low=0, high =n-1;
int ans= n;
while( low <= high)
{
	int mid =  (low+high)/2;
	if(arr[mid]>= x)
	{
		ans= mid;
		high = mid - 1;
	}
	else
	{
		low = mid+1;
	}
}
return ans;
}

int main()
{
    vector <int> ar={1,2,3,4,5,7,8,9};
    int x[]= {1,2,3,4,5,7,8,9};
    int lb = lower_bound(x+2, x+8,5) - x;
    cout<< lb;
}


int upperBound(vector<int> &arr, int x, int n){
int low=0, high =n-1;
int ans=n;
while(low<=high)
{
	int mid = (low+high)/2;
	if(arr[mid]>x)
	{
		ans= mid;
		high= mid-1;
	}
	else
	{
		low=mid+1;
	}
}
return ans;
}

#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& arr, int m)
{
	// int n =  arr.size(); 
	// int low=0, high = n-1;
	// int ans= n;
	// while(low<= high)
	// {
	// 	int mid = (low + high)/2;

	// 	if( arr[mid]>= m)
	// 	{
	// 		ans= mid;
	// 		high = mid-1;
	// 	}
	// 	else{
	// 		low = mid+1;
	// 	}
	// }
	// return ans;
	 int lb = lower_bound(arr.begin(), arr.end(),m)- arr.begin();
	 return lb;
}

int floor(vector<int> &arr, int n, int x)
{
    int low=0, high = n-1;
    int ans=n;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]<=x)
        {
            ans= arr[mid];
            low  = mid+1;
        }
        else
        {
            high= mid-1;
        }
    }
    return ans;
}
pair<int,int> floorandceil(vector<int> &arr, int n, int x)
{   
    pair<int,int> res;
    int f= floor(arr,n,x);
    int c = lower_bound(arr.begin(),arr.end(),x)- arr.begin();
    res={f,c};
    return  res;

}

#include <bits/stdc++.h>
using namespace std;
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
int lb = lower_bound(arr.begin(),arr.end(),k) - arr.begin();
int up = upper_bound(arr.begin(),arr.end(),k) - arr.begin();

if(lb==n || arr[lb]!=k) return {-1,-1};
return {lb, up-1};
}
int lowerB(vector<int> &arr, int n, int x)
{
	int low=0, high =n-1;
	int fist =-1;
	while(low<=high)
	{
		int mid  = (low+mid)/2;
		if(arr[mid]== x)
		{
			first = mid;
			high = mid-1;
		}
		else if(arr[mid]> x)
		{
			high  = mid-1;
		}
		else{
			low= mid+1;
		}
	}
	return first;
}
int upperB(vector<int> &arr, int n, int x)
{
	int low=0, high =n-1;
	int last =-1;
	while(low<=high)
	{
		int mid  = (low+mid)/2;
		if(arr[mid]== x)
		{
			last = mid;
			low= mid+1;
		}
		else if(arr[mid]> x)
		{
			high  = mid-1;
		}
		else{
			low= mid+1;
		}
	}
	return last;
}

int count(vector<int>& arr, int n, int x) {
	int first = lowerB(arr,n,x);
	if(first == -1) return 0;
	int last = upperB(arr,n,x);
	return (last - first)+1;
}
int search(vector<int>& nums, int target) {
        int low=0;
        int n  = nums.size();
        int high=n-1;
        while(low<=high)
        {
            int mid =  (low+high)/2;
            if(nums[mid]== target) return mid;

            if(nums[low]<=nums[mid])
            {
                if(nums[low]<=target && target <=nums[mid])
                {
                    high= mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else
            {
                if(nums[mid]<=target && target<= nums[high])
                {
                    low= mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
        }  
        return -1;   
    }
bool search(vector<int>& nums, int target) {
        int low =0;
        int n= nums.size();
        int high =  n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid]==target) return true;
            if(nums[low]==nums[mid] && nums[mid]== nums[high])
            {
                low++;
                high--;
                continue;
            }
            if(nums[low]<=nums[mid])
            {
                if(nums[low]<=target && target<= nums[mid])
                {
                    high= mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else
            {
                if(nums[mid]<=target && target<= nums[high])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        return false;
        
    }

int findMin(vector<int>& nums) {
        int low=0;
        int n= nums.size();
        int high = n-1;
        int ans= INT_MAX;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[low]<=nums[mid])
            {
                ans= min(ans, nums[low]);
                low= mid+1;
            }
            else 
            {
                ans= min(ans,nums[mid]);
                high = mid-1;
            }
        }
        return ans;
        
    }

int findKRotation(vector<int> &arr) {
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;
    int index = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            // keep the minimum:
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }

            // Eliminate left half:
            low = mid + 1;
        }
        else { //if right part is sorted:

            // keep the minimum:
            if (arr[mid] < ans) {
                index = mid;
                ans = arr[mid];
            }

            // Eliminate right half:
            high = mid - 1;
        }
    }
    return index;
}
