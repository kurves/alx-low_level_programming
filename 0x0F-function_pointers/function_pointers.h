#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

typedef void (*PrintName)(char *);
void print_name(char *name, void (*f)(char *));
#endif
