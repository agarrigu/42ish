all: exe

exe: main.o math_utils.o int_utils.o str_utils.o put_utils.o
	gcc -Wall -Wextra -Werror main.o math_utils.o int_utils.o str_utils.o put_utils.o

main.o: main.c 
	gcc -Wall -Wextra -Werror -c main.c

math_utils.o: math_utils.c
	gcc -Wall -Wextra -Werror -c math_utils.c

int_utils.o: int_utils.c
	gcc -Wall -Wextra -Werror -c int_utils.c

str_utils.o: str_utils.c
	gcc -Wall -Wextra -Werror -c str_utils.c

put_utils.o: put_utils.c
	gcc -Wall -Wextra -Werror -c math_utils.c

clean:
	rm *.o
