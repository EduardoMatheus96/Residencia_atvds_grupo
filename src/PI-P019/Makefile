# Nome do seu programa final
TARGET = item_set

# Compilador
CXX = g++

# Flags de compilação
CXXFLAGS = -std=c++2a

# Diretórios e arquivos
SRC_DIR = ../PI-P019
CLASSES_DIR = classes
HEADERS_DIR = $(CLASSES_DIR)
BUILD_DIR = output
OBJ_DIR = $(BUILD_DIR)

# Lista de exercícios
CLASSES = $(wildcard $(CLASSES_DIR)/*.cpp)
HEADERS = $(wildcard $(HEADERS_DIR)/*.hpp)
OBJETOS = $(patsubst $(CLASSES_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(CLASSES))

# Dependências
DEPENDENCIAS = $(HEADERS)

# Regras
.PHONY: all clean

all: $(BUILD_DIR) $(OBJ_DIR) $(TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(CLASSES_DIR)/%.cpp $(DEPENDENCIAS)
	$(CXX) $(CXXFLAGS) -I$(HEADERS_DIR) -c $< -o $@

$(TARGET): $(OBJETOS) $(SRC_DIR)/main.cpp
	$(CXX) $(CXXFLAGS) -I$(HEADERS_DIR) $(OBJETOS) $(SRC_DIR)/main.cpp -o $@

clean:
	rm -rf $(BUILD_DIR) $(TARGET)

run: $(TARGET)
	./$(TARGET)
