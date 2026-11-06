#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int random_number = rand() % 100 + 1;
	int guess;
	int vie=10;
	while(guess!=random_number)
	{
		printf("Choisis un nombre que j'ai pick aléatoirement, %d essais restants :\n", vie);
		scanf("%d" , &guess);
		if(guess==random_number)
		{
			printf("Bravo ! Tu as trouvé le nombre avec encore %d vie restantes ! :\n", vie);
			return(0);
		}
		else if(vie==1)
		{
			printf("Dommage, il ne te reste plus de tentative, le nombre était %d :\n", random_number);
			return(0);
		}
		else
		{
			if(guess<random_number)
			{
				printf("Le nombre doit etre plus grand \n");
				vie=vie-1;
			}
			else
			{
				printf("Le nombre doit etre plus petit\n");
				vie=vie-1;
			}
		}
	}
}
