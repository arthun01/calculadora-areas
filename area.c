/*
Linguagem de Programação I, 2024.2
Discentes: Arthur Ramos Vieira, Anna Beatriz Reis, Anthony Almeida e Rafael Cardoso
Docente: Marcelo Honda
*/

#include <stdio.h>

// Declaração das funções
float cir(void);
float tri(void);
float ret(void);
float tra(void);

int main()
{
    printf("Rafael alterou aqui\n");
    int ask = 0;

    printf("===================\n");
    printf("CALCULADORA DE ÁREA\n");
    printf("===================\n");
    printf("===================\n");

    // Chamando as funções
    do
    {
        printf("Você quer calcular:\n [1] Círculo\n [2] Triângulo\n [3] Retângulo\n [4] Trapézio || Resposta: ");
        scanf("%d", &ask);
        printf("-------------------------------\n");
    } while (ask < 1 || ask > 4);

    if (ask == 1)
    {
        cir();
    }
    else if (ask == 2)
    {
        tri();
    }
    else if (ask == 3)
    {
        ret();
    }
    else if (ask == 4)
    {
        tra();
    }

    // Vendo se o usuário quer chamar a main de novo
    do
    {
        printf("Você quer calcular de novo:\n [1] Sim\n [2] Não || Resposta: ");
        scanf("%d", &ask);
        printf("-------------------------------\n");
    } while (ask < 1 || ask > 2);

    if (ask == 1)
    {
        main();
    }
    else if (ask == 2)
    {
        return 0;
    }
}

//---------------- FUNÇÕES ----------------//

// Função que calcula a Área do Triângulo
float tri(void)
{
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

// Função que calcula a Área do Círculo
float cir(void)
{
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

// Função que calcula a Área do Trapézio
float tra(void)
{
    float bmaior = 0.0, bmenor = 0.0, altura = 0.0;
    float area = 0.0;

    printf("Digite a maior base do trapézio: ");
    scanf("%f", &bmaior);

    printf("\nDigite a menor base do trapézio: ");
    scanf("%f", &bmenor);

    printf("\nDigite a altura do trapézio: ");
    scanf("%f", &altura);

    area = ((bmaior + bmenor) * altura) / 2;

    printf("\nO Trapézio de altura %.2f, bases %.2f metros e %.2f metros, tem área igual a: %.2f", altura, bmaior, bmenor, area);
    printf("-----------------------\n");

    return 0;
}

// Função que calcula a Área do Retângulo
float ret(void)
{
    float base, altura;
    float area = 0.0;

    printf("Digite a Base do Retângulo: ");
    scanf("%f", &base);

    printf("Digite a Altura do Retângulo: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("O Retângulo de Base de %.2f metros e Altura de %.2f metros tem área igual a %.2f metros²\n", base, altura, area);
    printf("-----------------------\n");

    return 0;
}
