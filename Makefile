NAME: libft.a

SRC:

OBJ: %.o %.c

CFLAGS: -Wall -Wextra -Werror

all:

clean: #remove all temp generated fils
	rm -rf

fclean:
	#launch clean plus binary made with make all

re:
	#like make fclean followed by make all