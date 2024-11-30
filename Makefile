# Compilator și opțiuni
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Directoare
INCLUDE_DIR = include
SRC_DIR = src
LIB_DIR = lib
APP_DIR = app

# Fișiere sursă și obiecte
BOARD_SRC = $(SRC_DIR)/board.cpp
GAME_SRC = $(SRC_DIR)/game.cpp
MAIN_SRC = $(APP_DIR)/main.cpp

BOARD_OBJ = $(BOARD_SRC:.cpp=.o)
GAME_OBJ = $(GAME_SRC:.cpp=.o)
MAIN_OBJ = $(MAIN_SRC:.cpp=.o)

STATIC_LIB = $(LIB_DIR)/libboard.a

# Executabil final
EXEC = TicTacToe

# Reguli de construire
all: $(STATIC_LIB) $(EXEC)

$(STATIC_LIB): $(BOARD_OBJ)
	mkdir -p $(LIB_DIR)
	ar rcs $@ $^

$(EXEC): $(GAME_OBJ) $(MAIN_OBJ) $(STATIC_LIB)
	$(CXX) $(CXXFLAGS) -o $@ $^ -I$(INCLUDE_DIR)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I$(INCLUDE_DIR)

clean:
	rm -f $(SRC_DIR)/*.o $(APP_DIR)/*.o $(EXEC) $(STATIC_LIB)
