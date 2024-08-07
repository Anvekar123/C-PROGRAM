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