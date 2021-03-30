/*
	1. For max heap(priority queue): insert, delete, give max value
	 | Sumon
	 | CSE, JUST
*/
#include<bits/stdc++.h>
#define size 10
using namespace std;

int cnt;
int arr[size];

void adjacent_from_bottom(int startIndex, int endIndex)
{
	int item = arr[startIndex];
	int i = startIndex;

	while(i/2 >= 1){
		if(arr[i/2]<item ){
			arr[i] = arr[i/2];
			i = i/2;
		}
		else{
			break;
		}
	}
	arr[i] = item;



}

void insertNode(int value){
	if(cnt < size){
		cnt++;
		arr[cnt] = value;
		adjacent_from_bottom(cnt,1);
	}

}

void adjacent_from_top(int startIndex, int endIndex)
{
	int data = arr[startIndex];
	int i = startIndex*2;

	while(i<=cnt){
		if(i<=cnt && arr[i+1]>arr[i]){
			i = i+1;
		}
		else if(arr[i]<data){
			break;
		}
		else{
			arr[i/2] = arr[i];
			i=i*2;
		}
		arr[i] = data;

	}



}

void remove(){
	if(cnt >0 ){
		arr[1] = arr[cnt];
		cnt--;
		adjacent_from_top(1,cnt);
	}

}

int main()
{
    insertNode(56);
    insertNode(6);
    insertNode(26);
    insertNode(86);
    insertNode(156);

	cout<<arr[1]<<endl;
	remove();
	cout<<arr[1]<<endl;

	return 0;
}
