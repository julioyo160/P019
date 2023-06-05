// P019.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
int main()
{
    //Para crear arreglos dinámicos necesitamos memoria no estatica.
    //Esto se logra con punteros.
    //Creamos la variable puntera y la inicializamos en NULL
    std::string* titulos = NULL;
    std::string* autores = NULL;
    std::string libros[10]; //Memoria estática
    int size;
    std::cout << "Cuantas peliculas quieres registrar? " << std::endl;
    std::cin >> size;
    //Crear Arreglos dinámicos
    titulos = new std::string[size];
    autores = new std::string[size];
    //Ahora solicita la información
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            std::cin.ignore();
        }
        std::cout << "Cuales el nombre de la pelicula? #: " << i + 1 << std::endl;
        getline(std::cin, titulos[i]);
        std::cout << "Quien hizo la pelicula? #: " << i + 1 << std::endl;
        getline(std::cin, autores[i]);
    }
    //Imprime la información
    for (int i = 0; i < size; i++)
    {
        std::cout << "El Titulo de la pelicula: " << i + 1 << " es: " << titulos[i] << std::endl;

        std::cout << "El Autor de la pelicula: " << i + 1 << " es: " << autores[i] << std::endl;
    }
    //Recuerda siempre destriur la memoria dinámica
    delete[] titulos;
    delete[] autores;
    titulos = NULL;
    autores = NULL;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
