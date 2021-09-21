# Libft

# What is Libft?

*My first project at 42.*

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
	void			    *content;
	struct s_list	*next;
}	t_list;
```

All functions using *t_list* will be using this struct to represent the elements of the list. Here is a description of the fields of the struct:

- **content**: The data contained in the element**.** The *void ****** allows to store any kind of data.
- **next**: The next element’s address or NULL if it’s the last element.

## Personal functions

This set of functions includes those that I have created on my own during the development of my projects. Because of their utility or frequency of use, I have decided to include them on my library along with the rest. Just in case I have the necessity of using them in the future.

# Functions

The next table shows the different functions contained within the "**src/**" directory of this repository.

|Function                  |Description                         |Return  |Prototype                                                               |Git URL                                                           |
|--------------------------|------------------------------------|--------|------------------------------------------------------------------------|------------------------------------------------------------------|
|ft_isalpha                |Is c a letter?                      |int     |int	ft_isalpha(int c);                                                  |https://github.com/Javiff8/Libft/blob/master/src/ft_isalpha.c     |
|ft_isdigit                |Is c a number?                      |int     |int	ft_isdigit(int c);                                                  |https://github.com/Javiff8/Libft/blob/master/src/ft_isdigit.c     |
|ft_isalnum                |Is c a letter or a number?          |int     |int	ft_isalnum(int c);                                                  |https://github.com/Javiff8/Libft/blob/master/src/ft_isalnum.c     |
|ft_isascii                |Is c ascii?                         |int     |int	ft_isalnum(int c);                                                  |https://github.com/Javiff8/Libft/blob/master/src/ft_isascii.c     |
|ft_isprint                |Is c printable?                     |int     |int	ft_isprint(int c);                                                  |https://github.com/Javiff8/Libft/blob/master/src/ft_isprint.c     |
|ft_strlen                 |Len of a string                     |size_t  |size_t	ft_strlen(const char *s);                                        |https://github.com/Javiff8/Libft/blob/master/src/ft_strlen.c      |
|ft_memset                 |Write len bytes c to b              |void *  |void	*ft_memset(void *b, int c, size_t len);                            |https://github.com/Javiff8/Libft/blob/master/src/ft_memset.c      |
|ft_bzero                  |ft_memset with '\0' as c            |void    |void	ft_bzero(void *s, size_t n);                                       |https://github.com/Javiff8/Libft/blob/master/src/ft_bzero.c       |
|ft_memcpy                 |n bytes from src to dst             |void *  |void	*ft_memset(void *b, int c, size_t len);                            |https://github.com/Javiff8/Libft/blob/master/src/ft_memcpy.c      |
|ft_memmove                |ft_memcpy for overlapped strings    |void *  |void	*ft_memmove(void *dst, const void *src, size_t len);               |https://github.com/Javiff8/Libft/blob/master/src/ft_memmove.c     |
|ft_strlcpy                |Copy dstsize characters             |size_t  |size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);          |https://github.com/Javiff8/Libft/blob/master/src/ft_strlcpy.c     |
|ft_strlcat                |Concats dstsize characters in dst   |size_t  |size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);          |https://github.com/Javiff8/Libft/blob/master/src/ft_strlcat.c     |
|ft_toupper                |Uppercase to lowercase              |int     |int	ft_toupper(int c);                                                  |https://github.com/Javiff8/Libft/blob/master/src/ft_toupper.c     |
|ft_tolower                |Uppercase to lowercase              |int     |int	ft_toupper(int c);                                                  |https://github.com/Javiff8/Libft/blob/master/src/ft_tolower.c     |
|ft_strchr                 |Locates the first occurrence of c   |char *  |char	*ft_strchr(const char *s, int c);                                  |https://github.com/Javiff8/Libft/blob/master/src/ft_strchr.c      |
|ft_strrchr                |Locates the last occurrence of c    |char *  |char	*ft_strrchr(const char *s, int c);                                 |https://github.com/Javiff8/Libft/blob/master/src/ft_strrchr.c     |
|ft_strncmp                |Compares n characters               |int     |int	ft_strncmp(const char *s1, const char *s2, size_t n);               |https://github.com/Javiff8/Libft/blob/master/src/ft_strncmp.c     |
|ft_memchr                 |Searches n bytes to locate c in s   |void *  |void	*ft_memchr(const void *s, int c, size_t n);                        |https://github.com/Javiff8/Libft/blob/master/src/ft_memchr.c      |
|ft_memcmp                 |Compares n bytes                    |int     |int	ft_memcmp(const void *s1, const void *s2, size_t n);                |https://github.com/Javiff8/Libft/blob/master/src/ft_memcmp.c      |
|ft_strnstr                |Searches needle in haystack for n   |char *  |char	*ft_strnstr(const char *haystack, const char *needle, size_t len); |https://github.com/Javiff8/Libft/blob/master/src/ft_strnstr.c     |
|ft_atoi                   |Ascii to integer                    |int     |int	ft_atoi(const char *str);                                           |https://github.com/Javiff8/Libft/blob/master/src/ft_atoi.c        |
|ft_calloc                 |Allocates bytes and sets them at 0  |void *  |void	*ft_calloc(size_t count, size_t size);                             |https://github.com/Javiff8/Libft/blob/master/src/ft_calloc.c      |
|ft_strdup                 |Copy s1 to a new string             |char *  |char	*ft_strdup(const char *s1);                                        |https://github.com/Javiff8/Libft/blob/master/src/ft_strdup.c      |
|ft_substr                 |Substr from start to len (max)      |char *  |char *ft_substr(char const *s, unsigned int start,size_t len);          |https://github.com/Javiff8/Libft/blob/master/src/ft_substr.c      |
|ft_strjoin                |Concats s1 and s2 in a new string   |char *  |char *ft_strjoin(char const *s1, char const *s2);                       |https://github.com/Javiff8/Libft/blob/master/src/ft_strjoin.c     |
|ft_strtrim                |Trims a string using set            |char *  |char *ft_strtrim(char const *s1, char const *set);                      |https://github.com/Javiff8/Libft/blob/master/src/ft_strtrim.c     |
|ft_split                  |Splits a string using c as separator|char ** |char **ft_split(char const *s, char c);                                 |https://github.com/Javiff8/Libft/blob/master/src/ft_split.c       |
|ft_itoa                   |Integer to ascii                    |char *  |char *ft_itoa(int n);                                                   |https://github.com/Javiff8/Libft/blob/master/src/ft_itoa.c        |
|ft_strmapi                |New string from s applying f        |char *  |char *ft_strmapi(char const *s, char (*f)(unsignedint, char));          |https://github.com/Javiff8/Libft/blob/master/src/ft_strmapi.c     |
|ft_striteri               |Applies f to each character         |void    |void ft_striteri(char *s, void(*f)(unsigned int, char));                |https://github.com/Javiff8/Libft/blob/master/src/ft_striteri.c    |
|ft_putchar_fd             |Outputs c to fd                     |void    |void ft_putchar_fd(char c, int fd);                                     |https://github.com/Javiff8/Libft/blob/master/src/ft_putchar_fd.c  |
|ft_putstr_fd              |Outputs s to fd                     |void    |void ft_putstr_fd(char *s, int fd);                                     |https://github.com/Javiff8/Libft/blob/master/src/ft_putstr_fd.c   |
|ft_putendl_fd             |ft_putstr_fd + newline              |void    |void	ft_putendl_fd(char *s, int fd);                                    |https://github.com/Javiff8/Libft/blob/master/src/ft_putendl_fd.c  |
|ft_putnbr_fd              |Outputs n to fd                     |void    |void	ft_putnbr_fd(int n, int fd);                                       |https://github.com/Javiff8/Libft/blob/master/src/ft_putnbr_fd.c   |
|ft_lstnew                 |New element lst→content             |t_list *|t_list	*ft_lstnew(void *content);                                       |https://github.com/Javiff8/Libft/blob/master/src/ft_lstnew.c      |
|ft_lstsize                |Length of lst                       |int     |int ft_lstsize(t_list *lst);                                            |https://github.com/Javiff8/Libft/blob/master/src/ft_lstsize.c     |
|ft_lstadd_front           |new at the beginning of lst         |void    |void	ft_lstadd_front(t_list **lst, t_list *new);                        |https://github.com/Javiff8/Libft/blob/master/src/ft_lstadd_front.c|
|ft_lstlast                |Last element of lst                 |t_list *|t_list	*ft_lstlast(t_list *lst);                                        |https://github.com/Javiff8/Libft/blob/master/src/ft_lstlast.c     |
|ft_lstadd_back            |new at the end of lst               |void    |void ft_lstadd_back(t_list **lst, t_list *new);                         |https://github.com/Javiff8/Libft/blob/master/src/ft_lstadd_back.c |
|ft_lstdelone              |Frees the content and the element   |void    |void	ft_lstdelone(t_list *lst, void (*del)(void *));                    |https://github.com/Javiff8/Libft/blob/master/src/ft_lstdelone.c   |
|ft_lstclear               |Frees lst from the element          |void    |void	ft_lstclear(t_list **lst, void (*del)(void *));                    |https://github.com/Javiff8/Libft/blob/master/src/ft_lstclear.c    |
|ft_lstiter                |Iterates lst and applies f          |void    |void	ft_lstiter(t_list *lst, void (*f)(void *));                        |https://github.com/Javiff8/Libft/blob/master/src/ft_lstiter.c     |
|ft_lstmap                 |Copies lst applying f               |t_list *|t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));|https://github.com/Javiff8/Libft/blob/master/src/ft_lstmap.c      |
|Function Description Libft|                                    |        |                                                                        |https://github.com/Javiff8/Libft/blob/master/src/*.c              |



[Functions](https://www.notion.so/e39ac1c36e2740e286abedb68753af0f)

# How does it work?

The [Makefile](https://github.com/Javiff8/Libft/blob/master/Makefile) does not relink, and has the following rules:

- `make all` or simply `make` : used to compile the whole library.
- `make **clean**`: used to remove all objects.
- `make fclean`: to remove all objects and the *libft.a* file.
- `make re` same as doing `make fclean` followed by `make`.

To use the functions in this library, it is as simple as including the [libft.h](https://github.com/Javiff8/Libft/blob/master/inc/libft.h) header at the beginning of the "**.c**" files that will use any of these functions and compiling the **libft.a** file alongside with the "**.o**" objects generated from those "**.c**" files.

# Status, grade and observations

- Status: Finished.
- Grade: This project was graded with a 125%.
- Observations: None.
