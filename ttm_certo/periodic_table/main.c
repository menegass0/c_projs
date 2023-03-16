#include <stdio.h>

struct Elemento
{
    int numeroAt;
    char * simbolo;
    char * nome;
    float massa;
};

int main(){
    struct Elemento * elementos;
    
    elementos[0].numeroAt = 1;
    elementos[0].simbolo = "H";
    elementos[0].nome = "hidrogenio";
    elementos[0].massa = 1.008;
    
    elementos[1].numeroAt = 2;
    elementos[1].simbolo = "He";
    elementos[1].nome = "helio";
    elementos[1].massa = 4.003;

    printf("teste");
    
    return 0;
}
