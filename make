make:
    gcc -Wall -Wextra -Werror -c math_utils.c str_utils.c put_utils.c int_utils.c
    gcc *.o
