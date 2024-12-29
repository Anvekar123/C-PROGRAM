 #include<bits/stdc++.h>
 using namespace std;
 
 int removeElement(vector<int>& nums, int val) {
                int k = 0; // Index for placing elements not equal to val
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[k] = nums[i]; // Move the element to the correct position
                k++; // Increment the index for the next non-val element
            }
        }
        return k; // k is the number of elements not equal to val
        // int idx=-1;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(val==nums[i])
        //     {
        //         idx=i;
        //         break;
        //     }
        // }
        // if(idx==-1) return idx;
        // for(int i= idx;i<nums.size();i++)
        // {
        //     if(nums[i]!=val)
        //     {
        //         swap(nums[i],nums[idx]);
        //         idx++;
        //     }
        // }
        // while(nums.back()==val && nums.size()!=0)
        // {
        //     nums.pop_back();
        // }
        // return nums.size();
    }

    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high= nums.size()-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid] ==target) return mid;
            else if(nums[mid]<=target)
            {
                low= mid+1;
            }
            else high = mid-1;
        }
        return low;
        
    }

    class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // int n= digits.size()-1;
        // int x=n;
        // vector<int> ans;
        // long long sum=0;
        // for(int i=0;i<=n;i++)
        // {
        //     sum = sum + digits[i]*pow(10,x);
        //     x--;
        // }
        // sum++;
        // int val = sum;
        // while(val>0)
        // {
        //     int rem = val%10;
        //     ans.push_back(rem);
        //     val= val/10;
        // }
        //  reverse(ans.begin(),ans.end());
        // return ans;
        int n= digits.size()-1;
        int carry=1;
        for(int i=n;i>=0;i--)
        {
            int sum= digits[i]+carry;
            digits[i]= sum%10;
            carry= sum/10;
        }
        if(carry>0)
        {
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};