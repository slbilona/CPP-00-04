CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Interface
SRCS = srcs/main.cpp \
	srcs/Ice.cpp \
	srcs/Cure.cpp \
	srcs/AMateria.cpp \
	srcs/Character.cpp \

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

re : clean all

git : clean
	git add ../../*
	git commit -m "$(shell date +'%d/%m/%Y %Hh%M')"
	git push

.PHONY : all clean re git