/**
 * *_strcat - a function of char
 * @dest: the frist string
 * @src: the seconf string
 * Return: nothing
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
