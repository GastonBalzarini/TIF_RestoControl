#ifndef SUBMENUES_H_INCLUDED
#define SUBMENUES_H_INCLUDED
#include <iostream>
#include "ventas.h"
#include "configuracion.h"
#include "detalle.h"
#include "rep.h"



using namespace std;

void subMenuVentas(){
    int opc;
    while(true){
        cout << endl;
        cout << "\t            Menu de ventas"<< endl;
        cout << "\t::::::::::::::::::::::::::::::::::::::"<< endl;
        cout << "\t::     1. Cargar venta              ::"<< endl;
        cout << "\t::     2. Buscar venta              ::"<< endl;
        cout << "\t::     3. Ver ventas                ::"<< endl;
        cout << "\t::     4. Anular venta              ::"<< endl;
        //cout << "\t::                                  ::"<< endl;
        cout << "\t::::::::::::::::::::::::::::::::::::::"<< endl;
        cout << "\n\t       0. Volver al menu principal"<< endl;
        cout << endl;
        cout << "Elija una opcion: ";
        cin >> opc;
        system("cls");
        switch(opc){
            case 1:
                nuevaVenta();
                break;
            case 2:
                listarPorNumVenta();
                break;
            case 3:
                mostrarListaVentas();
                break;
            case 4:
                bajaLogicaVenta();
                break;
            case 5:
                modificarFechaVenta();///OCULTO - solo para probar metodos que requieren fechas pasadas
                break;
            case 6:
                limpiarArchivoDetalles(); /// OCULTO - Limpia registros del archivo detalles
                limpiarArchivoVentas(); /// OCULTO - Limpia registros del archivo ventas
                break;
            case 0:
                cout << endl << "\n\n\n\tRegresando al menu principal...\n\n\n" << endl;
                system ("pause");
                system("cls");
                return;
            default:
                cout << endl << "Opcion no valida." << endl;
                system ("pause");
                system("cls");
                break;
        }
    }
}

void subMenuClientes(){
    int opc;
    while(true){
        cout << endl;
        cout << "\t            Menu de clientes"<< endl;
        cout << "\t::::::::::::::::::::::::::::::::::::::::"<< endl;
        cout << "\t::     1. Cargar cliente              ::"<< endl;
        cout << "\t::     2. Buscar cliente              ::"<< endl;
        cout << "\t::     3. Ver clientes                ::"<< endl;
        cout << "\t::     4. Modificar datos cliente     ::"<< endl;
        cout << "\t::     5. Borrar cliente              ::"<< endl;
        cout << "\t::::::::::::::::::::::::::::::::::::::::"<< endl;
        cout << "\n\t       0. Volver al menu principal"<< endl;
        cout << endl;
        cout << "Elija una opcion: ";
        cin >> opc;
        system("cls");
        switch(opc){
            case 1:
                nuevoCliente();
                break;
            case 2:
                mostrarIDCli();
                break;
            case 3:
                mostrarListaClientes();
                break;
            case 4:
                cambiarDatosCliente();
                break;
            case 5:
                bajaLogicaCli();
                break;
            case 6:
                limpiarArchivoClientes(); /// OCULTO / Para limpiar todos los registros del archivo
                break;
            case 0:
                cout << endl << "\n\n\n\tRegresando al menu principal...\n\n\n" << endl;
                system ("pause");
                system("cls");
                return;
            default:
                cout << endl << "Opcion no valida." << endl;
                system ("pause");
                system("cls");
                break;
        }
    }
}

void subMenuProductos(){
    int opc;
    while(true){
        cout << endl;
        cout << "\t            Menu de productos"<< endl;
        cout << "\t::::::::::::::::::::::::::::::::::::::::::"<< endl;
        cout << "\t::     1. Cargar producto               ::"<< endl;
        cout << "\t::     2. Buscar producto               ::"<< endl;
        cout << "\t::     3. Ver productos                 ::"<< endl;
        cout << "\t::     4. Modificar precio producto     ::"<< endl;
        cout << "\t::     5. Borrar producto               ::"<< endl;
        cout << "\t::::::::::::::::::::::::::::::::::::::::::"<< endl;
        cout << "\n\t       0. Volver al menu principal"<< endl;
        cout << endl;
        cout << "Elija una opcion: ";
        cin >> opc;
        system("cls");
        switch(opc){
            case 1:
                nuevoProd();
                break;
            case 2:
                mostrarIDProd();
                break;
            case 3:
                mostrarListaProductos();
                break;
            case 4:
                cambiarPrecioProducto();
                break;
            case 5:
                bajaLogicaProd();
                break;
            case 6:
                limpiarArchivoProductos(); /// OCULTO - Para limpiar todos los registros del archivo.
                break;
            case 0:
                cout << endl << "\n\n\n\tRegresando al menu principal...\n\n\n" << endl;
                system ("pause");
                system ("cls");
                return;
            default:
                cout << endl << "Opcion no valida." << endl;
                system ("pause");
                system("cls");
                break;
        }
    }
}

void subMenuReportes(){
    int opc;
    while(true){
        cout << endl;
        cout << "\t             Menu de reportes"<< endl;
        cout << "\t::::::::::::::::::::::::::::::::::::::::::"<< endl;
        cout << "\t::     1. Ver ventas del dia            ::"<< endl;
        cout << "\t::     2. Ver ventas por mes y anio     ::"<< endl;
        cout << "\t::     3. Ver ventas por cliente        ::"<< endl;
        cout << "\t::::::::::::::::::::::::::::::::::::::::::"<< endl;
        cout << "\n\t       0. Volver al menu principal"<< endl;
        cout << endl;
        cout << "Elija una opcion: ";
        cin >> opc;
        system("cls");
        switch(opc){
            case 1:
                reporteDiario();
                break;
            case 2:
                ventasPorMes();
                break;
            case 3:
                reportePorCliente();
                break;
            case 0:
                cout << endl << "\n\n\n\tRegresando al menu principal...\n\n\n" << endl;
                system ("pause");
                system("cls");
                return;
            default:
                cout << endl << "Opcion no valida." << endl;
                system ("pause");
                system("cls");
                break;
        }
    }
}

void subMenuConfiguracion(){
    int opc;
    while(true){
        cout << endl;
        cout << "\t            Menu de  configuracion"<< endl;
        cout << "\t::::::::::::::::::::::::::::::::::::::::::::::"<< endl;
        cout << "\t::     1. Copia de seguridad: ventas        ::"<< endl;
        cout << "\t::     2. Copia de seguridad: clientes      ::"<< endl;
        cout << "\t::     3. Copia de seguridad: productos     ::"<< endl;
        cout << "\t::     4. Restaurar ventas                  ::"<< endl;
        cout << "\t::     5. Restaurar clientes                ::"<< endl;
        cout << "\t::     6. Restaurar productos               ::"<< endl;
        cout << "\t::::::::::::::::::::::::::::::::::::::::::::::"<< endl;
        cout << "\n\t       0. VOLVER al menu principal"<< endl;
        cout << endl;
        cout << "Elija una opcion: ";
        cin >> opc;
        system("cls");
        switch(opc){
            case 1:
                copiaDeSeguridadVentas();
                break;
            case 2:
                copiaDeSeguridadClientes();
                break;
            case 3:
                copiaDeSeguridadProductos();
                break;
            case 4:
                restaurarVentas();
                break;
            case 5:
                restaurarClientes();
                break;
            case 6:
                restaurarProductos();
                break;
            case 0:
                cout << endl << "\n\n\n\tRegresando al menu principal...\n\n\n" << endl;
                system ("pause");
                system("cls");
                return;
            default:
                cout << endl << "Opcion no valida." << endl;
                system ("pause");
                system("cls");
                break;
        }
    }
}


#endif // SUBMENUES_H_INCLUDED
