#include<stdio.h>
int main()
{
	char Palabra[256];
	char clave[256];
	int i = 0;
	printf("\nIntroduzca palabra o frase a cifrar:\n");
	fgets(Palabra,255,stdin);
	printf("\nLa frase es:\n");
	for  (i = 0;Palabra[i]!='\0';i++)
		printf("%c ",Palabra[i]);
	
	printf("\nIngrese la contraseña:\n");
		fgets(clave,255,stdin);
		printf ("\nFrase encriptada:\n");
	for  (i = 0; Palabra[i]!='\0';i++)
	{
		Palabra[i]+=clave[i];
		printf("%c ",Palabra[i]);
	}
	printf("\n\nFrase desencriptada:\n");
	for  (i = 0; Palabra[i]!='\0';i++)
	{
		Palabra[i]-=clave[i];
		printf("%c ",Palabra[i]);
	}
	return 0;
}
