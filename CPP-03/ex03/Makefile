CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -Wno-shadow

NAME = ClapTrap
SRCS = main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp \
	DiamondTrap.cpp \

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