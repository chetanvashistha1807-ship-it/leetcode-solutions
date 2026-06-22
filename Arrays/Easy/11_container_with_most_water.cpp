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

