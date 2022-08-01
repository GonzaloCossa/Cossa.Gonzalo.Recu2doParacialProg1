#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int constructora(eVehiculo Auto);

int main()
{
    // Primera Funcion
    typedef struct{
    int id;
    char marca[20];
    int tipo;
    float peso;
    } eVehiculo;

    int constructora(eVehiculo this){
    this.id = 1;
    this.marca = "Peugeot";
    this.tipo = 1;
    this.peso = 486,9;
    }

    // Segunda Funcion
    FILE *arch=fopen("datos1.txt","wt");
    fputs(this.id, arch);
    fputs(this.tipo,arch);
    fputs(this.peso,arch);
    fclose(arch);

    // Tercer Funcion


    return 0;
}
