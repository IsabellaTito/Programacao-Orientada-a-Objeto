#include "Carro.hpp"

Carro::Carro(string marca, string modelo, int ano){
    setMarca(marca);
    setModelo(modelo);
    setAno(ano);
}

string Carro::getMarca() const{
    return m_marca;
}

void Carro::setMarca(string marca){
    m_marca = marca;
}

string Carro::getModelo() const{
    return m_modelo;
}

void Carro::setModelo(string modelo){
    m_modelo = modelo;
}

int Carro::getAno() const{
    return m_ano;
}

void Carro::setAno(int ano){
    m_ano=ano;
}

string Carro::toString() const{
    return (getMarca() + " " + getModelo() + " " + std::to_string(getAno()));
}