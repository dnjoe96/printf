# _printf

This is a project to implement the functions of the C `printf()` function. 


### Steps to compile and use

#### main file 
```c
#include "main.h"

int main(void)
{
    _printf("Hello, World!");

    return (0);
}

```
#### Current content of the project
`main.h`
`man_3_printf*`

`print_char.c`
`print_d.c`

`_printf.c`
`print_rev.c`

`print_rot13.c`
`print_str.c`

```bash
# gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o print
# ./print
```

#### output
```sh
Hello, World
```

The project can be expanded to accommodate more functions to cover more format specifiers in the steps below

- create your .c file
- write your function of type `int print_xx(va_list list)`
- The function returns the number of characters printed to stdout.
- Save the file
- Add the function prototype in `main.h` file
- Add into the argument list `{'specifier character': print_xx}`
- compile and run.

### More Use cases 
##### Inside the `main.c` file
```c 
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
        /**char *str = "Kenny";
         */
    len = _printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    _printf("Unknown:[%r]\n");
    return (0);

}
```
##### Compile and Run
```sh
# gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o print
# ./print
```

##### Output
```sh
Let's try to printf a simple sentence.
Length:[39, 39]
Negative:[-762534]
Unsigned:[%u]
Unsigned octal:[%o]
Unsigned hexadecimal:[%x, %X]
Character:[H]
String:[I am a string !]
Address:[%p]
Percent:[%]
```

## Author
- [Aminat Omeniyi](https://github.com/Armynerh)
- [Joseph Emmanuel](https://github.com/dnjoe96) 

#### main.h
```c
int print_d(va_list list);
int print_rot13(va_list list);
int print_rev(va_list list);
int print_str(va_list list);
int print_char(va_list list);
int _printf(const char*, ...);
```

## License
[MIT](https://choosealicense.com/licenses/mit/)
