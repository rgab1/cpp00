NAME = megaphone
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -MMD -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

DEPENDENCIES = $(OBJ:.o=.d)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -o $@

clean :
	rm -f $(OBJ)
	rm -f $(DEPENDENCIES)

fclean : clean
	rm -f $(NAME)

re : fclean all

-include $(DEPENDENCIES)

.PHONY: all re clean fclean
