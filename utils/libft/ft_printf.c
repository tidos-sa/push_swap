/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 22:48:15 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/14 22:48:29 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *text, ...)

{
	va_list arguments;
	int symbol;
	int result;

	symbol = 0;
	result = 0;
	va_start(arguments, text);
	while (text[symbol])
	{
		if (text[symbol] == '%' && ft_strchr("cspdiuxX%", text[symbol + 1]))
		{
			result += argument_case(text[symbol + 1], arguments);
			symbol++;
		}
		else
		{
			ft_putchar(text[symbol]);
			result++;
		}
		symbol++;
	}
	va_end(arguments);
	return (result);
}