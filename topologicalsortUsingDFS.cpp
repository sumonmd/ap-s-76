#include<bits/stdc++.h>
#define M 100
using namespace std;
vector<int>adj[M];
int visit[M];
vector<int>result;

void topologicalSort(int s)
{
	if(visit[s]==1){
	return;}

	visit[s] = 1;

	for(int i=0;i<adj[s].size();i++){
		topologicalSort(adj[s][i]);
	}
	result.push_back(s);

}

int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	int source;
	cin>>source;
	topologicalSort(source);
	cout<<"Topological Sort: "<<endl;
	reverse(result.begin(),result.end());
	for(int i=0;i<result.size();i++){
		cout<<result[i]<<" ";
	}

return 0;
}
