#include <iostream>
using namespace std;



int main(){
	int n;
	cout<< "Ingrese el valor n deseado: "<<endl;
	cin >> n;
	int cont = 1;
	for(int i =1; i<=n;i++){
		cont*= i;
	}
	cout<< cont <<endl;
	return 0;
	} 

