#ifndef ELEVADOR_H
#define ELEVADOR_H

class Elevador {

private:
    int andarAtual;

public:
    Elevador();

    void subir();
    void descer();
    int getAndarAtual();
};

#endif