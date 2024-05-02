#include<iostream>
#include<vector>
using namespace std;
class Persona{
	string nombre;
	int edad;
	public:
		Persona();
		void setNombre(string nombre);
		void setEdad(int edad);
		string getNombre();
		int getEdad();
};
Persona::Persona(){
	nombre="S/N";
	edad=0;
};
void Persona::setNombre(string nombre){
	this->nombre=nombre;
};
void Persona::setEdad(int edad){
	this->edad=edad;	
};
string Persona::getNombre(){
	return nombre;
}
int Persona::getEdad(){
	return edad;
};
void mostrarDatos(vector<Persona> lista, string titulo);
void ingresodatos(vector<Persona> &lista, int num);
void buscarDatoBB(vector<Persona> lista, string nomBuscar);
int main(){
	vector<Persona> lista;
	//Persona persona;
	int num=5;
	ingresodatos(lista, num);	
	//
	//mostrar datos
	mostrarDatos(lista,"Lista inicial");
	//buscar
	buscarDatoBB(lista, "b");
	return 0;
}
void mostrarDatos(vector<Persona> lista, string titulo){
	cout<<"***** "<<titulo<<" *****"<<endl;
	for(auto i: lista){
		cout<<i.getNombre()<<" "<<i.getEdad()<<endl;
	};	
};
void ingresodatos(vector<Persona> &lista, int num){
	Persona persona;
	string nombre;
	int edad;
	for(int i=1;i<=num;i++){
		cout<<"Ingrese el nombre: ";
		getline(cin>>ws,nombre);
		cout<<"Ingrese la edad: ";
		cin>>edad;
		//guardar en el objeto
		persona.setNombre(nombre);
		persona.setEdad(edad);
		//guarda el objeto en el arreglo
		lista.push_back(persona);
	}
};
void buscarDatoBB(vector<Persona> lista, string nomBuscar){
	int inferior, superior, mitad;
	superior=lista.size();
	inferior=0;
	mitad=(superior+inferior)/2;
	while(inferior<=superior && lista[mitad].getNombre()!=nomBuscar){
		if(nomBuscar<lista[mitad].getNombre()){
			superior=mitad-1;

		}else{
			inferior=mitad+1;
		}
		mitad=(superior+inferior)/2;
	}
	if(lista[mitad].getNombre()==nomBuscar){
		cout<<"Encontrado\n";
	}else{
		cout<<"No Encontrado\n";
	}	
};