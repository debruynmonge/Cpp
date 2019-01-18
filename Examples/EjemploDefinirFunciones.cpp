#include <iostream>
using namespace std;

int mayor(int a, int b); // Determina cual de los dos numeros recibidos es el mayor

int main(){
int a=5;
int b=10;
cout<<mayor(a,b);
cin>>a;

}

int mayor(int a, int b){
	if(a<b){
		return b;
	}
	else return a;
}

