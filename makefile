# Variables
CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = petstore

# Source files
SRCS = PetClass.cpp CustomerClass.cpp PetStoreClass.cpp Driver.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target to build the program
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile each .cpp file into .o file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target to remove compiled files
clean:
	rm -f $(OBJS) $(TARGET)
