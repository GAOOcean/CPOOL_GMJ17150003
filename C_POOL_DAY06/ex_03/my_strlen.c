

int my_strlen(const char *s)
{
	int len = 0;
	while (*s++ != '\0')
	{
		++len;
	}
	return len;
}
