#include <iostream>
#include <locale.h>
#include <iomanip>	
#include <ctime>
#include <vector>
#include <string.h>

using namespace std;

struct EMPLEADOS{
	int CODIGO, NIVEL[50];
	string NOMBRE[50], CALLE[50], DIRECCION[50], NUMERO[50], CIUDAD[50], PAIS[50], DEPARTAMENTO[50];
	float SUELDO[50];
	char STATUS[50];
};

	
int main(){
	setlocale(LC_CTYPE, "spanish");
	
	system("color F1");
	
	time_t Ahora = time(0);
	
	tm * time = localtime(&Ahora);
	
	struct EMPLEADOS EMP[50];
	
	int Anio = 1900 + time->tm_year, CONTADOR, DECISION;
	char PREGUNTA;

	vector<string> Mes;
	Mes.push_back("Enero");
	Mes.push_back("Febrero");
	Mes.push_back("Marzo");
	Mes.push_back("Abril");
	Mes.push_back("Mayo");
	Mes.push_back("Junio");	
	Mes.push_back("Julio");
	Mes.push_back("Agosto");
	Mes.push_back("Septiembre");
	Mes.push_back("Octubre");
	Mes.push_back("Noviembre");
	Mes.push_back("Diciembre");
	
	cout<<"No. de carné: 1590-20-19423" <<endl;
	cout<<"Nombre: Carlos Enrrique Gómez Morales" <<endl;
	cout <<"Fecha: " <<time->tm_mday << " de " << Mes[time->tm_mon] <<" de " <<Anio <<endl; 
	cout<<"Hora: " <<time->tm_hour <<":" <<time->tm_min <<":" <<time->tm_sec <<endl <<endl;
	cout<<"¿Qué desea hacer?" <<endl;
	cout<<"1.Datos de los Empleados" <<endl;
	cout<<"2.Imprimir Datos de Empleados"<<endl;
	cout<<"3.Salir" <<endl <<endl;
	cout<<"Elija una opción: ";
	cin>> DECISION;
	
	fflush(stdin);
		
	system("cls");
		
	if(DECISION == 1){
		for(EMP[3].CODIGO = 1; EMP[3].CODIGO <= 2; EMP[3].CODIGO++){
			CONTADOR = EMP[3].CODIGO;
			
			cout<<"No. de carné: 1590-20-19423" <<endl;
			cout<<"Nombre: Carlos Enrrique Gómez Morales" <<endl;
			cout <<"Fecha: " <<time->tm_mday << " de " << Mes[time->tm_mon] <<" de " <<Anio <<endl; 
			cout<<"Hora: " <<time->tm_hour <<":" <<time->tm_min <<":" <<time->tm_sec <<endl <<endl;
			cout<<"\t\t\tRegistro de datos de empleados de la empresa: Emprendedores, S.A." <<endl <<endl;		
			cout<<"Empleado No." <<CONTADOR <<endl <<endl; 
			cout<<"Ingrese el nombre del empleado: ";
			getline(cin, EMP[CONTADOR].NOMBRE[CONTADOR]);	
			cout<<"Ingrese la calle de residencia del empleado: ";
			getline(cin, EMP[CONTADOR].CALLE[CONTADOR]);
			cout<<"Ingrese el número de vivienda del empleado: ";
			getline(cin, EMP[CONTADOR].NUMERO[CONTADOR]);
			cout<<"Ingrese la ciudad de residencia del empleado: ";
			getline(cin, EMP[CONTADOR].CIUDAD[CONTADOR]);
			cout<<"Ingrese el país de residencia del empleado: ";
			getline(cin, EMP[CONTADOR].PAIS[CONTADOR]);	
			cout<<"Ingrese el departamento (empresarial) al que pertenece el empleado: ";
			getline(cin, EMP[CONTADOR].DEPARTAMENTO[CONTADOR]);
		
			fflush(stdin);
			
			cout<<"Ingrese el nivel en que se encuentra laborando el empleado: ";
			cin>> EMP[CONTADOR].NIVEL[CONTADOR];
			cout<<"Ingrese el sueldo que devenga el empleado: Q.";
			cin>> EMP[CONTADOR].SUELDO[CONTADOR];
			cout<<"Ingrese el status en que se encuentra el empleado (Activo= A o Inactivo= I): ";
			cin>> EMP[CONTADOR].STATUS[CONTADOR];
		
			fflush(stdin);
		
			cout<<"\n¿Desea agregar otro registro? (s/n):";
			cin>> PREGUNTA;
		
			fflush(stdin);
		
			system("cls");
			
			if(PREGUNTA == 'n' || PREGUNTA == 'N'){
				cout<<"No. de carné: 1590-20-19423" <<endl;
				cout<<"Nombre: Carlos Enrrique Gómez Morales" <<endl;
				cout <<"Fecha: " <<time->tm_mday << " de " << Mes[time->tm_mon] <<" de " <<Anio <<endl; 
				cout<<"Hora: " <<time->tm_hour <<":" <<time->tm_min <<":" <<time->tm_sec <<endl <<endl;
				cout<<"¿Qué desea hacer?" <<endl;
				cout<<"1.Datos de los Empleados" <<endl;
				cout<<"2.Imprimir Datos de Empleados"<<endl;
				cout<<"3.Salir" <<endl <<endl;
				cout<<"Elija una opción: ";
				cin>> DECISION;
				
				system("cls");
				
				if(DECISION == 1){
					cout<<"Usted, ya ha ingresado los datos de los empleados." <<endl <<endl;
					cout<<"No puede agegar más." <<endl <<endl;
					cout<<"Inténtelo nuevamente" <<endl <<endl;
					
					system("pause");
					system("cls");
					
					cout<<"No. de carné: 1590-20-19423" <<endl;
					cout<<"Nombre: Carlos Enrrique Gómez Morales" <<endl;
					cout <<"Fecha: " <<time->tm_mday << " de " << Mes[time->tm_mon] <<" de " <<Anio <<endl; 
					cout<<"Hora: " <<time->tm_hour <<":" <<time->tm_min <<":" <<time->tm_sec <<endl <<endl;
					cout<<"¿Qué desea hacer?" <<endl;
					cout<<"1.Datos de los Empleados" <<endl;
					cout<<"2.Imprimir Datos de Empleados"<<endl;
					cout<<"3.Salir" <<endl <<endl;
					cout<<"Elija una opción: ";
					cin>> DECISION;
				
					system("cls");
					
					if(DECISION == 2){
						cout<<"No. de carné: 1590-20-19423" <<endl;
						cout<<"Nombre: Carlos Enrrique Gómez Morales" <<endl;
						cout <<"Fecha: " <<time->tm_mday << " de " << Mes[time->tm_mon] <<" de " <<Anio <<endl; 
						cout<<"Hora: " <<time->tm_hour <<":" <<time->tm_min <<":" <<time->tm_sec <<endl <<endl;
						cout<<"\t\t\t\tDIRECCIÓN" <<endl;
						cout<<"CÓDIGO" <<"\tNOMBRE" <<"\t\tCALLE" <<"\t\tNÚMERO" <<"\tCIUDAD" <<"\t\tPAÍS" <<"\tDEPARTAMENTO" <<"\t\tNIVEL" <<" SUELDO" <<"\t STATUS" <<endl;
		
						for(EMP[50].CODIGO = 1; EMP[50].CODIGO <= 50; EMP[50].CODIGO ++){
							CONTADOR = EMP[50].CODIGO;
							
							cout<<"   " <<CONTADOR <<"\t" <<EMP[CONTADOR].NOMBRE[CONTADOR] <<"\t\t" <<EMP[CONTADOR].CALLE[CONTADOR] <<"\t\t" <<EMP[CONTADOR].NUMERO[CONTADOR] <<"\t" <<EMP[CONTADOR].CIUDAD[CONTADOR] <<"\t\t" <<EMP[CONTADOR].PAIS[CONTADOR] <<"\t" <<EMP[CONTADOR].DEPARTAMENTO[CONTADOR] <<"\t\t\t  " <<EMP[CONTADOR].NIVEL[CONTADOR] <<"  Q." <<EMP[CONTADOR].SUELDO[CONTADOR] <<"\t   " <<EMP[CONTADOR].STATUS[CONTADOR] <<endl <<endl;		
						}
						
						if(EMP[50].CODIGO == 50){
							return 0;
						}		
					}
					else{
						if(DECISION == 3){
							cout<<"No. de carné: 1590-20-19423" <<endl;
							cout<<"Nombre: Carlos Enrrique Gómez Morales" <<endl ;
							cout <<"Fecha: " <<time->tm_mday << " de " << Mes[time->tm_mon] <<" de " <<Anio <<endl; 
							cout<<"Hora: " <<time->tm_hour <<":" <<time->tm_min <<":" <<time->tm_sec <<endl <<endl;
							
							return 0;
						}
					}
				}
				else{
					if(DECISION == 2){
						cout<<"No. de carné: 1590-20-19423" <<endl;
						cout<<"Nombre: Carlos Enrrique Gómez Morales" <<endl;
						cout <<"Fecha: " <<time->tm_mday << " de " << Mes[time->tm_mon] <<" de " <<Anio <<endl; 
						cout<<"Hora: " <<time->tm_hour <<":" <<time->tm_min <<":" <<time->tm_sec <<endl <<endl;
						cout<<"\t\t\t\tDIRECCIÓN" <<endl;
						cout<<"CÓDIGO" <<"\tNOMBRE" <<"\t\tCALLE" <<"\t\tNÚMERO" <<"\tCIUDAD" <<"\t\tPAÍS" <<"\tDEPARTAMENTO" <<"\t\tNIVEL" <<" SUELDO" <<"\t STATUS" <<endl;
		
						for(EMP[50].CODIGO = 1; EMP[50].CODIGO <= 50; EMP[50].CODIGO ++){
							CONTADOR = EMP[50].CODIGO;
							
							cout<<"   " <<CONTADOR <<"\t" <<EMP[CONTADOR].NOMBRE[CONTADOR] <<"\t\t" <<EMP[CONTADOR].CALLE[CONTADOR] <<"\t\t" <<EMP[CONTADOR].NUMERO[CONTADOR] <<"\t" <<EMP[CONTADOR].CIUDAD[CONTADOR] <<"\t\t" <<EMP[CONTADOR].PAIS[CONTADOR] <<"\t" <<EMP[CONTADOR].DEPARTAMENTO[CONTADOR] <<"\t\t\t  " <<EMP[CONTADOR].NIVEL[CONTADOR] <<"  Q." <<EMP[CONTADOR].SUELDO[CONTADOR] <<"\t   " <<EMP[CONTADOR].STATUS[CONTADOR] <<endl <<endl;		
						}
						
						if(EMP[50].CODIGO == 50){
							return 0;
						}		
					}
					else{
						if(DECISION == 3){
							cout<<"No. de carné: 1590-20-19423" <<endl;
							cout<<"Nombre: Carlos Enrrique Gómez Morales" <<endl;
							cout <<"Fecha: " <<time->tm_mday << " de " << Mes[time->tm_mon] <<" de " <<Anio <<endl; 
							cout<<"Hora: " <<time->tm_hour <<":" <<time->tm_min <<":" <<time->tm_sec <<endl <<endl;
						
							return 0;
						}
					}
				}	
			}
		}
	}
	else{
		if(DECISION == 2){
			cout<<"No. de carné: 1590-20-19423" <<endl;
			cout<<"Nombre: Carlos Enrrique Gómez Morales" <<endl;
			cout <<"Fecha: " <<time->tm_mday << " de " << Mes[time->tm_mon] <<" de " <<Anio <<endl; 
			cout<<"Hora: " <<time->tm_hour <<":" <<time->tm_min <<":" <<time->tm_sec <<endl <<endl;
			cout<<"\t\t\t\tDIRECCIÓN" <<endl;
			cout<<"CÓDIGO" <<"\tNOMBRE" <<"\t\tCALLE" <<"\t\tNÚMERO" <<"\tCIUDAD" <<"\t\tPAÍS" <<"\tDEPARTAMENTO" <<"\t\tNIVEL" <<" SUELDO" <<"\t STATUS" <<endl;
			
			for(EMP[50].CODIGO = 1; EMP[50].CODIGO <= 50; EMP[50].CODIGO ++){
				CONTADOR = EMP[50].CODIGO;
				
				cout<<"   " <<EMP[CONTADOR].CODIGO <<"\t" <<EMP[CONTADOR].NOMBRE[CONTADOR] <<"\t\t" <<EMP[CONTADOR].CALLE[CONTADOR] <<"\t\t" <<EMP[CONTADOR].NUMERO[CONTADOR] <<"\t" <<EMP[CONTADOR].CIUDAD[CONTADOR] <<"\t\t" <<EMP[CONTADOR].PAIS[CONTADOR] <<"\t" <<EMP[CONTADOR].DEPARTAMENTO[CONTADOR] <<"\t\t\t  " <<EMP[CONTADOR].NIVEL[CONTADOR] <<"  Q." <<EMP[CONTADOR].SUELDO[CONTADOR] <<"\t   " <<EMP[CONTADOR].STATUS[CONTADOR] <<endl <<endl;		
			}
			if(EMP[50].CODIGO == 49){
				return 0;
			}	
		}
		else{
			if(DECISION == 3){
				cout<<"No. de carné: 1590-20-19423" <<endl;
				cout<<"Nombre: Carlos Enrrique Gómez Morales" <<endl;
				cout <<"Fecha: " <<time->tm_mday << " de " << Mes[time->tm_mon] <<" de " <<Anio <<endl; 
				cout<<"Hora: " <<time->tm_hour <<":" <<time->tm_min <<":" <<time->tm_sec <<endl <<endl;
				return 0;
			}
		}
	}
}
