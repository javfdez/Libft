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

[Functions](https://www.notion.so/e39ac1c36e2740e286abedb68753af0f)

# How does it work?

The *[Makefile](https://github.com/Javiff8/Libft/blob/master/Makefile)* does not relink, and has the following rules:

- `make all` or simply `make` : used to compile the whole library.
- `make **clean**`: used to remove all objects.
- `make fclean`: to remove all objects and the *libft.a* file.
- `make re` same as doing `make fclean` followed by `make`.

To use the functions in this library, it is as simple as including the [libft.h](https://github.com/Javiff8/Libft/blob/master/inc/libft.h) header at the beginning of the "**.c**" files that will use any of these functions and compiling the **libft.a** file alongside with the "**.o**" objects generated from those "**.c**" files.

# Status, grade and observations

- Status: Finished.
- Grade: This project was graded with a 125%.
- Observations: None.