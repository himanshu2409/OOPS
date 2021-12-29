#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> kClosest(vector<vector<int>>& points, int k)
{
    vector<vector<int>>ans;
    if(points.size()==0)
    return ans;
    priority_queue<pair<int,pair<int,int>>>pq;

    for(int i=0;i<points.size();i++)
    {
        int dist=points[i][0]*points[i][0]+points[i][1]*points[i][1];
        if(pq.size()<k)
            pq.push({dist,{points[i][0],points[i][1]}});
        else
            if(dist<pq.top().first)
            {
                pq.pop();
                pq.push({dist,{points[i][0],points[i][1]}});
            }

    }
    while(!pq.size())
    {
        ans.push({pq.top().second.first,pq.second.second});
        pq.pop();
    }
    return ans;
}