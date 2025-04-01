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
int main(){
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core",
    "Pentium"};
    int numeroDePC;
    srand(time(NULL));
    compu *pcs = (compu*)malloc(sizeof(compu)*numeroDePC);
    for(int i=0;i<numeroDePC;i++){
        pcs[i].velocidad = 1 + rand() % (3); 
        pcs[i].anio = rand () % (2024-2015+1) + 2015;  
        pcs[i].cantidad_nucleos = 1 + rand() % (8);
        // Este está entre M y N
    }

}
/*La aplicación no requerirá ingreso de datos por teclado. En su lugar,
generará aleatoriamente las características para 5 PCs.
● Valores Numéricos Aleatorios:
○ Velocidad: Generar un valor entero aleatorio entre 1 y 3
(inclusive).
○ Año: Generar un valor entero aleatorio entre 2015 y 2024
(inclusive).
○ Cantidad de Núcleos: Generar un valor entero aleatorio entre
1 y 8 (inclusive).
● Tipos de Procesador:
○ Utiliza el siguiente arreglo predefinido de cadenas de
caracteres para los tipos de CPU:
char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core",
"Pentium"};
○ Para cada PC generada, el campo tipo_cpu de la estructura
deberá apuntar a una cadena seleccionada aleatoriamente de
este arreglo tipos.
c. Almacenamiento de Datos
● Define una variable que sea un arreglo de 5 elementos del tipo struct
compu. Este arreglo almacenará las características de las 5 PCs
generadas.
d. Funciones a Implementar
Deberás escribir e implementar las siguientes funciones:
*/
void listarPCs(struct compu pcs[], int cantidad){

}
/*Recibe el arreglo de PCs y la cantidad de elementos.
Muestra por pantalla la lista completa de las PCs,
presentando todas las características de cada una de forma
clara.*/
/*
● void mostrarMasVieja(struct compu pcs[], int cantidad):
○ Recibe el arreglo de PCs y la cantidad de elementos.
○ Busca la PC con el menor año de fabricación (la más vieja).
○ Muestra por pantalla las características de la PC más vieja
encontrada. Si hay varias con el mismo año más antiguo,
puedes mostrar la primera que encuentres.
● void mostrarMasVeloz(struct compu pcs[], int cantidad):
○ Recibe el arreglo de PCs y la cantidad de elementos.
○ Busca la PC con la mayor velocidad de procesamiento.
○ Muestra por pantalla las características de la PC más rápida
encontrada. Si hay varias con la misma velocidad máxima,
puedes mostrar la primera que encuentres.*/