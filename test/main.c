#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
	/**char *str = "Kenny";
	 */
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

	_printf("%c", 'S');
	printf("%c", 'S');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	_printf("%s", "This sentence is retrieved from va_args!\n");
	printf("%s", "This sentence is retrieved from va_args!\n");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	/**_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	*/
	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	_printf("%%");
	printf("%%");
	_printf("Should print a single percent sign: %%\n");
	printf("Should print a single percent sign: %%\n");
	_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	_printf("css%ccs%scscscs", 'T', "Test");
	printf("css%ccs%scscscs", 'T', "Test");
	/**_printf("man gcc:\n%s", str);
	printf("man gcc:\n%s", str);
	*/
	printf("========================\n");
	_printf(NULL);
	printf("========================\n");
	printf(NULL);
	printf("========================\n");
	_printf("%c", '\0');
	printf("========================\n");
	printf("%c", '\0');
	printf("========================\n");
	_printf("%");
	printf("========================\n");
	printf("%");
	printf("========================\n");
	_printf("%!\n");
	printf("========================\n");
	printf("%!\n");
	printf("========================\n");
	_printf("%K\n");
	printf("========================\n");
	printf("%K\n");
	printf("========================\n");
	_printf("%r", "\nThis sentence is retrieved from va_args!");
	_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");
	_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "");
	_printf("%R", "Guvf fragrapr vf ergevrirq sebz in_netf!\n");
	_printf("Complete the sentence: You %R nothing, Jon Snow.\n", "xabj");
	_printf("Complete the sentence: You %R nothing, Jon Snow.\n", "");
    return (0);
}

