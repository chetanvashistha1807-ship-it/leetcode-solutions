/* Brute Force

class Solution {
public:
    int maxArea(vector<int>& height) {

        int area=1;
        int maxarea=0;
        int n = height.size();
        for (int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                area = min(height[i],height[j])*(j-i);
                maxarea = max(area,maxarea);
            }
        }return maxarea;
    }
};
*/

//Optimal

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int area = min(height[left], height[right]) * (right - left);
            maxArea = max(maxArea, area);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
};