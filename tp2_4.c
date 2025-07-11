#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct compu {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
};
void listarPCs(struct compu pcs[], int cantidad);
void mostrarMasVieja(struct compu pcs[], int cantidad);
void mostrarMasVeloz(struct compu pcs[], int cantidad);

int main(){
    struct compu pcs[5];
    srand(time(NULL)); // semilla para rand()
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"};

    for (int i = 0; i < 5; i++) {
        pcs[i].velocidad = 1 + rand() % 3;        // 1 a 3
        pcs[i].anio = 2015 + rand() % 10;         // 2015 a 2024
        pcs[i].cantidad_nucleos = 1 + rand() % 8; // 1 a 8
        pcs[i].tipo_cpu = tipos[rand() % 6];
    }
    listarPCs(pcs, 5);
    mostrarMasVieja(pcs, 5);
    mostrarMasVeloz(pcs, 5);
    return 0;
}

void listarPCs(struct compu pcs[], int cantidad)
{
    for (int i = 0; i < cantidad; i++) {
        printf("PC %d:\n", i + 1);
        printf("  Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("  Año: %d\n", pcs[i].anio);
        printf("  Núcleos: %d\n", pcs[i].cantidad_nucleos);
        printf("  Tipo CPU: %s\n\n", pcs[i].tipo_cpu);
    }
}

void mostrarMasVieja(struct compu pcs[], int cantidad) {
    int indice_mas_vieja = 0;

    for (int i = 1; i < cantidad; i++) {
        if (pcs[i].anio < pcs[indice_mas_vieja].anio) {
            indice_mas_vieja = i;
        }
    }

    printf("PC más vieja:\n");
    printf("  Velocidad: %d GHz\n", pcs[indice_mas_vieja].velocidad);
    printf("  Año: %d\n", pcs[indice_mas_vieja].anio);
    printf("  Núcleos: %d\n", pcs[indice_mas_vieja].cantidad_nucleos);
    printf("  Tipo CPU: %s\n\n", pcs[indice_mas_vieja].tipo_cpu);
}

void mostrarMasVeloz(struct compu pcs[], int cantidad) {
    int indice_mas_veloz = 0;

    for (int i = 1; i < cantidad; i++) {
        if (pcs[i].velocidad > pcs[indice_mas_veloz].velocidad) {
            indice_mas_veloz = i;
        }
    }

    printf("PC más veloz:\n");
    printf("  Velocidad: %d GHz\n", pcs[indice_mas_veloz].velocidad);
    printf("  Año: %d\n", pcs[indice_mas_veloz].anio);
    printf("  Núcleos: %d\n", pcs[indice_mas_veloz].cantidad_nucleos);
    printf("  Tipo CPU: %s\n\n", pcs[indice_mas_veloz].tipo_cpu);
}