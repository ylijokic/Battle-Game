
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

LDFLAGS = -lboost_date_time

OBJS = Character.o Barbarian.o Blue_Men.o Harry_Potter.o Medusa.o Vampire.o Lineup.o Menu.o main.o

SRCS = Character.cpp Barbarian.cpp Blue_Men.cpp Harry_Potter.cpp Medusa.cpp Vampire.cpp Lineup.o Menu.cpp main.cpp

HEADERS = Character.hpp Barbarian.hpp Blue_Men.hpp Harry_Potter.hpp Medusa.hpp Vampire.hpp Lineup.hpp Menu.hpp 


matrix: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o Project4

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c ${@:.o=.cpp}
clean:
	rm *.o Project4 
