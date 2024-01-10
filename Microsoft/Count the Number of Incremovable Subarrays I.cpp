/* https://leetcode.com/problems/count-the-number-of-incremovable-subarrays-i/description/ */
//Solution - Count the Number of Incremovable Subarrays I
class Solution {
public:
    int incremovableSubarrayCount(vector<int>& arr) {
        int n=arr.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                vector<int>temp;
                for(int k=0;k<i;k++)
                {
                    temp.push_back(arr[k]);
                }
                for(int k=j+1;k<n;k++)
                {
                    temp.push_back(arr[k]);
                }
                int f=0;
                for(int x=1;x<temp.size();x++)
                {
                   if(temp[x]<=temp[x-1])
                   {
                       f=1;
                       break;
                   }
                }
                if(f==0)
                {
                    cnt++;
                }
            }
        }
    return cnt;
    }
};
