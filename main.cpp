#include <string>
#include <iostream>
using namespace std;

const int MAX_TAREAS = 25;

void mostrarMenu();
void agregarTarea(string tareas[], int& cantidad);
void verTareas(const string tareas[], int cantidad);
void eliminarTarea(string tareas[], int& cantidad);
void ejecutarPrograma();

int main() {
    ejecutarPrograma();  // Llamamos a la funcion ejecutarPrograma
    return 0;
}
