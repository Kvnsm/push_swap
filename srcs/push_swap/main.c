/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglory <tglory@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:58:02 by tglory            #+#    #+#             */
/*   Updated: 2021/05/14 10:42:58 by tglory           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_master	*stack_master;

	if (argc <= 1)
		ft_error("You need to add int in argument to sort it.\n-v = verbose," \
		" -c last action colored, -h hide default output," \
		" -a <1 or 2 or 3 or 4> algo version, -i show count of instructions," \
		" -ex test exemple int list with default algo, -t test all algo");
	else if (argc >= 2 && !ft_strncmp(argv[1], "-ex", 3))
	{
		test_exemple();
		return (EXIT_SUCCESS);
	}
	stack_master = ft_args_to_stack_master(argv, argc - 1);

	if (stack_master->algo_version == 0)
	{
		test_all_algo(stack_master, argc, argv);
	}
	else 
	{
		ft_auto_sort(stack_master);
		ft_stack_master_free(stack_master);
	}
	return (EXIT_SUCCESS);
}
