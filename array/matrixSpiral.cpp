#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) 
{
      int rows = matrix.size();
      int cols = matrix[0].size();
      int minr = 0;
      int minc = 0;
      int maxr = rows - 1;
      int maxc = cols - 1;
      int tne = rows * cols;
    vector<int>rv;
    while(tne>0)
    {   //top wall
        for(int j=minc;j<=maxc&& tne>0;j++)
        {
            rv.emplace_back(matrix[minr][j]);
            tne--;
        }
        minr++;
        //right wall
        for(int i=minr;i<=maxr&& tne>0;i++)
        {
            rv.emplace_back(matrix[i][maxc]);
            tne--;
        }
        maxc--;
        //bottom wall
        for(int j=maxc;j>=minc&& tne>0;j--)
        {
            rv.emplace_back(matrix[maxr][j]);
            tne--;
        }
        maxr--;
        //left wall
        for(int i=maxr;i>=minr&& tne>0;i--)
        {
            rv.emplace_back(matrix[i][minc]);
            tne--;
        }
        minc++;
    }
    return rv;

//       int rows = matrix.size();
//       int cols = matrix[0].size();
//       int minRow = 0;
//       int minCol = 0;
//       int maxRow = rows - 1;
//       int maxCol = cols - 1;
//       int elementCount = rows * cols;
//       // avoid resizing of the arraylist
//       vector<int>rv;
//       while (elementCount > 0) {
// //        add top row ->represented by minrow
//         for (int col = minCol; col <= maxCol&&elementCount > 0; col++) {
//           rv.emplace_back(matrix[minRow][col]);
//           elementCount--;
//         }
//         minRow++;
//         // one of the min row is done
// //        add right most col ->represented by maxCol
//         for (int row = minRow; row <= maxRow&&elementCount > 0; row++) {
//           rv.emplace_back(matrix[row][maxCol]);
//           elementCount--;
//         }
//         maxCol--;
// //        one of the maxcol is done
// //        add the bottom most col ->represented by maxRow;
//         for (int col = maxCol; col >= minCol&&elementCount > 0; col--) {
//           rv.emplace_back(matrix[maxRow][col]);
//           elementCount--;
//         }
//         maxRow--;
// //        one of the maxRow is done
// //        add left most col -> represented by minCol
//         for (int row = maxRow; row >= minRow&&elementCount > 0; row--) {
//           rv.emplace_back(matrix[row][minCol]);
//           elementCount--;
//         }
//         minCol++;
//       }
//       return rv;
}

int main()
{
    vector<vector<int>>v={{1,2,3},{4,5,6},{7,8,9}};
    vector<int>ans=spiralOrder(v);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
  
return 0;
}