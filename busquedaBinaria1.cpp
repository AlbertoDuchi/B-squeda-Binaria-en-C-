#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> lista={1,2,3,4,5,6,7,8,9};
	//mostrar datos
	cout<<"Lista de valores\n";
	for(auto i: lista){
		cout<<i<<" ";
	};
	//buscar
	int inferior, superior, mitad;
	int numBuscar=9;
	superior=lista.size();
	inferior=0;
	mitad=(superior+inferior)/2;
	while(inferior<=superior && lista[mitad]!=numBuscar){
		if(numBuscar<lista[mitad]){
			superior=mitad-1;

		}else{
			inferior=mitad+1;
		}
		mitad=(superior+inferior)/2;
	}
	if(lista[mitad]==numBuscar){
		cout<<"Encontrado\n";
	}else{
		cout<<"No Encontrado\n";
	}
	return 0;
}