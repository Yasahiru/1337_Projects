// #include "libft.h"

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*ptr;
// 	char	*tmp;

// 	int (len_s1), (len_s2);
// 	if (s1 == NULL && s2 == NULL)
// 		return (NULL);
// 	if (!s1)
// 		s1 = "";
// 	if (!s2)
// 		s2 = "";
// 	len_s1 = ft_strlen(s1);
// 	len_s2 = ft_strlen(s2);
// 	ptr = malloc((len_s2 + len_s1 + 1) * sizeof(char));
// 	if (!ptr)
// 		return (NULL);
// 	tmp = ptr;
// 	while (*s1)
// 		*ptr++ = (char)*s1++;
// 	while (*s2)
// 		*ptr++ = (char)*s2++;
// 	*ptr = '\0';
// 	return (tmp);
// }