#include <iostream>
using namespace std;
main (){
	
	//numero es positivo>0, negativo<0 o neutro=0
	int num=0;
	cout<<"Ingrese el numero: ";
	cin>>num;
	if (num>0){
		
		cout<<"Positivo"<<endl;
	}else{
		if(num==0){
		cout<<"Neutro"<<endl;
	}else{
		cout<<"Negativo"<<endl;
	}
}
}
	
