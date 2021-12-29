#include<bits/stdc++.h>
using namespace std;
int row;
int col;
struct ele{
    int x,y;
};

bool isdelimiter(ele temp)
{
    return (temp.x==-1 && temp.y==-1);
}

bool isvalid(int i,int j)
{
    return (i>=0 && j>=0 && i<row && j<col);
}

bool checkfresh(vector<vector<int>>&mat)
{
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            if(mat[i][j]==1)
                return true;
    return false;
}
int rottenOrange(vector<vector<int>>&v)
{
    row=v.size();
    col=v[0].size();
    queue<ele>q;
    ele temp;
    int ans=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(v[i][j]==2)
            {
                temp.x=i;
                temp.y=j;
                q.push(temp);
            }
        }
    }
    temp.x=-1;
    temp.y=-1;
    q.push(temp);
    while(!q.empty())
    {
        bool flag=false;
        while(!isdelimiter(q.front()))
        {
            temp=q.front();
            //right
            if(isvalid(temp.x,temp.y) && v[temp.x][temp.y]==1)
            {
                if(!flag) ans++,flag=true;
                v[temp.x+1][temp.y]=2;
                temp.x++;
                q.push(temp);
                temp.x--;
            }
            //left
             if(isvalid(temp.x,temp.y) && v[temp.x][temp.y]==1)
            {
                if(!flag) ans++,flag=true;
                v[temp.x-1][temp.y]=2;
                temp.x--;
                q.push(temp);
                temp.x++;
            }
            //top
              if(isvalid(temp.x,temp.y) && v[temp.x][temp.y]==1)
            {
                if(!flag) ans++,flag=true;
                v[temp.x][temp.y+1]=2;
                temp.y++;
                q.push(temp);
                temp.y--;
            }
            //bottom
             if(isvalid(temp.x,temp.y) && v[temp.x][temp.y]==1)
            {
                if(!flag) ans++,flag=true;
                v[temp.x][temp.y-1]=2;
                temp.y--;
                q.push(temp);
            }
            q.pop();
        }
        q.pop();
        if(!q.empty())
        {
            temp.x=-1;
            temp.y=-1;
            q.push(temp);
        }
    }
    return (checkfresh(v))? -1: ans; 
}
int main()
{
    vector<vector<int>>v={{2, 1, 0, 2, 1}, 
					      {1, 0, 1, 2, 1}, 
					      {1, 0, 0, 2, 1}};
	int ans = rottenOrange(v); 
	if (ans == -1) 
		cout << "All oranges cannot rotn"; 
	else
		cout << "Time required for all oranges to rot => " << ans << endl; 
	return 0; 
}