#include <stdio.h>
void nombre (char name)
{ 
    printf("\n  Introduzca Nombre: " );
    scanf("%s", &name ); 
}
 
void edad (int anios)
{ 
    printf("\n  Introduzca Edad: " );
    scanf("%d", &anios );  
    if ( anios >= 18 && anios <=25 )
        printf( "\n   ALUMNO CON BECA\n" );
    else
        printf( "\n   ALUMNO SIN BECA\n" );
}

 int main() { 
     char name; int anios;
     nombre (name);
     edad (anios);
   }
    
 
