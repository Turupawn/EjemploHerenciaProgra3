#include <iostream>

#include "Usuario.h"
#include "Normal.h"
#include "Administrador.h"

using namespace std;

int main()
{
    Normal usuario_normal;
    usuario_normal.nombre = "Juan";
    cout<<usuario_normal.nombre<<endl;
    cout<<usuario_normal.esAdministrador()<<endl;

    Administrador usuario_administrador;
    usuario_administrador.nombre = "Ana";
    cout<<usuario_administrador.nombre<<endl;
    cout<<usuario_administrador.esAdministrador()<<endl;
    return 0;
}
