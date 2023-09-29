# Nome do seu programa final
TARGET = meu_programa

# Compilador
CXX = g++

# Flags de compilação
CXXFLAGS = -std=c++2a

# Diretórios e arquivos
SRC_DIR = ../PI-P014
EXERCICIOS_DIR = ./exercicios
HEADERS_DIR = $(EXERCICIOS_DIR)
BUILD_DIR = output
OBJ_DIR = $(BUILD_DIR)

# Lista de exercícios
EXERCICIOS = $(wildcard $(EXERCICIOS_DIR)/*.cpp)
HEADERS = $(wildcard $(HEADERS_DIR)/*.hpp)
OBJETOS = $(patsubst $(EXERCICIOS_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(EXERCICIOS))

# Dependências
DEPENDENCIAS = $(HEADERS)

# Regras
.PHONY: all clean

all: $(BUILD_DIR) $(OBJ_DIR) $(TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(EXERCICIOS_DIR)/%.cpp $(DEPENDENCIAS)
	$(CXX) $(CXXFLAGS) -I$(HEADERS_DIR) -c $< -o $@

$(TARGET): $(OBJETOS) $(SRC_DIR)/main.cpp
	$(CXX) $(CXXFLAGS) -I$(HEADERS_DIR) $(OBJETOS) $(SRC_DIR)/main.cpp -o $@

clean:
	rm -rf $(BUILD_DIR) $(TARGET)

run: $(TARGET)
	./$(TARGET)
