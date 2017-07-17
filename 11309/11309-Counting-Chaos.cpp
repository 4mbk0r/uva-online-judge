#include "bits/stdc++.h"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string l;
	while(n--){
		cin>>l;
		int i=0,f=3;
		string l2 = ""+l[0]+l[1]+l[3]+l[4];
		bool sw=true;
		while(i<=f){
			if(l2[i]==0 && sw )
				i++;
			else{
				sw=false;
				if(l2[i]==l2[f]){
					i++;
					f--;
				}
			}

		}
		
		//ab:cd
		// 

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