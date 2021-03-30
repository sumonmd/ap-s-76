#include<bits/stdc++.h>
using namespace std;

void mergedata(int *arr, int l, int mid, int r){
	int i,j,k,n1,n2;
	n1 = mid - l + 1;
	n2 = r-mid;
	int L[n1],R[n2];
	for(i=0;i<n1;i++){
		L[i] = arr[l+i];
	}
	for(j=0;j<n2;j++){
		R[j] = arr[mid+j+1];
	}

	i=0,j=0,k=0;

	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			arr[k] = L[i];
			i++;
		}
		else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k]=L[i];
		k++;
		i++;
	}
	while(j<n2){
		arr[k]=R[j];
		k++;
		j++;
	}
}

void mergeSort(int *arr, int l, int r){
	if(l<=r){
		int mid = l + (r-l)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		mergedata(arr,l,mid,r);
	}

}
int main()
{
	int arr[5] = {12,1,53,22,24};
	mergeSort(arr,0,5);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
