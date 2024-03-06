/*
 * Primer demonstrira upotrebu bitskih polja u programskom jeziku C
 */

#include <stdio.h>

typedef struct
{
	unsigned int ponedeljak;
	unsigned int utorak;
	unsigned int sreda;
	unsigned int cetvrtak;
	unsigned int petak;
	unsigned int subota;
	unsigned int nedelja;
} NastavniDani;


typedef struct
{
	unsigned int ponedeljak : 1;	// Definicija bitskog polja
	unsigned int utorak     : 1;
	unsigned int sreda      : 1;
	unsigned int cetvrtak   : 1;
	unsigned int petak      : 1;
	unsigned int subota     : 1;
	unsigned int nedelja    : 1;


} NastavniDaniBP;


void IspisiRadneDane(const NastavniDaniBP* nd)
{
	if (nd == NULL)
		return;

	if (nd->ponedeljak != 0)
		printf(" ponedeljak ");
	if (nd->utorak != 0)
		printf(" utorak ");
	if (nd->sreda != 0)
		printf(" sreda ");
	if (nd->cetvrtak != 0)
		printf(" cetvrtak ");
	if (nd->petak != 0)
		printf(" petak ");
	if (nd->subota != 0)
		printf(" subota ");
	if (nd->nedelja != 0)
		printf(" nedelja ");
}


int main()
{
	NastavniDani nd = { 1, 1, 1, 1, 1, 0, 0 };
	NastavniDaniBP ndbp = { 1, 1, 1, 1, 1, 0, 0 ,1,1};

	printf("Velicina strukture sa obicnim poljima: %u\n", sizeof(nd));
	printf("Velicina strukture sa bitskim poljima: %u\n", sizeof(ndbp));

	printf("Nastavni dani su: ");
	IspisiRadneDane(&ndbp);

	ndbp.subota = 1;				// Pristup bitskom polju

	printf("\nNastavni dani su: ");
	IspisiRadneDane(&ndbp);

	return 0;
}
