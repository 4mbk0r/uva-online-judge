#include "bits/stdc++.h"
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d\n",&t);
	char l[10];
	while(t--){
		scanf("%s",l);
		int a = (l[0]-'0')*10+(l[1]-'0');
		int b = (l[3]-'0')*10+(l[4]-'0');
		int n =  a*100+b;
		while(true){
			int aux = (b+1)%60;
			a = (a+((b+1)/60))%24;
			b=aux;
			n = a*100+b;
			int m=0;
			aux=n;
			while(aux>0){
				m=m*10+aux%10;
				aux/=10;
			}
			if(m==n) break;
		}
		printf("%02d:%02d\n",a,b);
	}
	return 0;	
}
/*
El rival de Wolfgang Puck, Emeril Lagasse (\ BAM! "), Estableció recientemente el
Registro culinario mundial en la categoría de menor souffl e medición
En un mero 2 cm! Wolfgang, para no quedarse atrás, decidió que él
Pondría un disco culinario propio: el mármol más simétrico
Pastel en el mundo. ¡Esto no es una tarea fácil!
Como todos sabemos de la biografía más vendida de Wolfgang, es un
Muy supersticioso chef. En sus intentos por crear la simétrica
Pastel, ha jurado quitar la torta del horno solamente en un
Tiempo palindrómico, es decir, un tiempo que lee el mismo cuando se lee desde
De izquierda a derecha como de derecha a izquierda. No incluye la hora actual, cuando es la próxima oportunidad para Wolfgang
Para quitar su pastel?
Entrada
En la primera línea de la entrada se le da
norte
, El número de intentos de Wolfgang para hacer su
Pastel simétrico. El seguimiento
norte
Las líneas contienen una cadena formateada como `
S.S
:
Mm
'Indicando la corriente
Tiempo en un reloj de veinticuatro horas. (So ​​0
Contém uma
S.S
Contém uma
23 y 0
Contém uma
Mm
Contém uma
59 y `
00:00
'Sigue \
23:59
")
Salida
Para cada intento, emita una cadena que indique el siguiente tiempo palindrómico (sin incluir la hora actual)
En una sola línea formateada como `
S.S
:
Mm
'. Al determinar si
S.S
:
Mm
Es palindrómico, ignora todo
Ceros a la izquierda en
S.S
. Si
S.S
Es cero entonces ignora todos los ceros a la izquierda en
Mm
.
*/