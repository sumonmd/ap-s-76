#include<bits/stdc++.h>
#define M 100
using namespace std;

vector<int>ad[M];
int pt[M];
int visit[M];
vector<int>V;


void BFS(int s, int d){
	visit[s]=1;
	queue<int>q;
	q.push(s);

		while(!q.empty()){
			int u = q.front();
			q.pop();
			for(int i=0;i<ad[u].size();i++){
				int p = ad[u][i];
				if(visit[p]==0){
					visit[p] = 1;
					pt[p] = u;
					q.push(p);
				}
			}
		}
		if(visit[d]==0){return ;}

		int now = d;
		while(now!=s){
			V.push_back(now);
			now = pt[now];
		}
		for(int i = V.size()-1;i>=0;i--){
			cout<<V[i]<<"->";
		}
}
int main()
{
	int e;
	cin>>e;
	for(int i=0;i<e;i++){
		int x,y;
		cin>>x>>y;
		ad[x].push_back(y);
		ad[y].push_back(x);
	}
	int s,d;
	cin>>s>>d;
	BFS(s,d);


	return 0;
}
