void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
		if (n == 'z')
			putchar('\n');
	}
}
