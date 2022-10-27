#include<bits/stdc++.h>
using namespace std;


//To add edge in graph 
void addEdge(vector<int>adj[], int start,int end){
    adj[start].push_back(end);
    adj[end].push_back(start); //Undirected Graph
    }
//Print Graph
void printGraph(vector<int>adj[],int V){
    for(int i=0;i<V;i++){
        for(int x : adj[i]){
            cout<<x<<" ";
            }
        cout<<endl;
    }
}
//BFS in Connnected Graph  
void BFS(vector<int> adj[],int start,int V){
    int visited[V]={0,};
    queue<int> q;
    q.push(start);
    visited[start]=1;

    while(!q.empty()){
        int i=q.front();
        q.pop();

        cout<<i<<" ";

        for(int x:adj[i]){
            if(visited[x]==0){
                visited[x]=1;
                q.push(x);
            }
        }
    }
}

//BFS in Non Connected Graph and if source vertex is not given And return Number of Islands as output; 
void bfsD(vector<int> adj[],int start,int visited[]){
    queue<int> q;
    q.push(start);
    visited[start]=1;

    while(!q.empty()){
        int i=q.front();
        q.pop();

        cout<<i<<" ";

        for(int x:adj[i]){
            if(visited[x]==0)
            {
                q.push(x);
                visited[x]=1;
            }
        }
    }
}

int bfsDis(vector<int> adj[],int V){
    int visited[V]={0};
    int count=0;
    for(int i=0;i<V;i++){
        if(visited[i]==0){
            bfsD(adj,i,visited);
            count++;
        }
    }
    return count;
}



int main(){

    int V=7;
    vector<int > adj[V];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,2,3);
    addEdge(adj,1,3);
    addEdge(adj,4,5);
    addEdge(adj,4,6);
    addEdge(adj,5,6);
    int islands=bfsDis(adj,V);
    cout<<endl;
    cout<<islands<<endl;

    return 0;
}