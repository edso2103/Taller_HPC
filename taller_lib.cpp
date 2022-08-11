/************************************************************
*Fecha: 05-agosto-2022
*Autor: Edna Sofia Orjuela Puentes
*Materia: Introdución a HPC
*Tema: Introducción Lenguaje de Programación C++
*Tópico: Primer Taller C++
************************************************************/
 #include "taller_lib.h"           
#include <stdio.h>
#include <iostream>



void primer_ejercicio () {

	int x = 1, y = 1;	
	if (x == y * 5)
		x = 0;
	else
		x = -1;		
	std::cout<<x<<std::endl;
	
	
}

void segundo_ejercicio () {

	int x = 1, y = 1;

	if (x == 1){
		if (y == 0){
			x = 10;
		}
	}else{
		x = -1;
	std::cout<<x<<std::endl;	
	}
}

void tercer_ejercicio(){

	int x = 0;
	for (x = 'a'; x <= 'z'; x += 10) {
	 	std::cout<<x<<std::endl;	
	}

	

}


void cuarto_ejercicio () {

	int x = 0, y = 0;

	for (x = 6; x > 0; x -= 2)
		for (y = 0; y < 2; y++)
			std::cout<<x-y<<std::endl;

}


void fnx(int x){
	if (x) std::cout<<x<<std::endl;
}

void quinto_ejercicio () {

	int i, a = 1234;
	for (i = 0; i < 4; i++)
		fnx(a = a/10);

}




void sexto_ejercicio () {

	int a,b,i=0,x=0;
	std::cout<<"Digite el valor de a: "<<std::endl;
	std::cin>>a;
	std::cout<<"Digite el valor de b: "<<std::endl;
	std::cin>>b;
	
	if(a>=0 && b>=0){
		if(a>b){
			for (i=b;i<=a;i++){
				if (i%5==0){
				x+=i;
				}
			}
		}else{
			for (i=a;i<=b;i++){
				if (i%5==0){
				x+=i;
				}
			}
		}
	}else{
		
	std::cout<<"Error, no se admiten numeros negativos "<<std::endl;
	
	}
	
	std::cout<<"La suma de los valores multiplos de 5 entre "<<a<<" y "<<b<<" es "<<x<<std::endl;
	

}

void septimo_ejercicio () {

	double a=0,b=0,serie=0,x=0,y=0;
	std::cout<<"La serie a evaluar corresponde a: 1/(x+ay)"<<std::endl;
	std::cout<<"Digite el valor de b (ultimo numero que toma a)"<<std::endl;
	std::cin>>b;
	std::cout<<"Digite el valor de x para evaluar la serie"<<std::endl;
	std::cin>>x;
	std::cout<<"Digite el valor de y para evaluar la serie"<<std::endl;
	std::cin>>y;
	
	for (a=0;a<=b;a++){
		std::cout<<1/(x+(a*y))<<"+";
		serie+=1/(x+(a*y));
	}
	std::cout<<"="<<serie<<std::endl;
	
	
}


void octavo_ejercicio () {

	int  dia, mes, anio,fecha,tarot=0;
	std::cout<<"Numero del tarot"<<std::endl;
	std::cout<<"Digite su dia de nacimiento"<<std::endl;
	std::cin>>dia;
	std::cout<<"Digite su mes de nacimiento"<<std::endl;
	std::cin>>mes;
	std::cout<<"Digite su año de nacimiento"<<std::endl;
	std::cin>>anio;
	
	if((dia>0 && dia<=30)&&(mes>0 && mes<=12)&&(anio<=2022)){
		fecha=dia+mes+anio;
		while(fecha!=0){
			fecha=fecha/10;
			tarot+=fecha%10;
		}
		std::cout<<"Su numero del tarot es: "<<tarot<<std::endl;
	}else{
		std::cout<<"Error, su fecha de nacimiento es incorrecta"<<std::endl;
	}
}


void noveno_ejercicio () {

	
	int opcion,km,tm;
	do {
		std::cout<<"Elija un vehiculo del menu\n\n\n";
		std::cout<<"1.  Bicicleta \n";
		std::cout<<"2.  Moto \n";
		std::cout<<"3.  Coche \n";
		std::cout<<"4.  Camion\n";
		std::cout<<"5.  Salir\n\n";

		std::cin>>opcion;
		switch ( opcion ){
				case 1:  
					std::cout<<"El importe de la bicicleta es de 100 unidades\n\n";
					break;
				case 2:
					std::cout<<"Digite el numero de km\n\n";
					std::cin>>km;
					std::cout<<"El importe de la moto es de \n\n"<<km*30<<std::endl;
					break;
				case 3:
					std::cout<<"Digite el numero de km\n\n";
					std::cin>>km;
					std::cout<<"El importe del coche es de \n\n"<<km*30<<std::endl;
					break;
				case 4:
					std::cout<<"Digite el numero de km\n\n";
					std::cin>>km;
					std::cout<<"Digite el numero de tm\n\n";
					std::cin>>tm;
					std::cout<<"El importe del camion es de \n\n"<<(km*30)+(tm*25)<<std::endl;
					break;
			}
        } while (opcion!=5); 
}



void menu () {

	int opcion;
  	
        std::cout<<"============================================================================\n";
	std::cout<<"      -                           Menú principal                       -    \n" ;
	std::cout<<"============================================================================\n";
	std::cout<<"A continuación, se encuentran nueve ejericicios en lenguaje de programación C++. \n\n";
	std::cout<<"============================================================================\n";
	do {
		std::cout<<"\n\n============================================================================\n";
				
		std::cout<<"Para ver algun ejercicio, por favor digite su respectivo número\n\n\n";
		std::cout<<"1.  Primer ejercicio \n";
		std::cout<<"2.  Segundo ejercicio \n";
		std::cout<<"3.  Tercer ejercicio \n";
		std::cout<<"4.  Cuarto ejercicio\n";
		std::cout<<"5.  Quinto ejercicio\n";
		std::cout<<"6.  Sexto ejercicio \n";
		std::cout<<"7.  Septimo ejercicio \n";
		std::cout<<"8.  Octavo ejercicio\n";
		std::cout<<"9.  Noveno ejercicio \n";
		std::cout<<"10. Salir\n\n";

		std::cin>>opcion;
		
		switch ( opcion ){
			case 1:  
				primer_ejercicio ();
				break;
			case 2:
				segundo_ejercicio ();
				break;
			case 3:
				tercer_ejercicio ();
				break;
			case 4:
				cuarto_ejercicio ();
				break;
			case 5:
				quinto_ejercicio ();
				break;
			case 6: 
				sexto_ejercicio ();
				break;
			case 7:
				septimo_ejercicio ();
				break;
			case 8: 
				octavo_ejercicio ();
				break;
			case 9:
				noveno_ejercicio ();
				break;
       		 } 
       	}while (opcion!=10); 
       	
        
}




