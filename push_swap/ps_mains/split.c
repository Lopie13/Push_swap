#include "../push_swap.h"

static int	word_c(char *s, char c)
{
	int	count;
	bool	i_word;

	count = 0;
	while (*s)
	{
		i_word = false;
		while (*s == c)
			++s;
		while (*s != c && *s)
		{
			if (!i_word)
			{
				count++;
				i_word = true;
			}
			++s;
		}
		
	}
	return (count);
}

static char	next_word (char *s, char c)
{
	static int	track = 0;
	char 		*next;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s[track] == c)
		track++;
	while((s[track + len] != c) && s[track + len])
		len++;
	next = malloc((size_t)len * sizeof(char) + 1);
	if (!next)
		return (NULL);
	while ((s[track] != c) && s[track])
		next[i++] = s[track++];
	next[i] = '\0';
	return (next);
}

char **split(char *s, char c)
{
	int		wordcount;
	char	**result;
	int		i;

	i = 0;
	wordcount = word_c(s, c);
	if (!wordcount)
		exit(1);
	result = malloc(sizeof(char *) * (size_t)(wordcount + 2));
	if (!result)
		return (NULL);
	while (wordcount-- >= 0)
	{
		if (i == 0)
		{
			result[i] = malloc(sizeof(char));
			if (!result[i])
				return (NULL);
			result[i++][0] = '\0';
			continue ;
		}
		result[i++] = get_next_word(s, c);
	}
	result[i] = NULL;
	return (result);
}
