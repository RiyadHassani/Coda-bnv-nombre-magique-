#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int random_number = rand() % 100 + 1;
	int guess;
	int vie=3;
	while(guess!=random_number)
	{
		printf("Choisis un nombre que j'ai pick aléatoirement, %d essais restants :\n", vie);
		scanf("%d" , &guess);
		if(guess==random_number)
		{
			printf("Bravo ! Tu as trouvé le nombre avec encore %d vie restantes ! :\n", vie);
			return(0);
		}
		else if(vie==0)
		{
			printf("Dommage, il ne te reste plus de tentative, le nombre était %d :\n", random_number);
			return(0);
		}
		else
		{
			if(guess<random_number)
			{
				printf("Mauvaise réponse, le nombre doit etre plus grand,  %d vies restante :\n", vie);
				vie=vie-1;
			}
			else
			{
				printf("Mauvaise réponse, le nombre doit etre plus petit,  %d vies restante :\n", vie);
				vie=vie-1;
			}
}
