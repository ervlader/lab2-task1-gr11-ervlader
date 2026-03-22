/* Sastny-Legchin Vladislav, Group 11, FPMI */
/* lucky.h — interface: lucky number check  */

#ifndef LUCKY_H
#define LUCKY_H

/*
 * is_lucky — returns 1 if n is a 6-digit lucky number,
 *            0 otherwise.
 * Lucky number: sum of first 3 digits == sum of last 3.
 */
int     is_lucky(int n);

#endif /* LUCKY_H */
