#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();

int main ()
{
	char scelta= '\0' ;
	do{
	menu ();
	scanf (" %c", &scelta);
 
	switch(scelta)
	{
		case'A':
		    moltiplica ();
		    break;
		case'B':
		    dividi();
		    break;
		default:
		    printf("Insere A o B\n");
	}
		}while(scelta != 'A' && scelta != 'B');

	return 0;
}

void menu()
{
	printf("Benvenuto sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf("Come posso aiutarti\n");
	printf("A >> Moltiplica due numeri\nB >> Dividere due numeri\n");
}

void moltiplica ()
{
	int a, b;
	printf("Inserisci i due numeri da moltiplicare:\n");

	scanf("%d", &a);
	scanf("%d", &b);

	int prodotto = a * b;
    printf("Il prodotto tra %d e %d è: %d" , a, b, prodotto);

}

void dividi ()
{
	float a,b;
        printf("Inserisci il numeratore:");
        scanf("%f", &a);
        printf("Inserisci il denominatore");
        scanf("%f", &b);

	float divisione = (float) a /  b;

	printf("La divisone tra %.2lf e %.2lf è : %.2lf", a,b,divisione);
}
