#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[5] = {12,1,53,22,24};
	for(int i=1;i<5;i++){
		int item = arr[i];
		int j= i-1;

		while(j>=0 && arr[j]>item){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = item;
	}
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
