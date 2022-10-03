#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* faça um programa que receba como dados de entrada 5 notas de aluno e mostre como resultado:
a) qual foi a maior media da turma;
b) qual foi a media da turma*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color f0");
	
	int i;
	float nota, nota2, mediaMaior = 0, total = 0, mediaAluno;
	for (i = 0; i < 5; i++) {
		printf("Digite a primeira nota do aluno de numero %d\n", i+1);
		scanf("%f", &nota);
		printf("Digite a segunda nota do aluno de numero %d,\n", i+1);
		scanf("%f", &nota2);
		mediaAluno = (nota + nota2) / 2;
		if (mediaAluno > mediaMaior) {
			mediaMaior = mediaAluno;
		}
		total += mediaAluno;
	}
	printf("A maior nota é %.2f\n", mediaMaior);
	printf("A média é %.2f\n", total/i);
}
