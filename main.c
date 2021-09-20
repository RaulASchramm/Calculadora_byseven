#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//o	Quilômetros percorridos com a velocidade média de 30Km/h = qpvm30
//o	Quilômetros percorridos com a velocidade média de 70Km/h = qpvm70
//o	Quilômetros percorridos com a velocidade média de 90Km/h = qpvm90
//o	Quilômetros percorridos com a velocidade média de 110Km/h = qpvm110

float consumo_30(float consumo30)
{
    float resultado30;
    resultado30 = 7/consumo30;

    return (resultado30);
}

float consumo_70(float consumo70)
{
    float resultado70;
    resultado70 = 10/consumo70;

    return (resultado70);
}

float consumo_90(float consumo90)
{
    float resultado90;
    resultado90 = 12/consumo90;

    return (resultado90);
}

float consumo_110(float consumo110)
{
    float resultado110;
    resultado110 = 13/consumo110;

    return (resultado110);
}

int main(void)
{
    int numeropartida, numerochegada;
    float qpvm30, qpvm70, qpvm90, qpvm110, mediafinal, final30, final70, final90, final110, resultado30, resultado70, resultado90, resultado110;
    char localpartida[80], localchegada[80];

    printf("Ola, seja bem vindo a calculadora de consumo de combustivel\n\nPor favor, insira o local de partida e aperte ENTER:\n");
    fgets(localpartida,80,stdin);
    printf("%s", localpartida);

    printf("\nDigite o local de chegada e aperte ENTER\n");
    fgets(localchegada,80,stdin);
    printf("%s", localchegada);

    printf("\nDigite quantos quilometros foi percorrido em uma velocidade media de 30km/h\n");
    scanf("%f", &qpvm30);
    final30 = consumo_30(qpvm30);

    printf("\nDigite quantos quilometros foi percorrido em uma velocidade media de 70km/h\n");
    scanf("%f", &qpvm70);
    final70 = consumo_70(qpvm70);

    printf("\nDigite quantos quilometros foi percorrido em uma velocidade media de 90km/h\n");
    scanf("%f", &qpvm90);
    final90 = consumo_90(qpvm90);

    printf("\nDigite quantos quilometros foi percorrido em uma velocidade media de 110km/h\n");
    scanf("%f", &qpvm110);
    final110 = consumo_110(qpvm110);

    mediafinal = final30+final70+final90+final110;

    printf("\nCONSUMO MEDIO TOTAL: %.2f\nCONSUMO MEDIO A 30KM/H: %.2f\nCONSUMO MEDIO A 70KM/H: %.2f\nCONSUMO MEDIO A 90KM/H: %.2f \nCONSUMO MEDIO A 110KM/H: %.2f", mediafinal, final30, final70, final90, final110);

    return 0;
}
