//Optimal solution in 2 pass


class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m = image.size();
        int n = image[0].size();

        for(int i = 0 ; i<m; i++){
            for(int j =0; j<n/2; j++){
                swap(image[i][j],image[i][n-j-1]);
                
            }
        }

         for(int i = 0 ; i<m; i++){
            for(int j =0; j<n; j++){
                if(image[i][j]==0) image[i][j]=1;
                else if(image[i][j]==1)image[i][j]=0;
                
            }
        } return image;

    }
};

//Optimal Solution In one pass

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        int m = image.size();
        int n = image[0].size();

        for (int i = 0; i < m; i++) {

            for (int j = 0; j < (n + 1) / 2; j++) {

                int temp = image[i][j];
                image[i][j] = image[i][n - 1 - j] ^ 1;
                image[i][n - 1 - j] = temp ^ 1;
            }
        }

        return image;
    }
};