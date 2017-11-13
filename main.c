#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*swap(char *mot, int i, int j)
{
	char *copy = (char *)malloc(sizeof(char) * strlen(mot));
	strcpy(copy, mot);

	copy[i] = mot[j];
	copy[j] = mot[i];
	return copy;
}

void	permute(char *mot, unsigned int size)
{
	int i = size;

	if(size == 1)
		printf("%s\n", mot);
	else
		while (i >= 0)
			permute(mot = swap(mot, i--, size), size - 1);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		printf("ça permute une putain de chaine, bobi");
	else
	{
		char			*mot = argv[1];
		unsigned int	size = strlen(mot);
		permute(mot, size - 1);
	}
}
