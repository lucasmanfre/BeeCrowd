#include <stdio.h>

//Daniela � enfermeira em um grande hospital, e tem os hor�rios de trabalho muito vari�veis. Para piorar, ela tem sono pesado, e uma grande dificuldade para acordar com rel�gios despertadores.
//
//Recentemente ela ganhou de presente um rel�gio digital, com alarme com v�rios tons, e tem esperan�a que isso resolva o seu problema. No entanto, ela anda muito cansada e quer aproveitar cada momento de descanso. Por isso, carrega seu rel�gio digital despertador para todos os lugares, e sempre que tem um tempo de descanso procura dormir, programando o alarme despertador para a hora em que tem que acordar. No entanto, com tanta ansiedade para dormir, acaba tendo dificuldades para adormecer e aproveitar o descanso.
//
//Um problema que a tem atormentado na hora de dormir � saber quantos minutos ela teria de sono se adormecesse imediatamente e acordasse somente quando o despertador tocasse. Mas ela realmente n�o � muito boa com n�meros, e pediu sua ajuda para escrever um programa que, dada a hora corrente e a hora do alarme, determine o n�mero de minutos que ela poderia dormir.
//
//Entrada
//A entrada cont�m v�rios casos de teste. Cada caso de teste � descrito em uma linha, contendo quatro n�meros inteiros H  1 , M 1 , H2 e M 2, com H1:M1 representando a hora e minuto atuais, e H2:M2 representando a hora e minuto para os quais o alarme  despertador foi programado (0=H1=23, 0=M1=59, 0=H2=23, 0=M2 =59).
//
//O final da entrada � indicado por uma linha que cont�m apenas quatro zeros, separados por espa�os em branco.
//
//Sa�da
//Para cada caso de teste da entrada seu programa deve imprimir uma linha, cada uma contendo um n�mero inteiro, indicando o n�mero de minutos que Daniela tem para dormir.

int main (){
	int h1, m1, h2, m2 , contH, contM, tempo, teste = 1;
	while (teste == 1){
		scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
		if (h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0)	
			break;
		if (h1 >= 0 && h1 <= 23 && m1 >= 0 && m1 <= 59 && h2 >= 0 && h2 <= 23 && m2 >= 0 && m2 <= 59){
			tempo = 0;
			contM = 0;
			contH = 0;
			while (h1 != h2){
				contH++;
				h1++;
				if (h1 > 23)
					h1 = 0;
				if (contH < 0)
					contH *= -1;
			}
			while (m1 != m2){
					contM++;
					m1++;
					if (m1 > 59){
						m1 = 0;
						contH--;
					}
				}
			tempo += contH * 60;
			tempo += contM;
			if (tempo < 0)
				tempo += 1440;
			printf("%d\n", tempo);
		}
		else
		 break;
	}
	return 0;
}
