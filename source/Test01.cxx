// Test01.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

int __main()
{
    //
    int key;
    int ciclesAmt;

    //
    std::cout << "\nEnter the amount of cicles : ";
    std::cin  >> ciclesAmt;
    std::cout << "\nCicles : " << ciclesAmt;

    //
    for (int cicleNumber = 0; cicleNumber < ciclesAmt; cicleNumber++)
    {
        std::cout << "\n" << (cicleNumber + 1);
    };

    //
    std::cout << "\nPress any key to finalize...";
    
    //
    key = _getch();
    
    //   
    return 0;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
