/**
 * _isdigit - function to check for lowercase character
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
