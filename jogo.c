#include <stdio.h>
int main (){
int carta = 1;
char estado[50];
char codigo[40];
char cidade [50];
char popu[50];
char km[50];
float pib;
int turista;


printf("Qual o Estado?:");
 fgets(estado,50,stdin);

printf("Código de carta:");
fgets(codigo,40,stdin);

printf("Nome da cidade:");
fgets(cidade,50,stdin);

printf("Tamanho do Estado em Km:");
fgets(km,50,stdin);

printf("População:");
fgets(popu,50,stdin);

printf("Pontos Turisticos:");
scanf("%d",&turista);

printf("PIB:");
scanf("%f",&pib);


printf(" Carta: %d\n",carta);
printf("Estado:%s",estado);
printf("Código:%s",codigo);
printf("Cidade:%s",cidade);
printf("População:%s",popu);
printf("Pontos turisticos: %d\n",turista);
printf("PIB: %.3f\n",pib);


return  0;

}
