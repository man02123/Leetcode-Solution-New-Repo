// Last updated: 08/12/2025, 17:35:50
class Solution {

public:

    double findMaxAverage(vector<int>& nums, int k) {

        int i=0;

        int j=0;

        int sum=0;

        double max=INT_MIN;

        int y=nums.size();

        while(i<=y-k)

            {

            if(j-i<k)

                {

                sum=sum+nums[j];

                j++;

                }

            else if(j-i==k)

                {

    

                if(max<sum)

                    {

                    max=sum;

                    }

                sum=sum-nums[i];

                i++;

                }

            }

        double z=max/k;

        return z;

            

    }

};