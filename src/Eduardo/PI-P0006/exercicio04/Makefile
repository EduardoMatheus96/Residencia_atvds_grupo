CXX = g++
CXXFLAGS = -std=c++2a -lncurses
SRC_DIR = ../exercicio04
BUILD_DIR = outputs
TARGET = exercicio04

SOURCES = $(SRC_DIR)/main.cpp $(SRC_DIR)/parte01/parte01.cpp $(SRC_DIR)/parte02/parte02.cpp $(SRC_DIR)/parte03/parte03.cpp $(SRC_DIR)/funcoes/funcoes.cpp
OBJECTS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SOURCES))

$(BUILD_DIR)/$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

.PHONY: clean

clean:
	rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/$(TARGET)
