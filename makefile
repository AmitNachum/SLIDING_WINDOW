CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror
SRC = main_sliding.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = sliding_example

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET) -lm


%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


.PHONY: clean

valgrind:
	make && valgrind ./$(TARGET)

clean:
	rm $(OBJ) $(TARGET)


