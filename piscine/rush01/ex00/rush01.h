/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:14:41 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/23 21:09:07 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# define TAB_SIZE 4

void	tranfer_string_vector(char *str, int *vector);
int		check_all_cases(int tab[TAB_SIZE][TAB_SIZE], int pos, int entry[16]);
int		atoi(char c);
int		solution(int tab[TAB_SIZE][TAB_SIZE], int pos, int entry[16]);
int		search_double_number(int tab[TAB_SIZE][TAB_SIZE], int pos, int number);
void	putnumber(int n);
int		my_strlen(char *str);
void	fill_martix(int tab[TAB_SIZE][TAB_SIZE]);
void	display(int tab[TAB_SIZE][TAB_SIZE]);
int		check_row_right(int tab[TAB_SIZE][TAB_SIZE], int pos, int entry[16]);
int		check_row_left(int tab[TAB_SIZE][TAB_SIZE], int pos, int entry[16]);
int		check_col_up(int tab[TAB_SIZE][TAB_SIZE], int pos, int entry[16]);
int		check_col_down(int tab[TAB_SIZE][TAB_SIZE], int pos, int entry[16]);
int		check_bad_inputs(int argc, char *agrv);
int		is_invalid_input(char *agrv);

#endif