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