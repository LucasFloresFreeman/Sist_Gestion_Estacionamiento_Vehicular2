#include <iostream>
#include <cstdlib>
#include <string.h>
#include <conio.h>
#include <windows.h>

#include "MenuManager.h"

#define colorText SetConsoleTextAttribute

using namespace std;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void colorTexto (bool remarcado)
{
    HANDLE hConsole = GetStdHandle (STD_OUTPUT_HANDLE);
    if (remarcado==true)
    {
        colorText (hConsole, 112);
    }
    else
    {
        colorText(hConsole, 15);
    }
}

void MenuManager::selectorDemenu(int seleccion)
{
    switch (seleccion)
    {
    case 0:
        {
            menuPrincipal();
        }
        break;
    case 1:
        {
            menuingresoVehiculos();
        }
        break;

    }
}

void MenuManager::menuPrincipal()
{

    HANDLE hConsole = GetStdHandle (STD_OUTPUT_HANDLE);



    int seleccion=1;
    bool finDeMenu=false;
    while (finDeMenu!=true)
    {
        system ("cls");
        gotoxy(37, 0);
        colorText(hConsole, 15);
        printf ("SISTEMA DE GESTION ESTACIONAMIENTO VEHICULAR");
        gotoxy (0,1);
        cout << "________________________________________________________________________________________________________________________" << endl;

        gotoxy (46, 3);
        printf ("M E N U   P R I N C I P A L");

        colorTexto(false);
        if (seleccion==1)
        {
            colorTexto(true);
        }

        gotoxy (42, 5);
        printf ("ALTA ESTACIONAMIENTO");

        colorTexto(false);
        if (seleccion==2)
        {
            colorTexto(true);
        }

        gotoxy (42, 6);
        printf ("DISPONIBILIDAD DE LUGARES");

        colorTexto(false);
        if (seleccion==3)
        {
            colorTexto(true);
        }

        gotoxy (42, 7);
        printf ("INGRESO DE VEHICULOS");

        colorTexto(false);

        colorTexto(false);
        if (seleccion==4)
        {
            colorTexto(true);
        }

        gotoxy (42, 8);
        printf ("EGRESO DE VEHICULOS");

        colorTexto(false);
        if (seleccion==5)
        {
            colorTexto(true);
        }

        gotoxy (42, 9);
        printf ("MODIFICACION DE PRECIOS");

        colorTexto(false);
        if (seleccion==6)
        {
            colorTexto(true);
        }

        gotoxy (42, 10);
        printf ("REPORTES");

        colorTexto(false);
        if (seleccion==7)
        {
            colorTexto(true);
        }

        gotoxy (42, 11);
        printf ("MOSTRAR DE PRUEBA");

        colorTexto(false);
        if (seleccion==8)
        {
            colorTexto(true);
        }

        gotoxy (42, 12);
        printf ("SALIR");

        colorTexto(false);

        float dilay=0;


        if (GetAsyncKeyState(VK_DOWN))
        {
            seleccion++;
            if (seleccion==9)
            {
                seleccion=1;
            }

        }
        //////////////
        if (GetAsyncKeyState(VK_UP))
        {
            seleccion--;
            if (seleccion==0)
            {
                seleccion=8;
            }
        }
        //////////////
        if (GetAsyncKeyState(VK_RETURN))
        {
            //////Pasar a otro menu
            finDeMenu = true;
            selectorDemenu (seleccion);
            dilay = 5;
        }

        getch();
        Sleep(dilay);


    }


}

void MenuManager::menuingresoVehiculos()
{
    HANDLE hConsole = GetStdHandle (STD_OUTPUT_HANDLE);



    int seleccion=1;
    bool finDemenu=false;
    while (finDemenu!=true)
    {
        system ("cls");
        gotoxy(37, 0);
        colorText(hConsole, 15);
        printf ("SISTEMA DE GESTION ESTACIONAMIENTO VEHICULAR");
        gotoxy (0,1);
        cout << "________________________________________________________________________________________________________________________" << endl;

        gotoxy (46, 3);
        printf ("M E N U   I N G R E S O");

        colorTexto(false);
        if (seleccion==1)
        {
            colorTexto(true);
        }

        gotoxy (42, 5);
        printf ("NUEVO INGRESO");

        colorTexto(false);
        if (seleccion==2)
        {
            colorTexto(true);
        }

        gotoxy (42, 6);
        printf ("VOLVER");

        colorTexto(false);

        float dilay=0;


        if (GetAsyncKeyState(VK_DOWN))
        {
            seleccion++;
            if (seleccion==3)
            {
                seleccion=1;
            }

        }
        //////////////
        if (GetAsyncKeyState(VK_UP))
        {
            seleccion--;
            if (seleccion==0)
            {
                seleccion=2;
            }
        }
        //////////////
        if (GetAsyncKeyState(VK_RETURN))
        {
            //////Pasar a otro menu
            finDemenu=true;
            dilay = 5;
        }

        getch();
        Sleep(dilay);


    }
    if (seleccion==1)
    {
        string patente;
        int tipovehiculo;
        hora horaingreso;

        cout<< "ingrese patente: ";
        cin >> patente;
        cout<< "ingrese tipo de vehiculo:  ";
        cin>> tipovehiculo;

        Vehiculo registrar;
        registrar.setPatente(patente);
        registrar.setTipo(tipovehiculo);
    }


}
