#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>

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
void eliminar();
void error(char m_error[60]);
Nodo *buscarCodigo(char auxCod[24]);
void calcularMaximo(float saldo);


void gotoxy(int x, int y);
void setColor(int colores);
int backcolor = 0;
//Color FONDO LOGO
int backcolorF = 0;

int colores[7] = {

    0x009,
    0x00E,
    0X00C,
    0X002,
    0X00B,
    0X005,
    0X00F};
int colores2[7] = {

    0x009,
    0x00E,
    0X00C,
    0X002,
    0X00B,
    0X005,
    0X00F};
void color_dentro();
void pinturadentro(int colores2);
void portada();
void mostrartexto(string texto);

int aportada()
{

    //Color de Fondo y de letra en general
    system("color 0F");
    color_dentro();
    portada();
    
}

void portada()
{

    setColor(colores[6]);

    gotoxy(76, 0);
    cout << ("Universidad Santiago de Cali"); //Sleep(2000);

    gotoxy(78, 1);
    cout << ("MATERIA DE PROGRAMACION"); //Sleep(2000);
    gotoxy(79, 2);
    cout << ("PROF RICARDO ALMEIDA "); //Sleep(2000);
    gotoxy(83, 3);
    cout << ("BIENVENIDO ");

    setColor(colores[4]);
    gotoxy(2, 28);
    cout << "Autor: Steven Leonardo Garzon Ospina";

    setColor(colores[6]);
}

//gotoxy();
//cout<<"";
void color_dentro()
{
    //Gris para el interior del logo
    backcolor = 0;
    pinturadentro(colores2[1]);

    int ancho = 110;
    int i;
    for (i = 0; i <= ancho; i++)
    {
        system("color 0E");
        gotoxy(i, 29);
        cout << "*";
    }

    for (int j = 29; j >= 0; j--)
    {
        system("color 0E");
        gotoxy(i, j);
        cout << "*";
        gotoxy(0, j);
        cout << "*";
    }

    //
    setColor(backcolorF = 6);
    gotoxy(46, 0);
    cout << "WWWWWWWWWWWWWWW";
    gotoxy(41, 1);
    cout << "WWWWWWWWWWWWWWWWWWWWWWWWW";
    gotoxy(38, 2);
    cout << "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    gotoxy(35, 3);
    cout << "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    gotoxy(33, 4);
    cout << "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    setColor(backcolorF = 6);
    gotoxy(32, 5);
    cout << "WWW";

    setColor(colores[6]);

    gotoxy(35, 5);
    cout << "WW";
    setColor(backcolorF = 6);
    gotoxy(37, 5);
    cout << "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    setColor(colores[6]);
    gotoxy(69, 5);
    cout << "WW";
    setColor(backcolorF = 6);
    gotoxy(71, 5);
    cout << "WWWW";

    setColor(backcolorF = 6);
    gotoxy(31, 6);
    cout << "WWWWW";
    setColor(colores[6]);
    gotoxy(36, 6);
    cout << "WWWW";
    setColor(backcolorF = 6);
    gotoxy(40, 6);
    cout << "WWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    setColor(colores[6]);
    gotoxy(67, 6);
    cout << "WWWW";
    setColor(backcolorF = 6);
    gotoxy(71, 6);
    cout << "WWWWW";
    setColor(colores[6]);

    //Blanco
    gotoxy(37, 7);
    cout << "WWWWW";
    gotoxy(65, 7);
    cout << "WWWWW";

    gotoxy(38, 8);
    cout << "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";

    gotoxy(39, 9);
    cout << "WWWWW";
    gotoxy(63, 9);
    cout << "WWWWW";

    gotoxy(40, 10);
    cout << "WWWWW";
    gotoxy(62, 10);
    cout << "WWWWW";

    gotoxy(40, 11);
    cout << "WW";
    gotoxy(44, 11);
    cout << "WWWW";
    gotoxy(59, 11);
    cout << "WWWW";
    gotoxy(65, 11);
    cout << "WW";

    gotoxy(46, 12);
    cout << "WWWW";
    gotoxy(57, 12);
    cout << "WWWW";

    gotoxy(40, 12);
    cout << "WW";
    gotoxy(65, 12);
    cout << "WW";
    gotoxy(43, 12);
    cout << "WW";
    gotoxy(62, 12);
    cout << "WW";

    gotoxy(40, 13);
    cout << "WW";
    gotoxy(47, 13);
    cout << "WWWW";
    gotoxy(56, 13);
    cout << "WWWW";
    gotoxy(65, 13);
    cout << "WW";
    gotoxy(43, 13);
    cout << "WW";
    gotoxy(62, 13);
    cout << "WW";

    gotoxy(48, 14);
    cout << "WWWW";
    gotoxy(55, 14);
    cout << "WWWW";
    gotoxy(65, 14);
    cout << "WW";
    gotoxy(40, 14);
    cout << "WW";
    gotoxy(43, 14);
    cout << "WW";
    gotoxy(46, 14);
    cout << "W";
    gotoxy(60, 14);
    cout << "W";
    gotoxy(62, 14);
    cout << "WW";

    gotoxy(40, 15);
    cout << "WW";
    gotoxy(43, 15);
    cout << "WW";
    gotoxy(48, 15);
    cout << "W";
    gotoxy(62, 15);
    cout << "WW";
    gotoxy(49, 15);
    cout << "WWWWWWWWWW";
    gotoxy(65, 15);
    cout << "WW";

    gotoxy(40, 16);
    cout << "WW";
    gotoxy(44, 16);
    cout << "WWWW";
    gotoxy(59, 16);
    cout << "WWWW";
    gotoxy(50, 16);
    cout << "WWWWWWW";
    gotoxy(65, 16);
    cout << "WW";

    gotoxy(52, 17);
    cout << "WW";
    gotoxy(65, 17);
    cout << "WW";
    gotoxy(40, 17);
    cout << "WW";

    gotoxy(40, 18);
    cout << "WW";
    gotoxy(65, 18);
    cout << "WW";

    gotoxy(40, 19);
    cout << "WW";
    gotoxy(42, 19);
    cout << "WWWWWWWWWWWWWWWWWWWWWWW";
    gotoxy(65, 19);
    cout << "WW";

    gotoxy(40, 20);
    cout << "WW";
    gotoxy(65, 20);
    cout << "WW";

    gotoxy(40, 21);
    cout << "WW";
    gotoxy(65, 21);
    cout << "WW";
    gotoxy(43, 21);
    cout << "WW";
    gotoxy(47, 21);
    cout << "WW";
    gotoxy(50, 21);
    cout << "WWWWWW";
    gotoxy(58, 21);
    cout << "WWWWW";

    gotoxy(40, 22);
    cout << "WW";
    gotoxy(65, 22);
    cout << "WW";
    gotoxy(43, 22);
    cout << "WW";
    gotoxy(47, 22);
    cout << "WW";
    gotoxy(50, 22);
    cout << "WW";
    gotoxy(57, 22);
    cout << "WW";

    gotoxy(40, 23);
    cout << "WW";
    gotoxy(65, 23);
    cout << "WW W";
    gotoxy(43, 23);
    cout << "WW";
    gotoxy(47, 23);
    cout << "WW";
    gotoxy(50, 23);
    cout << "WWWWWW";
    gotoxy(57, 23);
    cout << "WW";

    gotoxy(40, 24);
    cout << "WW";
    gotoxy(65, 24);
    cout << "WW";
    gotoxy(43, 24);
    cout << "WW";
    gotoxy(47, 24);
    cout << "WW";
    gotoxy(50, 24);
    cout << "WWWWWW";
    gotoxy(57, 24);
    cout << "WW";

    gotoxy(40, 25);
    cout << "WW";
    gotoxy(65, 25);
    cout << "WW";
    gotoxy(43, 25);
    cout << "WW";
    gotoxy(47, 25);
    cout << "WW";
    gotoxy(54, 25);
    cout << "WW";
    gotoxy(57, 25);
    cout << "WW";

    gotoxy(40, 26);
    cout << "WW";
    gotoxy(65, 26);
    cout << "WW";
    gotoxy(45, 26);
    cout << "WW";
    gotoxy(50, 26);
    cout << "WWWWWW";
    gotoxy(58, 26);
    cout << "WWWWW";

    gotoxy(40, 27);
    cout << "WW";
    gotoxy(65, 27);
    cout << "WW";

    gotoxy(41, 28);
    cout << "WWWWWWWWWWWWWWWWWWWWWWWWW";

    //Amarillos
    setColor(backcolorF = 6);
    gotoxy(30, 7);
    cout << "WWWWWWW";
    gotoxy(42, 7);
    cout << "WWWWWWWWWWWWWWWWWWWWWWW";
    gotoxy(70, 7);
    cout << "WWWWWWW";

    gotoxy(29, 8);
    cout << "WWWWWWWWW";
    gotoxy(69, 8);
    cout << "WWWWWWWWW";
    //6

    gotoxy(28, 9);
    cout << "WWWWWWWWWWW";
    gotoxy(44, 9);
    cout << "WWWWWWWWWWWWWWWWWWW";
    gotoxy(68, 9);
    cout << "WWWWWWWWWWW";

    gotoxy(27, 10);
    cout << "WWWWWWWWWWWWW";
    gotoxy(45, 10);
    cout << "WWWWWWWWWWWWWWWWW";
    gotoxy(67, 10);
    cout << "WWWWWWWWWWWWW";

    gotoxy(26, 11);
    cout << "WWWWWWWWWWWWWW";
    gotoxy(42, 11);
    cout << "WW";
    gotoxy(67, 11);
    cout << "WWWWWWWWWWWWWW";
    gotoxy(63, 11);
    cout << "WW";
    gotoxy(48, 11);
    cout << "WWWWWWWWWWW";

    gotoxy(26, 12);
    cout << "WWWWWWWWWWWWWW";
    gotoxy(42, 12);
    cout << "W";
    gotoxy(45, 12);
    cout << "WW";
    gotoxy(61, 12);
    cout << "W";
    gotoxy(64, 12);
    cout << "W";
    gotoxy(67, 12);
    cout << "WWWWWWWWWWWWWW";
    gotoxy(50, 12);
    cout << "WWWWWWW";

    gotoxy(26, 13);
    cout << "WWWWWWWWWWWWWW";
    gotoxy(42, 13);
    cout << "W";
    gotoxy(45, 13);
    cout << "WW";
    gotoxy(60, 13);
    cout << "WW";
    gotoxy(67, 13);
    cout << "WWWWWWWWWWWWWW";
    gotoxy(64, 13);
    cout << "W";
    gotoxy(51, 13);
    cout << "WWWWW";

    gotoxy(26, 14);
    cout << "WWWWWWWWWWWWWW";
    gotoxy(42, 14);
    cout << "W";
    gotoxy(45, 14);
    cout << "W";
    gotoxy(47, 14);
    cout << "W";
    gotoxy(59, 14);
    cout << "W";
    gotoxy(61, 14);
    cout << "W";
    gotoxy(67, 14);
    cout << "WWWWWWWWWWWWWW";
    gotoxy(64, 14);
    cout << "W";
    gotoxy(52, 14);
    cout << "WWW";

    gotoxy(26, 15);
    cout << "WWWWWWWWWWWWWW";
    gotoxy(42, 15);
    cout << "W";
    gotoxy(45, 15);
    cout << "WWW";
    gotoxy(59, 15);
    cout << "WWW";
    gotoxy(64, 15);
    cout << "W";
    gotoxy(67, 15);
    cout << "WWWWWWWWWWWWWW";

    gotoxy(27, 16);
    cout << "WWWWWWWWWWWWW";
    gotoxy(42, 16);
    cout << "WW";
    gotoxy(48, 16);
    cout << "WW";
    gotoxy(57, 16);
    cout << "WW";
    gotoxy(63, 16);
    cout << "WW";
    gotoxy(67, 16);
    cout << "WWWWWWWWWWWWW";

    gotoxy(28, 17);
    cout << "WWWWWWWWWWWW";
    gotoxy(42, 17);
    cout << "WWWWWWWWWW";
    gotoxy(67, 17);
    cout << "WWWWWWWWWWWW";
    gotoxy(54, 17);
    cout << "WWWWWWWWWWW";

    gotoxy(29, 18);
    cout << "WWWWWWWWWWW";
    gotoxy(67, 18);
    cout << "WWWWWWWWWWW";
    gotoxy(42, 18);
    cout << "WWWWWWWWWWWWWWWWWWWWWWW";

    gotoxy(30, 19);
    cout << "WWWWWWWWWW";
    gotoxy(67, 19);
    cout << "WWWWWWWWWW";

    gotoxy(31, 20);
    cout << "WWWWWWWWW";
    gotoxy(67, 20);
    cout << "WWWWWWWWW";

    gotoxy(32, 21);
    cout << "WWWWWWWW";
    gotoxy(67, 21);
    cout << "WWWWWWWW";

    gotoxy(33, 22);
    cout << "WWWWWWW";
    gotoxy(67, 22);
    cout << "WWWWWWW";

    gotoxy(35, 23);
    cout << "WWWWW";
    gotoxy(67, 23);
    cout << "WWWWWW";

    gotoxy(36, 24);
    cout << "WWWW";
    gotoxy(67, 24);
    cout << "WWWWW";

    gotoxy(38, 25);
    cout << "WW";

    gotoxy(67, 25);
    cout << "WWW";

    //Apartir del 7

    setColor(colores[0]);
    //Azules
    gotoxy(42, 20);
    cout << "WWWWWWWWWWWWWWWWWWWWWWW";

    gotoxy(42, 21);
    cout << "W";
    gotoxy(45, 21);
    cout << "WW";
    gotoxy(49, 21);
    cout << "W";
    gotoxy(56, 21);
    cout << "WW";
    gotoxy(63, 21);
    cout << "WW";

    gotoxy(42, 22);
    cout << "W";
    gotoxy(45, 22);
    cout << "WW";
    gotoxy(49, 22);
    cout << "W";
    gotoxy(52, 22);
    cout << "WWWWW";
    gotoxy(59, 22);
    cout << "WWWWWW";

    gotoxy(42, 23);
    cout << "W";
    gotoxy(45, 23);
    cout << "WW";
    gotoxy(49, 23);
    cout << "W";
    gotoxy(56, 23);
    cout << "W";
    gotoxy(59, 23);
    cout << "WWWWWW";

    gotoxy(42, 24);
    cout << "W";
    gotoxy(45, 24);
    cout << "WW";
    gotoxy(49, 24);
    cout << "W";
    gotoxy(56, 24);
    cout << "W";
    gotoxy(59, 24);
    cout << "WWWWWW";

    gotoxy(42, 25);
    cout << "W";
    gotoxy(45, 25);
    cout << "WW";
    gotoxy(49, 25);
    cout << "W";
    gotoxy(50, 25);
    cout << "WWWW";
    gotoxy(56, 25);
    cout << "W";
    gotoxy(59, 25);
    cout << "WWWWWW";

    gotoxy(42, 26);
    cout << "WWW";
    gotoxy(47, 26);
    cout << "WWW";
    gotoxy(56, 26);
    cout << "WW";
    gotoxy(63, 26);
    cout << "WW";

    gotoxy(42, 27);
    cout << "WWWWWWWWWWWWWWWWWWWWWWW";
}

void setColor(int colores)
{

    static HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colores | (backcolor * 0x10 + 0x100));
}

void gotoxy(int x, int y)
{

    HANDLE hConsoleOutput;
    COORD Cursor_Pos = {x, y};

    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, Cursor_Pos);
}

void pinturadentro(int colores2)
{

    static HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colores2 | (backcolorF * 0x10 + 0x100));
    
}
//Fin Portada
//---------------
//Inicio programa
//---------------


int main(int argc, char const *argv[])
{
	
    /* code */
    aportada();
    menu();
    return EXIT_SUCCESS;
}

void menu()
{
	cout <<"\n\n\n";
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
            
            break;

        case 7:
		
            break;
        case 9:
        	
			break;    
        default:
            error("Elige una opcion valida !");
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

//NO me funciono pero lo intente :/
/*void calcularMaximo(float mayor){
	
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
	
	
	
}*/




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



