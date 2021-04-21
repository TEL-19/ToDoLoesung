CC := g++
CFLAGS := -Wall -g -std=c++17
TARGET := todo.out
SRC_DIR := ./src
OBJ_DIR := ./objs

SRCS := $(wildcard $(SRC_DIR)/*.cpp)
# $(patsubst %.cpp,%.o,$(SRCS)): substitute all ".cpp" file name strings to ".o" file name strings
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

run: $(TARGET)
	./$(TARGET)

.PHONY: clean

clean:
	rm -rf $(TARGET) $(OBJ_DIR)/*.o