all:
	c++ -Wall -Wextra -Werror PhoneBook.class.cpp main.cpp -o pb

debug:
	c++ PhoneBook.class.cpp utils.cpp main.cpp -o pb

exec: all
	./pb

clean:
	rm pb

PHONY:
	clean