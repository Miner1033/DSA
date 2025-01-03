#include<bits/stdc++.h>
using namespace std;

#define dgm_naxmul59 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<int>graph[30];///30 row
int visit[1000];
int n,e;
void BFS(int s)
{
    queue<int>Q;
    visit[s]=1;
    cout<<s<<' ';
    Q.push(s);

    while(!Q.empty()){
            int u  = Q.front();
            Q.pop();

            for( int i=0;i<graph[u].size();++i ){
                    int v = graph[u][i];
                    if(visit[v]==0){
                        visit[v]=1;
                        cout<<v<<' ';
                        Q.push(v);
                    }
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
            graph[v].push_back(u);///column row
    }

    for( int i=1;i<=n;++i ){
            if(visit[i]==0){
                    BFS(i);
            }
    }

}


/**

10 13
1 2
1 4
4 3
3 9
3 10
3 2
2 5
2 8
2 7
5 6
7 8
5 8
5 7
1 2 4 3 5 8 7 9 10 6

*/




