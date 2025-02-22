/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 22:11:56 by hmebraht          #+#    #+#             */
/*   Updated: 2024/12/05 10:45:57 by hmebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value)	({		\
	int _val = (Value);		\
	if(_val <0)				\
		_val = -Value;		\
	_val;					\
})
#endif
