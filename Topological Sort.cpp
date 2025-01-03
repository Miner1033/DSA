#include<bits/stdc++.h>
using namespace std;

#define dgm_naxmul59 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<int>graph[30];///30 row
int visit[1000];
int n,e;
vector<int>topSort[30];
int x = -1 ;
void DFS(int s)
{
    visit[s]=1;
    topSort[x].push_back(s);

    for( int i = 0; i < graph[s].size(); ++i ){
            int v = graph[s][i];
            if(visit[v]==0){
                    DFS(v);
                    visit[v]=1;
            }
    }
}

int main()
{
    dgm_naxmul59

    cin>>n>>e;
    int u,v;

    //Adjacency matrix input

    for( int i=1;i<=e; ++i)
    {
            cin>>u>>v;
            graph[u].push_back(v);///row column
           // graph[v].push_back(u);///column row
    }

    for( int i=1;i<=n;++i ){
            if(visit[i]==0){
                    ++x;
                    DFS(i);
            }
    }

    //print

    for( int i=x;i>=0;--i ){
        for( int j=0;j<topSort[i].size(); ++j ){
            cout<<topSort[i][j]<< ' ';
        }
    }
    cout<<endl;

}


/**

8 8
1 3
2 3
2 4
3 5
5 6
6 7
5 8
4 6
2 4 1 3 5 6 7 8

*/





