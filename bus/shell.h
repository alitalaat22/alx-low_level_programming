#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL
#define _XOPEN_SOURCE 700

/* Library Dependencies */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>

/* Path Structure */
/**
 * struct path - path node struct
 * @dir: string containing directory
 * @next: pointer to next node.
 */
typedef struct path
{
	char *dir;
	struct path *next;
} path_t;

/* Global Variables */
extern char **environ;
int line_num;
path_t *main_path;
path_t *env;

/* String Helper Functions */
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *_strncpy2(char *dest, char *src, int n);
char *_itoa(int num);

/*Memory Helper Functions*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/* Shell Loop Functions */
char *read_line(void);
char **tokenize(char *buffer, char *delim);
int execute(char **args, char *program);
void loop(char *program);

/* Tokenize Functions*/
char *_strtok(char *src, const char *delim);
int word_count(char *s);

/* PATH Functions */
char *_getenv(char *name);
path_t *make_path(void);
char *check_path(path_t *head, char *command);
char *path_concat(char *s1, char *s2);
path_t *_environ(void);

/* Memory Functions */
void free_path(path_t *head);
void free_env(path_t *head);

/* Builtin Functions */
int check_builtin(char **args, char *line);
void hsh_exit(char **args, char *line);
void print_env(void);
void _setenv(char *name, char *value);

/* Error Handling */
void __error(char **args, char *program, int code);

#endif /* SIMPLE_SHELL */