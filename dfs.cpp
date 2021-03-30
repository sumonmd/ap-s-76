#include<bits/stdc++.h>
#define M 100
using namespace std;

vector<int>ad[M];
int visit[M];

void DFS(int s){
	if(visit[s]==1){
		return;
	}
	visit[s]=1;
	for(int i=0;i<ad[s].size();i++){
		DFS(ad[s][i]);
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
	int s;
	cin>>s;
	DFS(s);
	for(int i=1;i<=e+1;i++){
		if(visit[i]!=1){
			cout<<"Not traversing..."<<endl;
			break;
		}
	}

	return 0;
}
