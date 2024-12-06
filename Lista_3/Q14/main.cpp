#include <iostream>
#include "P_Revisitada.h"

int main(){

    Pessoa p1{"Isabella Tito", "43567130870"}, p2{"Matheus Nascimento"}, p3{"Inventado","12345678910"};

    p1.apresentar();

    p2.apresentar();

    p2.setCPF("08339113410");

    p2.apresentar();

    p3.apresentar();


    return 0;
}