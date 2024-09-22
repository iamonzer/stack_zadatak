#include<iostream>
using namespace std;

swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	
	int n,i,j,temp;
	
	cout << "Unesi n: ";
	cin >> n;
	
	int niz[n];
	
	cout << "Unesi brojeve u niz: ";
	
	for(int i = 0; i < n; i++){
		cin >> niz[i];
	}
	
	cout << "Brojevi ucitani u niz..." << endl;
	
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(niz[j] > niz[j+1]){
				swap(niz[j], niz[j+1]);
			}
		}
	}
	
	cout << "Niz sortiran..." << endl;
	cout << endl;
	cout << "Ispisivanje sortiranog niza: ";
	for(int i = 0; i < n; i++){
		cout << niz[i] << " ";
	}
	cout << endl;
	
	return 0;
}