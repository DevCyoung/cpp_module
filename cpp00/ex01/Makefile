NAME = phonebook
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	PhoneBook.cpp\
		Contact.cpp\
		main.cpp\
	 
OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) -o $@ $^

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $^

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
