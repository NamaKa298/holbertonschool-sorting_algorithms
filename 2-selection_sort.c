#include "sort.h"
/**
 * selection_sort - Trie un tableau d'entiers par ordre croissant
 * en utilisant le tri par sélection
 * @array: Le tableau d'entiers à trier
 * @size: La taille du tableau
 *
 * Description:
 * Cette fonction trie le tableau d'entiers @array en utilisant
 * l'algorithme de tri par sélection.
 * Elle prend en entrée un tableau d'entiers non trié @array et
 * sa taille @size.
 * Le tableau est trié en place, c'est-à-dire que les éléments
 * sont réorganisés dans l'ordre croissant.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, temporaire, indice;

	for (indice = size - 1 ; indice > 0 ; indice--)
	{
		for (i = size - 1 ; i > 0; i--)
		{
			if (array[i] < (array[i - 1]))
			{
				temporaire = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temporaire;
			}
		}
		 print_array(array, size);
	}
}
