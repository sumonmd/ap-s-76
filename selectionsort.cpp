#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[5] = {12,1,53,22,24};
	int minIndex = 0;
	for (int i = 0;i<5;i++){
		minIndex = i;
		int item = arr[minIndex];
		for(int j=i+1;j<5;j++){
			if(arr[j]<item){
				item = arr[j];
				minIndex = j;
			}
		}
		if(i!=minIndex){
			swap(arr[i],arr[minIndex]);
		}
	}
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}

  return 0;
}
