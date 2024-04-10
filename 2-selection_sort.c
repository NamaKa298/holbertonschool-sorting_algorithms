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
	size_t i, temporaire, indice, indice_nombre_min;
	int nombre_min;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (indice = 0 ; indice < size ; indice++)
	{
		nombre_min = array[indice];
		indice_nombre_min = indice;

		for (i = indice ; i < size ; i++)
		{
			if (nombre_min > (array[i]))
			{
				nombre_min = array[i];
				indice_nombre_min = i;
			}
		}
		if (indice_nombre_min != indice)
		{
			temporaire = array[indice];
			array[indice] = nombre_min;
			array[indice_nombre_min] = temporaire;
			print_array(array, size);
		}
	}
}
