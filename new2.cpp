#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
using namespace std;

struct Nodo
{
    /* data */
    char codigo[5];
    char nombres[30];
    char apellidos[30];
    short edad;
    float saldo;

    Nodo *siguiente;
    Nodo *anterior;
} * cola, *cabeza;

void menu();
void registrar();
void imprimir(short opc);
void actualizar();
void buscarEdad();
void eliminar();
void error(char m_error[60]);
Nodo *buscarCodigo(char auxCod[24]);
void calcularMaximo(Nodo* cabeza);

int main(int argc, char const *argv[])
{
    /* code */
    menu();
    return EXIT_SUCCESS;
}

void menu()
{
    int opc = 0;

    do
    {
        cout << "----- Menu -----\n";
        cout << " Digite una opcion." << endl;
        cout << "1. Ingresar una nueva cuenta\n";
        cout << "2. Eliminar una cuenta\n";
        cout << "3. Mostrar listado Ascendente por codigo\n";
        cout << "4. Mostrar listado Descendente por codigo\n";
        cout << "5. Actualizar una cuenta\n";
        cout << "6. Calcular el saldo promedio de todas las cuentas\n";
        cout << "7. Saldo Maximo\n";
        cout << "8. Saldo Minimo\n";
        cout << "9. Terminar\n";
        
        cin >> opc;

        switch (opc)
        {
        case 1:
            registrar();
            break;
        case 2:
            eliminar();
            break;            
        case 3:
            imprimir(0);
            break;
        case 4:
            imprimir(1);
            break;
        case 5:
            actualizar();
            break;

        case 6:
            buscarEdad();
            break;

        case 7:
			calcularMaximo(Nodo * cabeza);
            break;
        default:
            error("Elige una opcion valida ! Boludo.");
            break;
        }

    } while (opc != 7);
}

void registrar()
{
    system("CLS");
    char auxCod[5];
    cout << "Codigo de la cuenta: \n";
    fflush(stdin);
    gets(auxCod);

    if (buscarCodigo(auxCod) == NULL)
    {
        Nodo *nuevo = new Nodo(); //Creando el nodo si la condicion se cumple
        strcpy(nuevo->codigo, auxCod);
        cout << "Nombres de el cliente :";
        fflush(stdin);
        gets(nuevo->nombres);
        cout << "Apellidos de el cliente :";
        fflush(stdin);
        gets(nuevo->apellidos);
        

        while (true)
        {
            cout << "Edad de el cliente :";
            fflush(stdin);
            cin >> nuevo->edad;
            if (nuevo->edad > 0 && nuevo->edad <= 100)
            {
                break;
            }
            else
            {
                error("La edad del el cliente debe ser mayor a 0 y menor a 100");
            }
        }
       
        
        while (true)
        {
            cout << "Saldo de el cliente :";
        	fflush(stdin);
        	cin >> nuevo->saldo;
        	
            if (nuevo->saldo > 0)
            {
                break;
            }
            else
            {
                error("El saldo ingresado debe ser mayor a 0");
            }
        }
        fflush(stdin);
        
        
        

        if (cabeza == NULL)
        {
            cabeza = nuevo;
            cabeza->siguiente = NULL;
            cabeza->anterior = NULL;
            cola = cabeza;
        }
        else
        {
            cola->siguiente = nuevo;
            nuevo->siguiente = NULL;
            nuevo->anterior = cola;
            cola = nuevo;
        }
    }
    else
    {
        error("Este codigo ya existe ingresa otro porfi");
    }
    system("PAUSE");
}

void imprimir(short opc)
{

    system("CLS");
    fflush(stdin);
    Nodo *actual = new Nodo();
    if (opc == 0)
    {
        actual = cabeza;
    }
    else
    {
        actual = cola;
    }

    if (cabeza != NULL)
    {

        while (actual != NULL)
        {
            cout << "-------------------\n";
            fflush(stdin);
            cout << "Codigo de el cliente :"
            << actual->codigo << endl;
            fflush(stdin);     
            cout << "Nombres de el cliente :"
                 << actual->nombres << endl;
        	fflush(stdin);
            cout << "Apellidos de el cliente:"
                 << actual->apellidos << endl;
            fflush(stdin);     
            cout << "Edad de el cliente:"
                 << actual->edad <<endl;
            fflush(stdin);     
            cout << "Saldo del el cliente:"
                 << actual->saldo << endl;
            fflush(stdin);     
            
            cout << "-------------------\n";
            if (opc == 0)
            {
                actual = actual->siguiente;
            }
            else
            {
                actual = actual->anterior;
            }
        }
    }else{
    	error("La lista esta vacia, llenala porfis");
	}
}


void actualizar (){
	system ("CLS");
	
	if (cabeza != NULL){
		short opc =0;
		char auxCod[5];
		cout << "Ingrese el codigo del paciente que desea actualizar: ";
		fflush(stdin);
		gets(auxCod);
		
		Nodo * busqueda = buscarCodigo(auxCod);
		
		if (busqueda == NULL){
			error("No tenemos en nuestra base de datos a ese nene :3");
		}else{
			do{
				system("CLS");
				cout << "----- Menu -----\n";
		        cout << " Digite una opcion." << endl;
		        cout << "1. Nombres\n";
		        cout << "2. Apellidos\n";
		        cout << "3. Edad\n";
		        cout << "4. Saldo\n";
		        cout << "5. Regresar al menu anterior\n";
		        cin >> opc;
		        
		        switch (opc)
		        {
		        	case 1:
		        		cout << "\n\nIngrese los nuevos nombres: ";
		        		fflush(stdin);
						gets(busqueda->nombres);
		        		break;
		        	case 2:
		        		cout << "\n\nIngrese los nuevos Apellidos: ";
		        		fflush(stdin);
						gets(busqueda->apellidos);
		        		break;
		        	case 3:
		        		do{
		        			cout << "\n\nIngrese la nueva edad: ";
							cin >> busqueda->edad;
							if(busqueda->edad < 0 && busqueda->edad > 100){
								error("Recuerda que nadie tiene -0 anios");
							}
						}while(busqueda->edad < 0 && busqueda->edad > 100 );
		        		break;
		        	case 4:
		        		cout << "\n\nIngrese el nuevo Saldo: ";
		        		fflush(stdin);
						cin >> busqueda->saldo;
		        		break;		        	
					case 5:
						return;
						break;		        	
				}
			}while(opc != 6);
		}
		
	}else{
		cout <<"Aun no ha ingresado ninguna cuenta por ende no hay datos que actualizar."<<endl;
	}
	
}


void calcularMaximo(Nodo * cabeza){
	
	float mayor = 0, menor = 999999999;
	
	while (cabeza != NULL){//recorrer la lista
		
		if ((cabeza -> saldo) > mayor){ //Calculando el mayor de la lista del saldo
			
			mayor = cabeza -> saldo;
		}	
		
		if((cabeza -> saldo) < menor){//Calculando el menor de la lista de saldo
			menor = cabeza ->saldo;
		}
		cabeza = cabeza -> siguiente;//Se avanza una posicion en la lista
	}
	
	cout <<"El mayor elemento es:"<<mayor<<endl;
	cout <<"El mayor elemento es:"<<mayor<<endl;
	
	
	
}
void promedio_saldo_all_accounts(){
	
	
	
	
	
	
	
}

void buscarEdad(){
	system("CLS");
	if(cabeza != NULL){
		Nodo *actual = new Nodo();
		short edad;
		bool bandera = false;
		
		do{
			cout<< "Ingrese la edad a buscar:\n";
			cin >> edad;
			if(edad < 0 || edad > 100) error("Reuerda que nadie tiene 0 años o -0 años"); else break;
		}while(true);
		
		actual = cabeza;
		
		system("CLS");
		cout << "Los pacientes con una edad de " << edad << " son:\n\n";
		while(actual != NULL){
			if(actual -> edad == edad){
				cout << "------------------------\n";
				cout << "El codigo del paciente: " << actual->codigo <<endl;
				cout << "El nombre del paciente:" << actual->nombres <<endl;
				cout << "El apellido del paciente: " << actual->apellidos <<endl;
				cout << "La edad del paciente: " << actual->edad <<endl;
			    cout << "------------------------\n";
				bandera = true;	
			}			
			actual = actual->siguiente;
		}
		
		if(!bandera) cout << "0.\n\n";
		
	} else cout << "La lista se encuentra vacia.\n\n";

	system("PAUSE");
}

void eliminar(){
	system("CLS");
	if(cabeza != NULL){	
		char aux[5];
		
		printf("Ingrese el codigo del paciente al que desea actualizar.\n");
		fflush(stdin);
		gets(aux);
		
		Nodo *busqueda = buscarCodigo(aux);
	
		if(busqueda == NULL) cout << "No se encontro un paciente con el codigo: " << aux; else {
			// SI EL NODO ES EL UNICO EN LA LISTA
			if(busqueda->anterior == NULL && busqueda->siguiente == NULL)
				cabeza = NULL;
			// SI ES EL PRIMERO 
			else if(busqueda->siguiente != NULL && busqueda->anterior == NULL){
				busqueda->siguiente = cabeza;
				busqueda->siguiente->anterior = NULL;
				
			// SI ES EL ULTIMO
			} else if(busqueda->siguiente == NULL && busqueda->anterior != NULL){
				busqueda->anterior = cola;
				busqueda->anterior->siguiente = NULL;
			// SI ESTA EN EL MEDIO
			} else {
				busqueda->anterior->siguiente = busqueda->siguiente;
				busqueda->siguiente->anterior = busqueda->anterior;
			}
			free(busqueda);
		}
	} else cout << "La lista se encuentra vacia.\n\n";
	system("PAUSE");
}

void error(char m_error[60])
{
    system("CLS");
    cout << m_error << "\n\n";

    system("PAUSE");

    system("CLS");
    fflush(stdin);
}

Nodo *buscarCodigo(char auxCod[24])
{

    Nodo *actual = new Nodo();
    actual = cabeza;

    while (actual != NULL)
    {
        //Verificar todos los codigos en todos los nodos
        if (strcmp(auxCod, actual->codigo) == 0)
        {

            return actual;
        }
        actual = actual->siguiente;
    }
    //Si retorna null es por que ningun nodo tiene el codigo
    return NULL;
}



