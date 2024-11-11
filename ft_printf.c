/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:37:16 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/11 12:05:57 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"

/*
Idée de comment gere le truc

✓ avoir une structure contenant le type de conversion, l'index de depart (index premier %) et d'arrivee (symbole de conversion) (et au cas ou je suis tenté par les bonus, je peux juste ajouter des elements a la struct)
✓ on fait une liste chainee de chaque truc qu'on trouve (on stoque n'importe quel valid char derriere le %)
✓ faire en suite une fonction de lstsize speciale pour pas compter les %% et tous les char qu'ont r a faire la
✗ recuper les arg grace a la size calculee
✗ faire un putstr special dans lequel je peux mettre ma string et le nombre max de truc a copier et a chaque fois on print de l'index actuel jusqu'a l'index stoque du premier pourcent, et qui reprend a l'index de fin de la meme liste apres avoir print l'element.
✗ tout clear bien et hop

example : ft_printf("ceci est %s bien sympathique", "un test");
print(str, index depart (0), index fin : premier % -1 (ici 8))					// output : ceci est $
printelementliste(type, argv)
--> ici putstr("un test")														// output : un test$
print(str, index depart (11), index fin : prochain % -1 ou fin de str (ici 27))	// output :  bien sympathique$

Faudra faire quelques test sur qu'est ce qui disparait apres le %, est ce que c'est tout les printable, est ce que c'est tout sauf l'espace, etc.

*/

t_list	*ft_params_list(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		
	}
}

int	ft_printf(const char *str, ...)
{
	
}