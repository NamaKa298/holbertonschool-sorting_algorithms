#include "sort.h"
/**
 * insertion_sort_list - Trie une liste chaînée d'entiers par ordre croissant
 * @list: Pointeur vers un pointeur pointant vers le premier
 * élément de la liste
 *
 * Description:
 * Cette fonction trie une liste chaînée d'entiers en utilisant l'algorithme
 * de tri par insertion.
 * Elle prend en entrée un pointeur vers un pointeur pointant vers le premier
 * élément de la liste.
 * La liste est triée en place, c'est-à-dire que les éléments sont
 * réorganisés dans l'ordre croissant.
 * La fonction ne retourne rien, mais met à jour le pointeur @list pour
 * qu'il pointe vers la liste triée.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temporaire;

	if (list == NULL || (*list)->next == NULL)
	{
		return;
	}
	current = (*list)->next;
	while (current != NULL)
	{
		temporaire = current->prev;
		while (temporaire != NULL && temporaire->n > current->n)
		{
			if (temporaire->prev != NULL)
			{
				temporaire->prev->next = current;
			}
			else
			{
				*list = current;
			}
			current->prev = temporaire->prev;
			temporaire->prev = current;
			temporaire->next = current->next;
			current->next = temporaire;

			if (temporaire->next != NULL)
			{
				temporaire->next->prev = temporaire;
			}
			print_list(*list);

			temporaire = current->prev;
		}

		current = current->next;
	}
}
