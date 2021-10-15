# Libft

# What is Libft?

In this project, the students must re-code some standard C library functions plus some additional ones with the aim of providing them with a deeper understanding of their behaviour. This way we can have our own library, which we will eventually expand throughout the whole cursus by adding functions we could find useful during the development of other projects.

# Content

*There are several types of functions within this repository.*

## Libc functions

These functions are simply standard C library functions recoded. Their names are exactly the same as the ones that appear in the `man`, except for the "*ft_*" (forty two) added at the beginning of the name. Therefore, their descriptions and return values are the same as those of the standard C library, since my task was to recreate them (*almost*) identically.

## Additional functions

The functions included in this set are either not included in the libc, or included in a different form. Nevertheless, they will provide a great help in future projects.

## Bonus functions

The functions included in this part are used to manipulate lists. Therefore, the following struct is included in the [libft.h](https://github.com/Javiff8/Libft/blob/master/inc/libft.h) file:

```c
typedef struct s_list
{
	void		*content;`
	struct s_list	*next;`
}	t_list;`
```

All functions using t_list will be using this struct to represent the elements of the list. Here is a description of the fields of the struct:

- **content**: The data contained in the element. The *void allows to store any kind of data.
- **next**: The next element’s address or NULL if it’s the last element.

## Personal functions

This set of functions includes those that I have created on my own during the development of my projects. Because of their utility or frequency of use, I have decided to include them on my library along with the rest. Just in case I have the necessity of using them in the future.

# Functions

The next table shows the different functions contained within the [src/](https://github.com/Javiff8/Libft/tree/master/src) directory of this repository with a small description of their behaviour and their prototype.

|Function                 |Description               |Prototype                                                         |
|--------------------------|----------------|------------------------------------------------------------------------|
|[ft_isalpha](https://github.com/Javiff8/Libft/blob/master/src/ft_isalpha.c)                  |Is c a letter?|`int	ft_isalpha(int c);`                                                  |
|[ft_isdigit](https://github.com/Javiff8/Libft/blob/master/src/ft_isdigit.c)                  |Is c a number?|`int	ft_isdigit(int c);`                                                  |
|[ft_isalnum](https://github.com/Javiff8/Libft/blob/master/src/ft_isalnum.c)                  |Is c a letter or a number?|`int	ft_isalnum(int c);`                                                  |
|[ft_isascii](https://github.com/Javiff8/Libft/blob/master/src/ft_isascii.c)                  |Is c ascii?|`int	ft_isalnum(int c);`                                                  |
|[ft_isprint](https://github.com/Javiff8/Libft/blob/master/src/ft_isprint.c)                  |Is c printable?|`int	ft_isprint(int c);`                                                  |
|[ft_strlen](https://github.com/Javiff8/Libft/blob/master/src/ft_strlen.c)                    |Len of a string|`size_t	ft_strlen(const char *s);`                                        |
|[ft_memset](https://github.com/Javiff8/Libft/blob/master/src/ft_memset.c)                    |Write len bytes c to b|`void	*ft_memset(void *b, int c, size_t len);`                            |
|[ft_bzero](https://github.com/Javiff8/Libft/blob/master/src/ft_bzero.c)                      |ft_memset with '\0' as c|`void	ft_bzero(void *s, size_t n);`                                       |
|[ft_memcpy](https://github.com/Javiff8/Libft/blob/master/src/ft_memcpy.c)                    |n bytes from src to dst|`void	*ft_memset(void *b, int c, size_t len);`                            |
|[ft_memmove](https://github.com/Javiff8/Libft/blob/master/src/ft_memmove.c)                  |ft_memcpy for overlapped strings|`void	*ft_memmove(void *dst, const void *src, size_t len);`               |
|[ft_strlcpy](https://github.com/Javiff8/Libft/blob/master/src/ft_strlcpy.c)                  |Copy dstsize characters|`size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);`          |
|[ft_strlcat](https://github.com/Javiff8/Libft/blob/master/src/ft_strlcat.c)                  |Concats dstsize characters in dst|`size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);`          |
|[ft_toupper](https://github.com/Javiff8/Libft/blob/master/src/ft_toupper.c)                  |Uppercase to lowercase|`int	ft_toupper(int c);`                                                  |
|[ft_tolower](https://github.com/Javiff8/Libft/blob/master/src/ft_tolower.c)                  |Lowercase to uppercase|`int	ft_tolower(int c);`                                                  |
|[ft_strchr](https://github.com/Javiff8/Libft/blob/master/src/ft_strchr.c)                    |Locates the first occurrence of c|`char	*ft_strchr(const char *s, int c);`                                  |
|[ft_strrchr](https://github.com/Javiff8/Libft/blob/master/src/ft_strrchr.c)                  |Locates the last occurrence of c|`char	*ft_strrchr(const char *s, int c);`                                 |
|[ft_strncmp](https://github.com/Javiff8/Libft/blob/master/src/ft_strncmp.c)                  |Compares n characters|`int	ft_strncmp(const char *s1, const char *s2, size_t n);`               |
|[ft_memchr](https://github.com/Javiff8/Libft/blob/master/src/ft_memchr.c)                    |Searches n bytes to locate c in s |`void	*ft_memchr(const void *s, int c, size_t n);`                        |
|[ft_memcmp](https://github.com/Javiff8/Libft/blob/master/src/ft_memcmp.c)                    |Compares n bytes|`int	ft_memcmp(const void *s1, const void *s2, size_t n);`                |
|[ft_strnstr](https://github.com/Javiff8/Libft/blob/master/src/ft_strnstr.c)                  |Searches needle in haystack for n|`char	*ft_strnstr(const char *haystack, const char *needle, size_t len);` |
|[ft_atoi](https://github.com/Javiff8/Libft/blob/master/src/ft_atoi.c)                        |Ascii to integer|`int	ft_atoi(const char *str);`                                           |
|[ft_calloc](https://github.com/Javiff8/Libft/blob/master/src/ft_calloc.c)                    |Allocates bytes and sets them at 0|`void	*ft_calloc(size_t count, size_t size);`                             |
|[ft_strdup](https://github.com/Javiff8/Libft/blob/master/src/ft_strdup.c)                    |Copy s1 to a new string|`char	*ft_strdup(const char *s1);`                                        |
|[ft_substr](https://github.com/Javiff8/Libft/blob/master/src/ft_substr.c)                    |Substr from start to len (max)|`char *ft_substr(char const *s, unsigned int start,size_t len);`          |
|[ft_strjoin](https://github.com/Javiff8/Libft/blob/master/src/ft_strjoin.c)                  |Concats s1 and s2 in a new string|`char *ft_strjoin(char const *s1, char const *s2);`                       |
|[ft_strtrim](https://github.com/Javiff8/Libft/blob/master/src/ft_strtrim.c)                  |Trims a string using set|`char *ft_strtrim(char const *s1, char const *set);`                      |
|[ft_split](https://github.com/Javiff8/Libft/blob/master/src/ft_split.c)                      |Splits a string using c as separator|`char **ft_split(char const *s, char c);`                                 |
|[ft_itoa](https://github.com/Javiff8/Libft/blob/master/src/ft_itoa.c)                        |Integer to ascii|`char *ft_itoa(int n);`                                                   |
|[ft_strmapi](https://github.com/Javiff8/Libft/blob/master/src/ft_strmapi.c)                  |New string from s applying f|`char *ft_strmapi(char const *s, char (*f)(unsignedint, char));`          |
|[ft_striteri](https://github.com/Javiff8/Libft/blob/master/src/ft_striteri.c)                |Applies f to each character|`void ft_striteri(char *s, void(*f)(unsigned int, char));`                |
|[ft_putchar_fd](https://github.com/Javiff8/Libft/blob/master/src/ft_putchar_fd.c)            |Outputs c to fd|`void ft_putchar_fd(char c, int fd);`                                     |
|[ft_putstr_fd](https://github.com/Javiff8/Libft/blob/master/src/ft_putstr_fd.c)              |Outputs s to fd|`void ft_putstr_fd(char *s, int fd);`                                     |
|[ft_putendl_fd](https://github.com/Javiff8/Libft/blob/master/src/ft_putendl_fd.c)            |ft_putstr_fd + newline|`void	ft_putendl_fd(char *s, int fd);`                                    |
|[ft_putnbr_fd](https://github.com/Javiff8/Libft/blob/master/src/ft_putnbr_fd.c)              |Outputs n to fd|`void	ft_putnbr_fd(int n, int fd);`                                       |
|[ft_lstnew](https://github.com/Javiff8/Libft/blob/master/src/ft_lstnew.c)                    |New element lst→content|`t_list	*ft_lstnew(void *content);`                                       |
|[ft_lstsize](https://github.com/Javiff8/Libft/blob/master/src/ft_lstsize.c)                  |Length of lst|`int ft_lstsize(t_list *lst);`                                            |
|[ft_lstadd_front](https://github.com/Javiff8/Libft/blob/master/src/ft_lstadd_front.c)        |New element at the beginning of lst|`void	ft_lstadd_front(t_list **lst, t_list *new);`                        |
|[ft_lstlast](https://github.com/Javiff8/Libft/blob/master/src/ft_lstlast.c)                  |Last element of lst|`t_list	*ft_lstlast(t_list *lst);`                                        |
|[ft_lstadd_back](https://github.com/Javiff8/Libft/blob/master/src/ft_lstadd_back.c)          |new at the end of lst|`void ft_lstadd_back(t_list **lst, t_list *new);`                         |
|[ft_lstdelone](https://github.com/Javiff8/Libft/blob/master/src/ft_lstdelone.c)              |Frees the content and the element|`void	ft_lstdelone(t_list *lst, void (*del)(void *));`                    |
|[ft_lstclear](https://github.com/Javiff8/Libft/blob/master/src/ft_lstclear.c)                |Frees lst from the element|`void	ft_lstclear(t_list **lst, void (*del)(void *));`                  |
|[ft_lstiter](https://github.com/Javiff8/Libft/blob/master/src/ft_lstiter.c)                  |Iterates lst and applies f|`void	ft_lstiter(t_list *lst, void (*f)(void *));`                      |
|[ft_lstmap](https://github.com/Javiff8/Libft/blob/master/src/ft_lstmap.c)                    |Copies lst applying f|`t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`|
|[get_next_line](https://github.com/Javiff8/Libft/blob/master/src/get_next_line.c)            |Returns a line from a file descriptor|`char	*get_next_line(int fd);`|
|[get_next_line_bonus](https://github.com/Javiff8/Libft/blob/master/src/get_next_line_bonus.c)|The same but works on multiple fd|`char	*get_next_line_bonus(int fd);`|

For a larger version of this table with more extended descriptions of the functions you can access this notion: [Functions](https://javferna-42-cursus.notion.site/e39ac1c36e2740e286abedb68753af0f?v=ba007b7e3f9d445785915d94146f111e)

# How does it work?

The [Makefile](https://github.com/Javiff8/Libft/blob/master/Makefile) does not relink, and has the following rules:

- `make all` or simply `make` : used to compile the whole library.
- `make clean`: used to remove all objects.
- `make fclean`: to remove all objects and the *libft.a* file.
- `make re` same as doing `make fclean` followed by `make`.

To use the functions in this library, it is as simple as including the [libft.h](https://github.com/Javiff8/Libft/blob/master/inc/libft.h) header at the beginning of the "**.c**" files that will use any of these functions and compiling the **libft.a**.

# Status, grade and observations

- Status: Finished.
- Grade: This project was graded with a 125%.
- Observations: None.
