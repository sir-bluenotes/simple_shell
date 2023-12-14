#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

void prompt(void);
void paste(const char *str);
void _scanme(char *line, size_t size);
void nike(const char *line);

#endif