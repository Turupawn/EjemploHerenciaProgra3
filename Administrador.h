#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include "Usuario.h"

class Administrador : public Usuario
{
public:
    bool esAdministrador();
};

#endif // ADMINISTRADOR_H
