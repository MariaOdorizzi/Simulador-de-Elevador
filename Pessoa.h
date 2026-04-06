#ifndef PESSOA_H
#define PESSOA_H

class Pessoa {

private:
    int id;
    int andarAtual;
    int andarDestino;
    bool dentroElevador;

public:
    Pessoa(int id, int atual, int destino);

    int getAndarAtual();
    int getDestino();
    bool estaNoElevador();

    void chamarElevador();
    void entrarElevador();
    void sairElevador();
};

#endif