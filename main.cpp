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

    } while (opcion !
}
void mostrarMenu() {
    cout << "\n--- AGENDA DE TAREAS ---" << endl;
    cout << "1. Agregar tarea" << endl;
    cout << "2. Ver tareas" << endl;
    cout << "3. Eliminar tarea" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opcion: ";
}
void agregarTarea(string tareas[], int& cantidad) {
    if (cantidad < MAX_TAREAS) {
        cout << "Ingrese la tarea: ";
        getline(cin, tareas[cantidad]);  // Se agrega la tarea en la posicion 'cantidad'
        cantidad++;  // Se incrementa el contador de tareas
        cout << "Tarea agregada con exito." << endl;
    } else {
        cout << "¡Lista de tareas llena!" << endl;
    }
}
