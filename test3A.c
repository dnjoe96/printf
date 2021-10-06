#include <stdio.h> 
#include <stdarg.h>				

/**
 * main - Entry point
 * _printf - printf function
 * @convert - Convert integer number into octal, hex, etc. 
 * Return: Always 0
 */
int _printf(const char *,...); 			
char* convert(unsigned int, int); 		

int main() 
{ 
	_printf(" \tWWW.F%cRMCO\nDES.COM %s %d     t\n", 'O', "Yeah", 9); 
	
	return 0;
}

void print_char(char c)
{
	putchar(c);
}

int print_str(char *s)
{
	if (s == NULL)
		return (0);
	
	while(*s)
	{
		putchar(*s);
		s++;
	}
	return (1);
}
int _printf(const char* format,...) 
{ 
	const char *traverse;
	
/**
 * @lst: Intitialize Myprintf's arguments  
 */
	va_list list; 
	va_start(list, format); 
	
	for(traverse = format; *traverse != '\0'; traverse++) 
	{
		while( *traverse != '%' ) 
		{
			if (*traverse == '\0')
			{	
				return (0);
			}
			putchar(*traverse);
			traverse++; 
		} 
		traverse++; 
		
/**
 * @lst: fetche and execute arguments
 */
		switch(*traverse) 
		{ 
		case 'c':
    			print_char(va_arg(list, int)); 
    			break;
    		case 'i':
    			printf("%i", va_arg(list, int)); 
    			break;
    		case 'd':
    			printf("%d", va_arg(list, int)); 
    			break;
    		case 'b':
    
    			break;
    		case 's':
    			print_str(va_arg(list, char*)); 
    			break;
    		case 'u':
    			printf("%d", va_arg(list, int));
    			break;
    		case 'o':
    			printf("%d", va_arg(list, int)); 
    			break;
    		case 'x':
    			printf("%d", va_arg(list, int)); 
    			break;
    		case 'X':
    			printf("%d", va_arg(list, int)); 
    			break;
    		default:
    			break;
		}	
	}
	
/**
 * @lst: List of closing arguments
 */
	va_end(list);

	return (0);	
} 

char *convert(unsigned int num, int base) 
{ 
	static char Representation[]= "0123456789ABCDEF";
	static char buffer[50]; 
	char *ptr; 
	
	ptr = &buffer[49]; 
	*ptr = '\0'; 
	
	do 
	{ 
		*--ptr = Representation[num%base]; 
		num /= base; 
	}while(num != 0); 
	
	return(ptr); 
}
