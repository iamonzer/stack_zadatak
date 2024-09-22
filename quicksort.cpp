#include<iostream>
using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int part(int array[], int start, int end){
	int pivot = array[end];
	int pindex = start;
	
	for(int i = start; i < end; i++){
		if(array[i] <= pivot){
			swap(array[i], pindex);
			pindex++;
		}
	}
	swap(array[end], pindex);
	return pindex;
}

void quicksort(int array[], int start, int end){
	if(start < end){
		int p = part(array, start, end);
		quicksort(array, start, (p-1));
		quicksort(array, (p+1), end);
	}
}

int main(){
	
	int data[] = {2,5,1,3,12,9,8};
	int size = sizeof(data) / sizeof(data[0]);
	
	quicksort(data, 0, size-1);
	
	for(int i = 0; i < size; i++){
		cout << data[i] <<" ";
		
	}
	cout << endl;
	
	return 0;
}