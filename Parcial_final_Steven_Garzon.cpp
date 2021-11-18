#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<windows.h>
#define MAX 100
#include <cstdlib>
using namespace std;

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

 
struct nodo{
    int nombre;
    struct nodo *sgte;
    struct arista *ady;
};

struct arista{
	struct nodo *destino;
    struct arista *sgte;
};
    
typedef struct nodo *Tnodo;
typedef struct arista *Tarista;
 
Tnodo puntero;
int contadorN=0;

int matrizAdyacente[MAX][MAX];
int nodos[MAX];
int contador=0;
int contadori=0;
int contadorj=0;

int matrizIncidecia[MAX][MAX];
int vectorVertices[MAX];
int contadorverti = 0;
int cantidadverti=0;

int matrizArcos[MAX][MAX];
int contarc=0;

int matrizDistan[MAX][MAX];
int contadorDis=0;


void menu();
void insertarNodo();
void agregarArista(Tnodo &, Tnodo &, Tarista &);
void insertarArista();
void matrizadyacente();
void matrizincidencia();
void matrizArco();
void matrizDistancia();
void crearMatriz();

 
main(){  
	puntero=NULL;
	aportada();
	nodos[contadorN];
    matrizAdyacente[contadorN][contadorN];
   
    matrizIncidecia[contadorN][cantidadverti];
	for(int i=0;i<contadorN;i++){
    	for(int j=0;j<contadorN;j++){
    		matrizAdyacente[i][j]=0;
   
		}
	}

	for(int i=0;i<contadorN;i++){
    	for(int j=0;j<cantidadverti;j++){
    		matrizIncidecia[i][j]=0;
   
		}
	}
	for(int i=0;i<contadorN;i++){
    	for(int j=0;j<cantidadverti;j++){
    		printf("%d",matrizIncidecia[i][j]);
		}
	}
	menu();
    return 0;
}

void menu(){
	short opc;
    do
    {
    	printf("\n\n");
    	printf("----BIENVENIDOS-----\n\n");
		printf("Elija una opcion: \n");
		printf("1.Crear grafos\n2.Mostrar matriz de adyacencia\n3.Mostrar matriz de incidencia\n4.Mostrar matriz de arcos\n5.Mostrar matriz de distancia\n6.Salir\n");
		printf("\n--------------------\n");
		scanf("%hi",&opc);
 
        switch(opc) {
            case 1:
            	short op;
				do{
					printf("------ MENU ------\n\n");
					printf("1.Ingresar vertice\n2.Ingresar arista\n3.Salir\n");
					printf("\n-------------------\n");
					scanf("%hi",&op);
					switch(op){
						case 1:
							insertarNodo();
                			contadorN++;
							break;
						case 2:
							cantidadverti++;
							insertarArista();
							break;
						case 3:
							break;
						default:
							printf("ERROR\n");
							break;
						
					}
				}while(op!=3);
                break;
            case 2:
				matrizadyacente();
                break;
            case 3:
				matrizincidencia();
                break;
            case 4:
            	matrizArco();
            	break;      
            case 5:
            	printf("No alcance a terminarla.");
                break;
            case 6:
            	break;
            default:
            	printf("ERROR\n");
                break;
        }
 
        system("pause");
		system("cls");
 
    }while(opc!=6);
    getch();
   
}

void matrizArco(){
  int contadorARCOS=0;
  for(int i=0;i<contarc;i++){
	printf("\tARCO %d",contadorARCOS);
	for(int j=0;j<2;j++){
  		cout<<"   "<<matrizArcos[i][j];
	}
	cout<<endl;
	contadorARCOS++;
}
 }
 
void insertarNodo()
{

    Tnodo t,nuevo=new struct nodo;
    cout<<"Ingrese vertice:\n";
    cin>>nuevo->nombre;
    nuevo->sgte = NULL;
    nuevo->ady=NULL;
 
    if(puntero==NULL)
     {
        puntero = nuevo;
        nodos[0]=nuevo->nombre;
        cout<<"primer nodo\n";
      }
    else
     {
        t = puntero;
        while(t->sgte!=NULL)
         {
            t = t->sgte;
          }
        t->sgte = nuevo;
        nodos[contador]=nuevo->nombre;
        cout<<"nodo ingresado\n";
      }
      contador++;
 
 }
 
void agregarArista(Tnodo &aux, Tnodo &aux2, Tarista &nuevo)
{
    Tarista agregar;
    if(aux->ady==NULL)
    {   aux->ady=nuevo;
        nuevo->destino=aux2;
        cout<<"primera arista\n";
    }
    else
    {   agregar=aux->ady;
        while(agregar->sgte!=NULL)
            agregar=agregar->sgte;
        nuevo->destino=aux2;
        agregar->sgte=nuevo;
        cout<<"arista agregada \n";
    }
 
}

void insertarArista()
{

	vectorVertices[cantidadverti];
	int inicial, final;
    Tarista nuevo=new struct arista;
    Tnodo aux, aux2;
	contadori=0;
	contadorj=0;
    if(puntero==NULL)
     {
         cout<<"\n El grafo se encuentra vacio.";
         return;
     }
    nuevo->sgte=NULL;
    cout<<"\nIngrese el nodo inicial : ";
    cin>>inicial;
    cout<<"\nIngrese el nodo final : ";
    cin>>final;
    int i=0;
   
    while(nodos[i]!=inicial){
    contadori++;
    i++;
}
   int j=0;
   int contarDis=0;
	while(nodos[j]!=final){
    	contadorj++;
    	j++;
	}
	matrizAdyacente[contadori][contadorj]=1;

	for(int i =0;i<cantidadverti;i++){
		vectorVertices[i]=(i+1);
	}
	int contarco=0;
	matrizIncidecia[contadori][contadorverti]=1;
	matrizIncidecia[contadorj][contadorverti]=1;
	contadorverti++;
	
	matrizArcos[contarc][contarco]=inicial;
    contarco++;
    matrizArcos[contarc][contarco]=final;
    contarc++;
    
    matrizDistan[contadorDis][contarDis]=inicial;
    contarDis++;
    matrizDistan[contadorDis][contarDis]=final;
    contadorDis++;
    
    aux=puntero;
    aux2=puntero;
    while(aux2!=NULL){
        if(aux2->nombre==final){
            break;
        }
        aux2=aux2->sgte;
    }
    while(aux!=NULL){
        if(aux->nombre==inicial){
            agregarArista(aux,aux2, nuevo);
            return;
        }
 
        aux = aux->sgte;
    }
   
   
   
}

void matrizadyacente(){ 
	
	
	printf(" ");
	for(int i=0;i<contadorN;i++){
		printf(" %d",nodos[i]);
	}
	cout<<endl;
	for(int i=0;i<contadorN;i++){
		printf("%d ",nodos[i]);
	for(int j=0;j<contadorN;j++){
		printf("%d ",matrizAdyacente[i][j]);
	}
	printf("\n");
	}

}
 

void matrizincidencia(){
	printf(" ");
	for(int i=0;i<cantidadverti;i++){
		printf(" %d",vectorVertices[i]);
	}
	printf("\n");
	
	for(int i = 0;i<contadorN;i++){
		printf("%d ",nodos[i]);
	for(int j = 0; j<cantidadverti;j++){
		printf("%d ",matrizIncidecia[i][j]);
	}
	printf("\n");
	}

}


