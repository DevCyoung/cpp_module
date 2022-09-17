NAME = replace
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp\

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
	rm *.replace

re : fclean all