#include<bits/stdc++.h>
using namespace std;

int main()
{
	FILE *fp;
	fp = fopen("mytext.txt","w");
	int i,a,b;
	for(i=0;i<5;i++){
		scanf("%d%d",&a,&b);
		fprintf(fp,"%d, %d\n",a,b);
	}
	fclose(fp);
	fp = fopen("mytext.txt","r");
	char c;
	while(fscanf(fp,"%d%c%d",&a,&c,&b)!=EOF){
		cout<<a<<"  "<<c<<"  "<<b<<endl;
	}

	return 0;
}
