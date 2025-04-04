/*Desarrollar una aplicación en C que permita gestionar información sobre
computadoras (PC) utilizando estructuras y funciones. La aplicación deberá
generar datos aleatorios para un conjunto de PCs y luego implementar funciones
para mostrar la información y encontrar características específicas.
a. Definición de la Estructura de Datos
Deberás declarar un tipo de dato struct para representar una PC. La estructura se
llamará compu y contendrá los siguientes campos:
struct compu {
 int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
 int anio; // Año de fabricación (valor entre 2015 y 2024)
 int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
 char *tipo_cpu;*/
 #include <stdlib.h>
 #include <stdio.h>
 #include <time.h>
 struct{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
}typedef compu;
void listarPCs(compu p[], int cantidad);
void mostrarMasVieja(compu pcs[], int cantidad);
void mostrarMasVeloz(compu pcs[], int cantidad);
int main(){
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core",
    "Pentium"};
    int numeroDePC = 5;
    srand(time(NULL));
    compu *pcs = (compu*)malloc(sizeof(compu)*numeroDePC);
    int k,l;
    for(int i=0;i<numeroDePC;i++){
        pcs[i].velocidad = 1 + rand() % (3); 
        pcs[i].anio = rand () % (2024-2015+1) + 2015;  
        pcs[i].cantidad_nucleos = rand() % (8);
        // Este está entre M y N
            k = rand() % 6;
            pcs[i].tipo_cpu = tipos[k];
    }
    listarPCs(pcs,numeroDePC);
    mostrarMasVieja(pcs,numeroDePC);
    mostrarMasVeloz(pcs,numeroDePC);
}
void listarPCs(compu p[], int cantidad){
    for(int i=0;i<cantidad;i++){
        printf("\nPc N°%d",i+1);
        printf("\nVelocidad: %d",p[i].velocidad);
        printf("\nAnio: %d",p[i].anio);
        printf("\nCantidad de Nucleos: %d",p[i].cantidad_nucleos);
        printf("\nTipo CPU: %s",p[i].tipo_cpu);
    }
}   
void mostrarMasVieja(compu pcs[], int cantidad){
    int i;
    int indice;
    int menor = 1000;
    for(i=0;i<cantidad;i++){
        if(pcs[i].anio < menor){
            menor = pcs[i].anio;
            indice = i;
        }
    }
    printf("\nPc mas vieja: ");
    printf("\nVelocidad: %d",pcs[indice].velocidad);
    printf("\nAnio: %d",pcs[indice].anio);
    printf("\nCantidad de Nucleos: %d",pcs[indice].cantidad_nucleos);
    printf("\nTipo CPU: %s",pcs[indice].tipo_cpu);
}
void mostrarMasVeloz(compu pcs[], int cantidad){
    int i;
    int indice;
    int velocidad = 0;
    for(i=0;i<cantidad;i++){
        if(pcs[i].velocidad> velocidad){
            velocidad = pcs[i].velocidad;
            indice = i;
        }
    }
    printf("\nPc Mas Rapida:");
    printf("\nVelocidad: %d",pcs[indice].velocidad);
    printf("\nAnio: %d",pcs[indice].anio);
    printf("\nCantidad de Nucleos: %d",pcs[indice].cantidad_nucleos);
    printf("\nTipo CPU: %s",pcs[indice].tipo_cpu);

}  
