#ifndef _MAIN_H_
#define _MAIN_H_

#define DELIM " \n\t\a\r:"
#include <string.h>

char **__environ;
int count_token(char *buffer, char *delim);
char **tokenize_line(char *buffer, char *delim, int token_no);
void exec_argv(char **argv);
char *_getenv(const char *name);
void print_PATH(char *envVar, char *delim);

struct builtins
{
    char *command;
    void (*func)(char **);
};


typedef struct aliases{
        char *alias_name;
        char *real_name;
    }alias;


int builtin_size();
void shell_exit(char **args);
void shell_cd(char **args);
void shell_help(char **args);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(const char *s);
char *_strcat(char *dest, char *src);
int _strncmp(const char *s1, const char *s2, size_t n);
int exec_builtin_commands(char **argv);
char **tokenize_PATH(char *envVar, char *delim);
char *find_path(char **pathTokens, char **argv);
char *append_to_directory(char *directory, char ** argv, char *character);
void prompt();
void ctrl_C(int signum);
int print(char *var, int fd);

#endif
