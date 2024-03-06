#include <stdio.h>
#include <stdlib.h>
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
int brojgodina;
} radnik[200];
 struct{
char sifraRadnika;
int brojRadnihSati;
}RacunatiPlatu;

 struct{
char strucnaSprema[20];
int koeficijent;
}Cenovnik;

void unos()
{
    printf("unesi ime");
    scanf("%s",radnik[0].ime);
}

void ispis(int br)
{printf("ime :%s \n",radnik[br].ime);
printf("Prezime %s \n",radnik[br].prezime);
printf("broj godina :%d \n",radnik[br].brojgodina);
printf(" sifra %s \n",radnik[br].sifra);
printf(" datum zaposlenja: %s \n",radnik[br].datumZaposlenja);
printf(" Stepen strucne preme:%d \n",radnik[br].stepenStrucneSpreme );
printf(" Ukupna isplata %d \n",radnik[br].ukupnaIsplata );
printf(" Plata za tekuci mesec :%d \n",radnik[br].plataZaTekuciMesec );
printf("Broj radnih sati:%d \n",radnik[br]. brojRadnihSati);
}
void PrikazRadnika(int br)
{int  odluka;

int i,j,k,n;
  char s[100];

     printf("unesite doluku: 0,1,2");
   scanf("%d",&odluka);
    switch(odluka)
    {

    case 0:
           printf(" radnik %d\n",br );
        for(i=0;i<br;i++)
        {
            if(radnik[i].stepenStrucneSpreme>5)
            {
             ispis(i);
            }
        }
    break;

    case 1:
            fflush(stdin);
        printf("koliki stepen struke zelite");

        scanf("%d",&n);
          for(i=0;i<br;i++)
        {
            if(radnik[i].stepenStrucneSpreme==n)
            {
   ispis(i);

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

   for(i=0;i<br;i++)
   {
   ispis( i);


   }
    break;
    }


}
void PrikazIzvestaja(int br)
{int odluka,god;
float zbir=0;

    printf("unesite doluku: 0,1,2,3");
   scanf("%d",&odluka);
    switch(odluka)
    {

    case 0:
        printf("\n ukupan broj radnika je %d",br);


    break;

    case 1:
        for(int i=0;i<br;i++)
        {zbir+=radnik[i].plataZaTekuciMesec;

        }
        printf(" prosecna plata je %f",zbir/br);


    break;


    case 2:
             for(int i=0;i<br;i++)
        {zbir+=radnik[i].brojGodinaRadnogStaza;

        }
        printf(" prosecna broj godina radnog stazaje %f",zbir/br);


    break;

    case 3:
        printf(" koji broj godina radnika trazite :");
        scanf("%d",&god);
             for(int i=0;i<br;i++)
        {
            if(radnik[i].brojgodina==god){
            zbir+=1;
            }

        }
        printf("broj radnik sa brojem godina %d je %f",god,zbir);

    break;
    }

}

void DodavanjeRadnika(int br)
{
    fflush(stdin);
printf("Unesi ime ");
gets(radnik[br].ime);
    fflush(stdin);
printf("Unesi prezime ");
scanf("%s",&radnik[br].prezime);
printf("Unesi broj godina ");
scanf("%d",&radnik[br].brojgodina);


printf("Unesi sifra ");
scanf("%s",&radnik[br].sifra);
    fflush(stdin);
printf("Unesi datum Zaposlenja ");
scanf("%s",&radnik[br].datumZaposlenja);
    fflush(stdin);
printf("Unesi broj godina radnog staza ");
scanf("%d",&radnik[br].brojGodinaRadnogStaza);
    fflush(stdin);
printf("Unesi stepen  structurne spreme ");
scanf("%d[1-17]",&radnik[br].stepenStrucneSpreme);
    fflush(stdin);
printf("Unesi stepen  platu za tekuci mesec ");
scanf("%d",&radnik[br].plataZaTekuciMesec);
    fflush(stdin);
printf("Unesi stepen  ukupnaIsplata ");
scanf("%d",&radnik[br].ukupnaIsplata);

printf("Unesi stepen brojRadnihSati");
scanf("%d",&radnik[br].brojRadnihSati);
ispis(br);



}
void izmenaInf(int br)
{
    fflush(stdin);
printf("Unesi ime ");
gets(radnik[br].ime);
    fflush(stdin);
printf("Unesi prezime ");
scanf("%s",&radnik[br].prezime);
printf("Unesi broj godina ");
scanf("%d",&radnik[br].brojgodina);



    fflush(stdin);
printf("Unesi datum Zaposlenja ");
scanf("%s",&radnik[br].datumZaposlenja);
    fflush(stdin);
printf("Unesi broj godina radnog staza ");
scanf("%d",&radnik[br].brojGodinaRadnogStaza);
    fflush(stdin);
printf("Unesi stepen  structurne spreme ");
scanf("%d[1-17]",&radnik[br].stepenStrucneSpreme);
    fflush(stdin);
printf("Unesi stepen  platu za tekuci mesec ");
scanf("%d",&radnik[br].plataZaTekuciMesec);
    fflush(stdin);
printf("Unesi stepen  ukupnaIsplata ");
scanf("%d",&radnik[br].ukupnaIsplata);

printf("Unesi stepen brojRadnihSati");
scanf("%d",&radnik[br].brojRadnihSati);
ispis(br);



}
void  PretragaNaloga(int br)
{int odluka;
char str[20];
    printf("kako zelite da pretrazite nalog ime(0),prezime(1) ,sifra(2)");
    scanf("%d",odluka);
     switch(odluka)
    {

    case 0:
        fflush(stdin);
        printf("\n koje ime terazite : ");
        gets(str);
 for(int i=0;i<br;i++)
        {
            if(strcmp(str,radnik[i].ime)==0)
            {
                ispis(i);
            }
        }

    break;

    case 1:
     fflush(stdin);
        printf("\n koje prezime terazite : ");
        gets(str);
 for(int i=0;i<br;i++)
        {
            if(strcmp(str,radnik[i].prezime)==0)
            {
                ispis(i);
            }
        }




    break;


    case 2:
      fflush(stdin);
        printf("\n koje sifra terazite : ");
        gets(str);
 for(int i=0;i<br;i++)
        {
            if(strcmp(str,radnik[i].sifra)==0)
            {
                ispis(i);
            }
        }

    break;


    }

}
void   IzmenaVrednostiNaloga(int br)
{int odluka;
    printf("kojeg radnika zelite da izmenite od 1-%d",br);
    scanf("%d",&odluka);
    izmenaInf(odluka);




}
void Brisanjeradnika(int br)
{int odluka;

    printf("koje radnike bi ste zeleli da obrisete 1-%d",br);
    scanf("%d",&odluka);
    for(int i=odluka-1;i<br;i++)
    {


strcpy(radnik[i].ime,radnik[i+1].ime);

strcpy(radnik[i].prezime,radnik[i+1].prezime);
radnik[i].brojgodina=radnik[i+1].brojgodina;

strcpy(radnik[i].sifra,radnik[i+1].sifra);
strcpy(radnik[i].datumZaposlenja,radnik[i+1].datumZaposlenja);
radnik[i].stepenStrucneSpreme=radnik[i+1].stepenStrucneSpreme;
radnik[i].ukupnaIsplata =radnik[i+1].ukupnaIsplata;
radnik[i].plataZaTekuciMesec =radnik[i+1].plataZaTekuciMesec;
radnik[i]. brojRadnihSati=radnik[i+1]. brojRadnihSati;
}

}
 void   Obracunplate(int br)
 {int cenaSata=10;
     for(int i=0;i<br;i++)
     {

int osnovnaZarada =radnik[i]. brojRadnihSati * cenaSata * radnik[i].stepenStrucneSpreme;
int minuliRad = radnik[i].brojGodinaRadnogStaza * 0.4* osnovnaZarada;
int topliObrok = TOPL/satu * brsati
radnik.[i].plataZaTekuciMesec = osnovnaZarada + minuliRad +
topliObrok + regres;
     }

 }
void Meni(int brojradnika)
{int odluka;



    printf("unesite doluku:0,1,2,3,4,5,6: ");
    scanf("%d[0-6]",&odluka);
    switch(odluka)
    {

    case 0:

        DodavanjeRadnika(brojradnika);
           brojradnika++;
        Meni(brojradnika);
    break;
    case 1:
        PrikazRadnika(brojradnika);
        Meni(brojradnika);
    break;
    case 2:
       PrikazIzvestaja(brojradnika);
       Meni( brojradnika);
    break;
    case 3:
        PretragaNaloga(brojradnika);
       Meni( brojradnika);
    break;
    case 4:
       IzmenaVrednostiNaloga( brojradnika);
       Meni(brojradnika);
    break;
    case 5:
      Brisanjeradnika( brojradnika);
       brojradnika--;
       Meni( brojradnika);
    break;
    case 6:
      Obracunplate(brojradnika);
      Meni(brojradnika);
    break;
    }
}

int main()
{int br=0;
Meni(br);


    return 0;
}
