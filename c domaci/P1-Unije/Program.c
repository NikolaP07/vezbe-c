/*
 * Primer demonstrira upotrebu unija u programskom jeziku C
 */

#include <stdio.h>

typedef struct
{
	int x;
	float a;
} Struktura;


typedef union 						// Definicija unije
{
	int x;
	float a;
} Unija;							// Definicija unijskog tipa


int main()
{
	Struktura struktura = { 0 };
	Unija unija = { 0 };			// Definicija i inicijalizacija promenljive unijskog tipa

	printf("Velicina strukture: %u\n", sizeof(struktura));
	printf("Velicina unije: %u\n", sizeof(unija));


	unija.x = 10;					// Pristup polju unije
	printf("\nVrednosti polja unije nakon dodele vrednosti celobrojnom polju:\n");
	printf("\tx   = %d\n", unija.x);
	printf("\ta   = %f\n", unija.a);

	unija.a = 8.8;
	printf("Vrednosti polja unije nakon dodele vrednosti realnom polju:\n");
	printf("\tx   = %d\n", unija.x);
	printf("\ta   = %f\n", unija.a);

	printf("\nHeksadecimalna predstava realnog broja %f: %x\n", unija.a, unija.x);

	return 0;
}
