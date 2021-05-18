NAME	=	a.out
COMPILER=	clang++
FLAGS	=	-Wall -Wextra -Werror
SRC		=	Squad.cpp TacticalMarine.cpp AssaultTerminator.cpp main.cpp
INC		=	Squad.hpp TacticalMarine.hpp AssaultTerminator.hpp ISpaceMarine.hpp ISquad.hpp
OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(INC)
	$(COMPILER) $(FLAGS) -o $@ -c $<

$(NAME):  $(OBJ)
	$(COMPILER) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f */*.o
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
