#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
int main(int __attribute__((__unused__)) argc, char *argv[]);
int main(int argc, char *argv[] __attribute__((unused)));
int main(int argc, char *argv[]);

#endif 
