#include "deck.h"
/**
* aux_num_fun - turn into integer card value
* @head_tmp1: pointer to the list
* Return: integer rep
*/
int aux_num_fun(deck_node_t *head_tmp1)
{
	int aux_num, j;
	int num[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	char val[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', '1', 'J', 'Q', 'K'};

	for (j = 0; j < 13; j++)
	{
		if (head_tmp1->card->value[0] == val[j])
			aux_num = num[j];
	}
	return (aux_num);
}
