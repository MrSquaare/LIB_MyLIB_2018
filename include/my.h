/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** LIB_MyLIB_2018
*/

#ifndef LIB_MYLIB_2018_MY_H
#define LIB_MYLIB_2018_MY_H

/**
* @file my.h
* @brief Functions prototypes of the MyLIB library
*/

#define EOF (-1)
#define IS_NBR(chr) (((chr) >= '0' && (chr) <= '9') ? 1 : 0)
#define STDIN (0)
#define STDOUT (1)
#define STDERR (2)

/**
* @brief Free an array
*
* @param array: <char **>
* @parblock
* Last array element must be a NULL pointer
* @endparblock
*/
void my_arrfree(void **arr);

/**
* @brief Calculates the size of an array
*
* @param array: <char **>
* @parblock
* Last array element must be a NULL pointer
* @endparblock
* @return the size of the array
*/
int my_arrlen(void **arr);

/**
* @brief Converts an integer to a string
*
* @param nbr: <int>
* @return an allocated string of nbr
*/
char *my_itoa(int nbr);

/**
* @brief Converts a long to a string
*
* @param nbr: <int>
* @return an allocated string of nbr
*/
char *my_ltoa(long nbr);

/**
* @brief Prints a character
*
* @param chr: <char>
* @return -1 if the write function failed, else return the character
*/
int my_putchar(int chr);

/**
* @brief Prints a list
*
* @param list: <char **>
* @parblock
* Last list element must be a NULL pointer
* @endparblock
*/
void my_putlist(char **list);

/**
* @brief Prints a string
*
* @param string: <char *>
* @return -1 if the write function failed, else return 0
*/
int my_puts(const char *str);

/**
* @brief Adds the src string at the end of the dest string.
* Be aware to well alloc the dest string with the size of the src string.
*
* @param dest: <char *>
* @param src: <char *>
* @return dest
*/
char *my_strcat(char *dest, const char *src);

/**
* @brief Returns a pointer to the first occurrence of the chr character
* in the src string
*
* @param str: <char *>
* @param chr: <char> Character to find
* @return a pointer to the first occurence of the character
*/
char *my_strchr(const char *str, char chr);

/**
* @brief Returns a pointer to the first occurrence of one of the chrs
* characters in the str string
*
* @param str: <char *>
* @param chrs: <char *> Characters to find
* @return a pointer to the first occurence of one of the chrs characters
*/
char *my_strchrs(const char *str, const char *chrs);

/**
* @brief Deletes character sequences containing only the chrs characters
* and replaces them with the delim character
*
* @param str: <char *>
* @param chrs: <char *> Characters to find
* @param delim: <char> Delimiter to replace with
* @return str with the characters replaced
*/
char *my_strcln(const char *str, const char *chrs, char delim);

/**
* @brief Compare the strings str1 and str2
*
* @param str1: <char *>
* @param str2: <char *>
* @return a negative number if str1 < str2, positive number if str1 > str2
* and 0 if their equal
*/
int my_strcmp(const char *str1, const char *str2);

/**
* @brief Copies the src string into the dest string
* Be aware to alloc the dest string
*
* @param dest: <char *>
* @param src: <char *>
* @return dest
*/
char *my_strcpy(char *dest, const char *src);

/**
* @brief Duplicates the str string
*
* @param str: <char *>
* @return an allocated string of str
*/
char *my_strdup(const char *str);

/**
* @brief Duplicates the str string from start to end, end not included
*
* @param str: <char *>
* @param start: <char *>
* @param end: <char *>
* @return  an allocated string containing the str part
*/
char *my_strduprg(const char *str, const char *start, const char *end);

/**
* @brief Extracts the substring between start and end from the str string
*
* @param str: <char *>
* @param start: <char *>
* @param end: <char *>
* @return an allocated string containing the substring
*/
char *my_strextrct(const char *str, const char *start, const char *end);

/**
* @brief Checks if a string could be a double
*
* @param str: <char *>
* @return 1 if str is a double, otherwise 0
*/
int my_strisd(const char *str);

/**
* @brief Checks if a string could be an integer
*
* @param str: <char *>
* @return 1 if str is an integer, otherwise 0
*/
int my_strisi(const char *str);

/**
* @brief Checks if a string could be a long
*
* @param str: <char *>
* @return 1 if str is a long, otherwise 0
*/
int my_strisl(const char *str);

/**
* @brief Calculates the length of a string
*
* @param str: <char *>
* @return the length of str
*/
int my_strlen(const char *str);

/**
* @brief Returns an allocated string with the dest string concatenated with
* the src string
*
* @param dest: <char *>
* @param src: <char *>
* @return an allocated string with the concatened strings passed as argument
*/
char *my_strmcat(const char *dest, const char *src);

/**
* @brief Returns a pointer to the last occurrence of the chr character
* in the src string
*
* @param str: <char *>
* @param chr: <char>
* @return a pointer to the last occurence of chr
*/
char *my_strrchr(const char *str, char chr);

/**
* @brief Replace each chr character in the str string by the rpl
* character
*
* @param str: <char *>
* @param chr: <char>
* @param rpl: <char>
* @return str with the chr characters replaced by the rpl character
*/
char *my_strrpl(char *str, char chr, char rpl);

/**
* @brief Returns a pointer to the last occurrence of the search substring
* in the src string
*
* @param str: <char *>
* @param search: <char *>
* @return a pointer to the last occurrence of the substring searched
*/
char *my_strrstr(const char *str, const char *search);

/**
* @brief Returns a string array cut by each character in the delim list
*
* @param str: <char *>
* @param delim: <char *>
* @return an array with all the str parts cut by the delim characters
*/
char **my_strsplit(char *str, const char *delim);

/**
* @brief Returns a pointer to the first occurrence of the search substring
* in the src string
*
* @param str: <char *>
* @param search: <char *>
* @return a pointer to the first occurence of the substring
*/
char *my_strstr(const char *str, const char *search);

/**
* @brief Converts a string into a double
*
* @param str: <char *>
* @return a double converted from str
*/
double my_strtod(const char *str);

/**
* @brief Converts a string into an integer
*
* @param str: <char *>
* @return an integer converted from str
*/
int my_strtoi(const char *str);

/**
* @brief Parses a string into a sequence of tokens
*
* @param str: <char *>
* @param delim: <char *>
* @return
*/
char *my_strtok(char *str, const char *delim);

/**
* @brief Converts a string into a long integer
*
* @param str: <char *>
* @return a long converted from str
*/
long my_strtol(const char *str);

#endif // LIB_MYLIB_2018_MY_H
