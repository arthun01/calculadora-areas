/*
Linguagem de Programação I, 2024.2
Discentes: Arthur Ramos Vieira, 
Docente: Marcelo Honda
*/


//Bibliotecas
#include <stdio.h>

//Declaração das funções
float cir(void);
float tri(void);
float ret(void);
float tra(void);

int main(){
    int ask = 0;

    printf("===================\n");
    printf("CALCULADORA DE ÁREA\n");
    printf("===================\n");


    //Chamando as funções
    do{
        printf("Você quer calcular:\n [1] Círculo\n [2] Triângulo\n [3] Retângulo\n [4] Trapézio || Resposta: ");
        scanf("%d", &ask);
        printf("-------------------------------\n");
    }while(ask < 1 || ask > 4);

    if(ask == 1){
        cir();
    }else if(ask == 2){
        tri();
    }else if(ask == 3){
        //chama ret();
    }else if(ask == 4){
        //chama tra();
    }

    //Vendo se o usuário quer chamar a main de novo
    do{
        printf("Você quer calcular de novo:\n [1] Sim\n [2] Não || Resposta: ");
        scanf("%d", &ask);
        printf("-------------------------------\n");
    }while(ask < 1 || ask > 2);

    if(ask == 1){
        main();
    }else if(ask == 2){
        return 0;
    }

}


//---------------- FUNÇÕES ----------------//

//Função que calcula a Área do Triângulo
float tri(void){
    float x1, x2;
    float area = 0.0;

    printf("Digite a Base do Triângulo: ");
    scanf("%f", &x1);

    printf("Digite a Altura do Triângulo: ");
    scanf("%f", &x2);

    area = (x1 * x2) / 2;

    printf("O Triângulo de Base de %.2f metros e Altura de %.2f metros tem área igual a %.2f metros²\n", x1, x2, area);
    printf("-----------------------\n");

    return 0;
}
float cir(void){
    float r;
    double pi;
    float area = 0.0;

    printf("Digite o Raio da Circunferencia: ");
    scanf("%f", &r);

    pi = 3.1415926535898;
    area = (r * r) * pi;

    printf("A circunferencia de raio %.2f metros² tem area igual a %.2f metros²\n", r, area);
    printf("-----------------------\n");
    
    return 0;
}
