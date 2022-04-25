NAME		=	fixed

CPP			=	c++
SRCS		=	Animal.cpp		\
				Cat.cpp \
                Dog.cpp\
                WrongAnimal.cpp\
                WrongCat.cpp\
                main.cpp		\

HEAD		=	Animal.hpp \
				Cat.hpp \
				Dog.hpp\
				WrongAnimal.hpp\
				WrongCat.hpp\


FLAGS		=	-Wall -Wextra -Werror -std=c++98

OBJS		=	$(SRCS:.cpp=.o)

$(NAME):	$(OBJS) $(HEAD) Makefile
			$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

%.o:		%.cpp $(HEAD)
			$(CPP) $(FLAGS) -c $<

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re