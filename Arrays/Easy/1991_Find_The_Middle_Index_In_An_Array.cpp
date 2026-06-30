//Note:- This question is same as 724(Find Pivot Index)
//Optimal solution
   int leftsum = 0;
        int totalsum = 0;
        for (int i = 0; i < nums.size(); i++) {
            totalsum += nums[i];
        }

        for (int j = 0; j < nums.size(); j++) {
            int rightsum = totalsum - leftsum - nums[j];
            if (rightsum == leftsum)
                return j;
            leftsum += nums[j];
        }

        return -1;