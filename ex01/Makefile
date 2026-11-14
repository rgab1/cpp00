NAME = phonebook 
CXX = c++
CXX_FLAGS = -Wall -Werror -Wextra -std=c++98
CPP_FLAGS = -MMD
INCLUDE = -I .

SRC_ROOT = Contact Phonebook main

SRC = $(addsuffix .cpp, $(SRC_ROOT))

OBJ = $(SRC:.cpp=.o)

DEPENDENCIES = $(OBJ:.o=.d)

all : $(NAME)

-include $(DEPENDENCIES)

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

.PHONY = all re clean fclean
