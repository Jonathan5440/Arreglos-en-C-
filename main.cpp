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
void ejecutarPrograma() {
    string tareas[MAX_TAREAS];
    int cantidad = 0;
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore(); // Limpiar

        switch (opcion) {
            case 1:
                agregarTarea(tareas, cantidad);
            break;
            case 2:
                verTareas(tareas, cantidad);
            break;
            case 3:
                eliminarTarea(tareas, cantidad);
            break;
            case 4:
                cout << "Saliendo del programa..." << endl;
            break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }

    } while (opcion != 4);
}
