#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

typedef struct s_data
{
    

}           t_data;

typedef struct s_user
{
    char    *username;
    char    *password;
    char    *pinCode;
    float   *bilancio;
}           t_user;

typedef struct s_list
{
    t_user  *user;
    struct t_list  *next;
}          t_list;