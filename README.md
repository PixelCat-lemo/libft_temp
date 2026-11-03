This project has been created as part of the 42 curriculum by pde-lemo.

<h1>Libft</h1>
<h2>Description</h2>

**Libft** is the first project from the 42 Common Core curriculum. Its goal is to recreate a collection of standard C library functions, as well as implement additional utility functions, by building a personal C library.
The project provides a deeper understanding of how common C functions work internally, while developing essential programming skills such as memory management, string manipulation, pointers, and linked lists.
The result is a reusable library called libft.a, which can be integrated into future C projects.

<br>

<h2>Features</h2>

1. <h3>Libc Functions</h3>

The library functions includes:

<br>

**Character Checking and Manipulation**

| Function   | Description                                                            |
| ---------- | ---------------------------------------------------------------------- |
| ft_isalpha | Checks whether a character is an alphabetic letter.                    |
| ft_isdigit | Checks whether a character is a decimal digit (0–9).                   |
| ft_isalnum | Checks whether a character is alphanumeric.                            |
| ft_isascii | Checks whether a character belongs to the ASCII character set (0–127). |
| ft_isprint | Checks whether a character is printable.                               |
| ft_toupper | Converts a lowercase letter into uppercase.                            |
| ft_tolower | Converts an uppercase letter into lowercase.                           |

<br>

**String Manipulation**
| Function   | Description                                                        |
| ---------- | ------------------------------------------------------------------ |
| ft_strlen  | Returns the length of a string, excluding the null terminator.     |
| ft_strchr  | Finds the first occurrence of a character in a string.             |
| ft_strrchr | Finds the last occurrence of a character in a string.              |
| ft_strncmp | Compares two strings up to a specified number of characters.       |
| ft_strlcpy | Copies a string into a destination buffer with size protection.    |
| ft_strlcat | Appends a string to another while respecting the destination size. |
| ft_strnstr | Searches for a substring within a string up to a specified length. |
| ft_strdup  | Creates a dynamically allocated duplicate of a string.             |

<br>

**Memory Manipulation**

| Function   | Description                                                     |
| ---------- | --------------------------------------------------------------- |
| ft_memset  | Fills a memory block with a specified byte value.               |
| ft_bzero   | Sets a specified number of bytes to zero.                       |
| ft_memcpy  | Copies a specified number of bytes between memory areas.        |
| ft_memmove | Copies memory safely, even when source and destination overlap. |
| ft_memchr  | Searches for a byte within a memory block.                      |
| ft_memcmp  | Compares two memory blocks byte by byte.                        |

<br>

**Conversion and Allocation**

| Function  | Description                                                      |
| --------- | ---------------------------------------------------------------- |
| ft_atoi   | Converts a string representing an integer into an integer value. |
| ft_calloc | Allocates memory for an array and initializes it to zero.        |

<br>
<br>

1. <h3>Additional Functions</h3>

Utility functions created to simplify string manipulation, data conversion, and output operations.

<br>

**String Manipulation**
| Function    | Description                                                                        |
| ----------- | ---------------------------------------------------------------------------------- |
| ft_substr   | Creates a new string containing a substring from a specified index and length.     |
| ft_strjoin  | Creates a new string by concatenating two strings.                                 |
| ft_strtrim  | Removes specified characters from the beginning and end of a string.               |
| ft_split    | Splits a string into an array of strings using a delimiter character.              |
| ft_strmapi  | Creates a new string by applying a function to each character and its index.       |
| ft_striteri | Applies a function to each character and its index, modifying the original string. |

<br>

**Conversion**

| Function | Description                                              |
| -------- | -------------------------------------------------------- |
| ft_itoa  | Converts an integer into a dynamically allocated string. |

<br>

**File Descriptor Output**
| Function      | Description                                                           |
| ------------- | --------------------------------------------------------------------- |
| ft_putchar_fd | Writes a character to a specified file descriptor.                    |
| ft_putstr_fd  | Writes a string to a specified file descriptor.                       |
| ft_putendl_fd | Writes a string followed by a newline to a specified file descriptor. |
| ft_putnbr_fd  | Writes an integer to a specified file descriptor.                     |

<br>
<br>

3. <h3>Linked List</h3>

Functions for creating, manipulating, and managing singly linked lists.
**Linked List Structure**
c

<pre><code>typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;</code></pre>

Each node contains a pointer to its content and a pointer to the next node.

<br>

**Linked List Operations**

| Function        | Description                                                                 |
| --------------- | --------------------------------------------------------------------------- |
| ft_lstnew       | Creates a new linked list node containing the specified content.            |
| ft_lstadd_front | Adds a new node to the beginning of a linked list.                          |
| ft_lstsize      | Returns the number of nodes in a linked list.                               |
| ft_lstlast      | Returns the last node of a linked list.                                     |
| ft_lstadd_back  | Adds a new node to the end of a linked list.                                |
| ft_lstdelone    | Deletes one node and frees its content using a specified deletion function. |
| ft_lstclear     | Deletes and frees an entire linked list.                                    |
| ft_lstiter      | Applies a function to the content of every node.                            |
| ft_lstmap       | Creates a new linked list by applying a function to each node's content.    |

<br>

<h2>Instructions</h2>

Clone the repository:

bash
<pre><code>git clone <repository-url></code></pre>
cd libft


Compile the library:

bash
<pre><code>make</code></pre>


This generates the static library:

bash
<pre><code>libft.a</code></pre>

Available Makefile Rules
Command	Description
<pre><code>make	//Compiles the library.
make clean	//Removes object files.
make fclean	//Removes object files and the library.
make re	//Recompiles everything from scratch.</code></pre>
Usage

To use Libft in another C project, include the header file:

c
<pre><code>#include "libft.h"</code></pre>


Compile your source files together with the library:

bash
<pre><code>cc main.c -L. -lft -I. -o program</code></pre>


Run the executable:

bash
<pre><code>./program</code></pre>

<br>

<h2>Resources</h2>

The following resources were useful for understanding the functions and concepts implemented in this project:

Documentation and References

C Standard Library Reference – cppreference<br>
Linux Manual Pages<br>
GNU C Library Documentation<br>
Python Tutor - https://pythontutor.com/visualize.html#<br>
w3 schools - https://www.w3schools.com/<br>
AI Usage<br>

AI tools were used as a supplementary learning resource during the development of this project.

They were used for:

Clarifying the behavior and purpose of certain standard C library functions.
Explaining programming concepts such as pointers, memory allocation, and linked lists.
Helping understand compiler errors and creating edge cases for debuging.
Reviewing documentation structure and improving the clarity of explanations.

AI-generated suggestions were treated as learning references. The implementation, testing, and final validation of the functions were carried out by me.

<br>

<h2>Author</h2>
    42 Login: pde-lemo
