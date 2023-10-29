#include <stdio.h>
#include <stdlib.h>

/**
 * convert - counts number of coins needed to change
 * @amount: amount to be converted
 * @num: number of coins
 * @k: index to specify coin value from array
 * Return: integer
*/
int convert(int amount, int num, int k)
{
	int change[] = {25, 10, 5, 2, 1};

	if (amount == 0 || k >= 5)
		return (num);

	if (amount >= change[k])
	{
		int coins = amount / change[k];

		num += coins;
		amount -= coins * change[k];
	}
	return (convert(amount, num, k + 1));
}

/**
 * main - check the code
 * @argc: counts the number of arguments
 * @argv: prints out arguments passed
 * Return: int 0 (SUCCESS).
 */

int main(int argc, char *argv[])
{
	int amount;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error \n");
		return (1);
	}

	amount = atoi(argv[1]);

	while (amount > 0)
	{
		coins++;
		if ((amount - 25) >= 0)
		{
			amount -= 25;
			continue;
		}
		if ((amount - 10) >= 0)
                {
                        amount -= 10;
                        continue;
                }
		if ((amount - 5) >= 0)
                {
                        amount -= 5;
                        continue;
                }
		if ((amount - 2) >= 0)
                {
                        amount -= 25;
                        continue;
                }
		amount--;
	}
	printf("%d\n", coins);

	return (0);
}
