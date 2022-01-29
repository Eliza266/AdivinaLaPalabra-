//LENGUAJE C
//Proyecto final 
//Elizabeth Perez 
//Sofia osejo

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;
//variables globales 

char p1[10], p2[10],p3[10],p4[10],p5[10];
char p11[10], p22[10],p33[10],p44[10],p55[10],pagina[10];
char base[]="------------------------";
int ganar=0;
int intentos=10;
char letra;
int palabra,long1,long2,long3,long4,long5;
//funciones 

void palabrasvacias(void);

//funcion principal
int main()
{
	//variables locales
	 char nombre[100], nombre2[100];
	 srand(time(NULL));
	 
	 int rep;		
	 
	 //bienvenida
	cout<<"____________Lenguaje C _____________"<<'\n'<<"   PROYECTO FINAL     "<<"\n";
    cout<<"\n"<<"Elizabeth Perez Valderrama"<<endl<<"Sofia Osejo Gallo "<<"\n"<<"\n";                   
                        
						                   
	 cout<<"Hola bienvenido a ADIVINA LA PALABRA "<<endl;
	 cout<< "Este es un juego para jugar en pareja: un jugador escribe las palabras y el otro las adivina"<<endl;
	 cout<<"Escribe tu nombre: "<<endl;
	 cin.getline(nombre,100,'\n');//guarda el nombre con espacios en la variable
	 cout<<"hola "<<nombre<<" escribe 5 palabras diferentes:"<<endl;
	 cout<<"1. ";
	 cin>>p1;
   	 cout<<"2 ";
	 cin>>p2;
	 cout<<"3 ";
	 cin>>p3;
	 cout<<"4 ";
	 cin>>p4;
	 cout<<"5 ";
	 cin>>p5;
	 
	 cout<<"Gracias, chao  "<<nombre<<endl; 
     system("cls");
	 
	 //tamaño de las palabras 
	 long1= strlen(p1);//tamaño de p1 guardado en long1
	 long2= strlen(p2);
	 long3= strlen(p3);
	 long4= strlen(p4);
	 long5= strlen(p5);
	 
	 //Funcion cambiar la palabra oculta por guiones
	 palabrasvacias();
	
	 //eleccion de palabra
	 getchar();
	 cout<<"Escribe tu nombre"<<endl;
	 cin.getline(nombre2,100,'\n');//guarda el nombre con espacios en la variable
	 
	 system("cls");
	 
	do//repite si el usuario quiere adivinar otra palabra
	{
		cout<<"__Lenguaje C ___"<<'\n'<<"   PROYECTO FINAL     "<<"\n";
		cout<<" Hola  "<<nombre2 <<" Adivina la palabra"<<endl;
        
		palabra= 1+ rand()%(6-1);//numero aleatorio entre 0-5 para cambiar la palabra
		system("color 07");	
		intentos=10;
		ganar=0;
			
		switch (palabra)
	    {
	    	case 1:
	 	    {
	 	    	strcpy(pagina,p1);
            	while(ganar!=long1)
                {
             	    // void verificarPalabra();  void intento();
			        cout<<"palabra oculta: "<<p11<<endl;
		            cout<<"escriba una letra"<<endl<<endl;
			        cin>>letra;
		            //validamos letra
		            for(int i=0;i<long1;i++)
		            {
		                if(p1[i]==letra)
		                {
		           	        p11[i]=letra;
					    }
				    }
				    cout<<"__________"<<endl<<endl;
				    getchar();
				    intentos-=1;
				    printf("intentos restantes: %d \n", intentos);  
				
				    //validamos palabra 
				    for(int j=0;j<long1;j++)
                    {
 			            if(p1[j]==p11[j])
 		            	{
 			                ganar+=1;
		                }
				    }
					if(ganar==long1)
					{
						system("color 20");
						cout<<"palabra oculta: "<<p11<<endl;
						cout<<"Muy bien has descubierto la palabra  "<<endl;
						break;
					}
					else
					{
						ganar=0;
					}

		        	if(intentos<1)
		        		{
		            		system("color 40");
							cout<<"Lo siento, has llegado al numero limite de intentos"<<endl;
		            		break;
		        		}
				}
             	break;
			 }
			 
			case 2:
	 		{
	 			
	 			strcpy(pagina,p2);
                while(ganar!=long2)
                {
             	    // void verificarPalabra();  void intento();
			        cout<<"palabra oculta: "<<p22<<endl;
		            cout<<"escriba una letra"<<endl;
			        cin>>letra;
		            //validamos letra
		            for(int i=0;i<long2;i++)
		            {
		                if(p2[i]==letra)
		                {
		           	        p22[i]=letra;
					    }
				    }
				    cout<<"__________"<<endl<<endl;
				    getchar();
				    intentos-=1;
				    printf("intentos restantes: %d \n", intentos);  
				
				    //validamos palabra 
				    for(int j=0;j<long2;j++)
                    {
 			            if(p2[j]==p22[j])
 		                {
 			                ganar+=1;
		                }
				    }
					if(ganar==long2)
					{
						system("color 20");
						cout<<"palabra oculta: "<<p22<<endl;
						cout<<"Muy bien has descubierto la palabra  "<<endl;
						break;
					}
					else
					{
						ganar=0;
					}

		        	if(intentos<1)
		        	{
		            	system("color 40");
						cout<<"Lo siento, has llegado al numero limite de intentos"<<endl;
		            	break;
		        	}
				}
             	break;
			 }
			 	
			case 3:
	 		{
	 			strcpy(pagina,p3);
                while(ganar!=long3)
                {
             	    // void verificarPalabra();  void intento();
			        cout<<"palabra oculta: "<<p33<<endl;
		            cout<<"escriba una letra"<<endl;
			        cin>>letra;
		            //validamos letra
		            for(int i=0;i<long3;i++)
		            {
		                if(p3[i]==letra)
		                {
		           	        p33[i]=letra;
					    }
				    }
				     cout<<"__________"<<endl<<endl;
					getchar();
				    intentos-=1;
				    printf("intentos restantes: %d \n", intentos);  
				
				    //validamos palabra 
				    for(int j=0;j<long3;j++)
                    {
 			            if(p3[j]==p33[j])
 		                {
 			                ganar+=1;
		                }
				    }
					if(ganar==long3)
					{
						system("color 20");
						cout<<"palabra oculta: "<<p33<<endl;
						cout<<"Muy bien has descubierto la palabra  "<<endl;
						break;
					}
					else
					{
						ganar=0;
					}

		        	if(intentos<1)
		        	{
		            	system("color 40");
						cout<<"Lo siento, has llegado al numero limite de intentos"<<endl;
		            	break;
		        	}
				}
             	break;
			 }
	 		  
			case 4:
			{
				strcpy(pagina,p4);
                while(ganar!=long4)
                {
             	    // void verificarPalabra();  void intento();
			    	cout<<"palabra oculta: "<<p44<<endl;
		            cout<<"escriba una letra"<<endl;
			        cin>>letra;
		            //validamos letra
		            for(int i=0;i<long4;i++)
		            {
		                if(p4[i]==letra)
		                {
		           	        p44[i]=letra;
					    }
				    }
				    cout<<"__________"<<endl<<endl;
					getchar();
				    intentos-=1;
				    printf("intentos restantes: %d \n", intentos);  
				
				    //validamos palabra 
				    for(int j=0;j<long4;j++)
                    {
 			            if(p4[j]==p44[j])
 		                {
 			                ganar+=1;
		                }
				    }				
					if(ganar==long4)
					{
						system("color 20");
						cout<<"palabra oculta: "<<p44<<endl;
						cout<<"Muy bien has descubierto la palabra  "<<endl;
						break;
					}
					else
					{
						ganar=0;
					}

		        	if(intentos<1)
		        	{
		            	system("color 40");
						cout<<"Lo siento, has llegado al numero limite de intentos"<<endl;
		            	break;
		        	}
				}
             	break;
			 } 
			case 5:
			{
				strcpy(pagina,p5);
            	while(ganar!=long5)
                {
             	    // void verificarPalabra();  void intento();
			        cout<<"palabra oculta: "<<p55<<endl;
		            cout<<"escriba una letra"<<endl;
			        cin>>letra;
		            //validamos letra
		            for(int i=0;i<long5;i++)
		            {
		                if(p5[i]==letra)
		                {
		           	        p55[i]=letra;
					    }
				    }
				    cout<<"__________"<<endl<<endl;
				    getchar();
				    intentos-=1;
				    printf("intentos restantes: %d \n", intentos);  
				
				    //validamos palabra 
				    for(int j=0;j<long5;j++)
                    {
 			            if(p5[j]==p55[j])
 		                {
 			                ganar+=1;
		                }
				    }
					if(ganar==long5)
					{
						system("color 20");
						cout<<"palabra oculta: "<<p55<<endl;
						cout<<"Muy bien has descubierto la palabra  "<<endl;
						break;
					}
					else
					{
						ganar=0;
					}

		        	if(intentos<1)
		        	{
		            	system("color 40");
						cout<<"Lo siento, has llegado al numero limite de intentos"<<endl;
		            	break;
		        	}
				}
             	break;
			 } 
	 	}
	 
	cout<<"Quieres adivinar otra palabra?   "<<endl<<"Escribe 1 para continuar o 2 para finalizar"<<endl; 
	cin>>rep;
	system("cls");
	}
    
    while(rep==1);

	
	
    cout<<"Juego finalizado"<<endl;
    FILE *archivo=fopen("Partidas.html", "w");
    fprintf(archivo, "<html>");
	fprintf(archivo, "<CENTER>");
    fprintf(archivo, "<p>ADIVINA LA PALABRA</p>");
    fprintf(archivo, "</CENTER>");
	fclose(archivo);
	
    FILE *j=fopen("Partidas.html", "a");
    fprintf(j, "<html>");
	fprintf(j, "<CENTER>");
    fprintf(j, "<p>Elizabeth Perez y Sofia Osejo</p>");
    fprintf(j, "</CENTER>");
	fclose(j);	
	
    FILE *g=fopen("Partidas.html", "a");
    fprintf(g, "<html>");
      fprintf(g, "<marquee direction=up>");
    fprintf(g, "<p>MARCADORES </p>");
     fprintf(g, "</marquee>");
	fclose(archivo); 
	
	FILE *f=fopen("Partidas.html", "a");
	fprintf(f, "<p>Creador palabra:%s</p>   <p>Jugador:%s</p>  <p>Palabra secreta:%s</p> <p>Intentos restantes:%d</p>  ", nombre,nombre2,pagina,intentos);
    fclose(archivo); 
    
	FILE *h=fopen("Partidas.html", "a");
	fprintf(h, "___________________________________________________________________________" );
    fclose(archivo); 
	system("Partidas.html");
	return 0;
	
	
}

//llena las palabras ocultas de guiones
void palabrasvacias(void)
{
	//palabra 1
	 for (int i=0;i<long1;i++)
	 {
	 	if(long1>0)
	 	{
	 		p11[i]=base[i];
		 }
	 }
	 
	//palabra 2
	 	 for (int i=0;i<long2;i++)
	 {
	 	if(long1>0)
	 	{
	 		p22[i]=base[i];
		 }
	 }
	 //palabra 3
	  for (int i=0;i<long3;i++)
	 {
	 	if(long3>0)
	 	{
	 		p33[i]=base[i];
		 }
	 }
	 //palabra 4
	  for (int i=0;i<long4;i++)
	 {
	 	if(long4>0)
	 	{
	 		p44[i]=base[i];
		 }
	 }
	 //palabra 5
	  for (int i=0;i<long5;i++)
	 {
	 	if(long5>0)
	 	{
	 		p55[i]=base[i];
		 }
	 }
	 
	 
	return;
}

