using namespace std;
#include<bits/stdc++.h>
void bfs(vector<vector<int>>&adjList,int startNode,vector<bool>&visited){
    queue<int>q;
    visited[startNode]=true;
    q.push(startNode);
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        cout<<curr<<" ";

        for(auto it:adjList[curr]){
            if(!visited[it]){
                visited[it]=true;
                q.push(it);
            }
        }
    }
}
void addEdge(vector<vector<int>>&adjList,int u,int v){
    adjList[u].push_back(v);
}
int main()
{
    int vertices=5;
    vector<vector<int>>adjList(vertices);
    addEdge(adjList,0,1);
    addEdge(adjList,0,2);
    addEdge(adjList,0,3);
    addEdge(adjList,0,4);

    vector<bool>visited(vertices,false);

    bfs(adjList,0,visited);
    return 0;

}
