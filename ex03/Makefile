NAME = 04

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 


RM = rm -f

SRCS = main.cpp AMateria.cpp ice.cpp cure.cpp Character.cpp MateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re