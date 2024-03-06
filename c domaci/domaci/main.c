#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct Radnik{
/*šifra,ime, prezime, datum zaposlenja,
broj godina radnog staža, stepen stručne spreme, ukupna isplata, plata za tekuci mesec*/
char sifra[20];
char ime[20];
char prezime[20];
char datumZaposlenja[20];
int brojGodinaRadnogStaza;
int stepenStrucneSpreme ;
int ukupnaIsplata;
int plataZaTekuciMesec;
int  brojRadnihSati;
} radnik[200];

typedef struct{
char sifraRadnika;
int brojRadnihSati;
}RacunatiPlatu;

typedef struct{
char strucnaSprema[20];
int koeficijent;
}Cenovnik;
void ispis(struct Radnik radnik)
{
    puts(radnik.ime);
    puts(radnik.prezime);
    puts(radnik.sifra);
    puts(radnik.datumZaposlenja);
printf("%d \n",radnik.stepenStrucneSpreme );
printf("%d \n",radnik.ukupnaIsplata );
printf("%d \n",radnik.plataZaTekuciMesec );
printf("%d \n",radnik. brojRadnihSati);

}
void PrikazRadnika(struct Radnik radnik[200],int br)
{int  odluka;

int i,j,k;
  char s[100];

     printf("unesite doluku: 0,1,2");
   scanf("%d",&odluka);
    switch(odluka)
    {

    case 0:
           printf(" radnik %d",br );
        for(i=0;i<br;i++)
        {
            if(radnik[i].stepenStrucneSpreme>5)
            {
   ispis( radnik[i]);


            }


        }


    break;

    case 1:
        printf("koliki stepen struke zelite");
        int n;
        fflush(stdin);
        scanf("%d",&n);
          for(i=0;i<br;i++)
        {
            if(radnik[i].stepenStrucneSpreme==n)
            {
   ispis( radnik[i]);

            }


        }


    break;

    case 2:
           printf(" radnik %d",br );


   for (i = 0; i < 20-1; i++) {
      for (j = i+1; j < 20; j++) {
         if (strcmp(radnik[i].ime,radnik[j].ime)>0) {
        strcpy(s,radnik[i].ime);
         strcpy(radnik[i].ime,radnik[j].ime);
         strcpy(radnik[j].ime,s);


         }
      }
   }

   for(i=0;i<sizeof(radnik) / sizeof(radnik[0]);i++)
   {
   ispis( radnik[i]);


   }
    break;
    }


}

void DodavanjeRadnika(struct Radnik *radnik[200],int br)
{
    fflush(stdin);
printf("Unesi ime ");
scanf("%d",&radnik[br]->ime);

printf("Unesi prezime ");
scanf("%d",&radnik[br]->prezime);

printf("Unesi sifra ");
scanf("%d",&radnik[br]->sifra);

printf("Unesi datumZ aposlenja ");
scanf("%d",&radnik[br]->datumZaposlenja);

printf("Unesi broj godina radnog staza ");
scanf("%d",&radnik[br]->brojGodinaRadnogStaza);

printf("Unesi stepen  structurne spreme ");
scanf("%d[1-17]",&radnik[br]->stepenStrucneSpreme);

printf("Unesi stepen  platu za tekuci mesec ");
scanf("%d",&radnik[br]->plataZaTekuciMesec);

printf("Unesi stepen  ukupnaIsplata ");
scanf("%d",&radnik[br]->ukupnaIsplata);



}
void Meni(struct Radnik *radnik[200],int brojradnika)
{int odluka;



    printf("unesite doluku:0,1,2,3,4,5,6,7: ");
    scanf("%d",&odluka);
    switch(odluka)
    {

    case 0:
        brojradnika++;
        DodavanjeRadnika(&radnik,brojradnika);
        Meni(radnik, brojradnika);
    break;
    case 1:
        PrikazRadnika(&radnik,brojradnika);
        Meni(radnik, brojradnika);
    break;
    case 2:
       // PrikazIzvestaja();
       Meni(radnik, brojradnika);
    break;
    case 3:
       // PretragaNaloga();
       Meni(radnik, brojradnika);
    break;
    case 4:
       // IzmenaNaloga();
       Meni(radnik, brojradnika);
    break;
    case 5:
       // IzmenaNaloga();
       Meni(radnik, brojradnika);
    break;
    case 6:

       // Brisanjeradnika();
       brojradnika--;
       Meni(radnik, brojradnika);
    break;
    case 7:
      // Obracunplate();
      Meni(radnik, brojradnika);
    break;
    }
}

int main()
{

int brojradnika;
Meni(radnik, brojradnika);
    printf("Hello world!\n");
    return 0;
}

