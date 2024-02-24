//Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        // queue<pair<int,int>> q;
        // for(int i=0;i<matrix.size();i++)
        // {
        //     for(int j=0;j<matrix[0].size();j++)
        //     {
        //         if(matrix[i][j]==0)
        //         {
        //             q.push({i,j});
        //         }
        //     }
        // }
        // while(!q.empty())
        // {
        //     pair<int,int>p1=q.front();
        //     int row=p1.first;
        //     int col=p1.second;
        //     for(int i=0;i<matrix[0].size();i++)
        //     {
        //         matrix[row][i]=0;
        //     }
        //     for(int i=0;i<matrix.size();i++)
        //     {
        //         matrix[i][col]=0;
        //     }
        //     q.pop();
        // }


        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int k=0;k<matrix[0].size();k++)
                    {
                        if(matrix[i][k]!=0)
                            matrix[i][k]=-1111;
                    }
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int k=0;k<matrix.size();k++)
                    {
                        if(matrix[k][j]!=0)
                            matrix[k][j]=-1111;
                    }
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==-1111)
                {
                    matrix[i][j]=0;
                }
            }
        }

    }
};
