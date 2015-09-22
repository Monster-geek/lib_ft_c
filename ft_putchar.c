/* C/C++ File */
/* AUTHOR:   Alexandre DIDIER */
/* FILE:     ft_putchar.c */
/* CREATED:  2015-09-22 21:54:17 */

void ft_putchar(char c)
{
	write(1, &c, 1);
}
