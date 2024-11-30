# Lab 05: Creating and Using Libraries in C++

## Description
This project demonstrates the creation and usage of static libraries in C++ for a Tic-Tac-Toe game. The game uses two libraries:
1. `libboard.a` - Handles the game board.
2. `libgame.a` - Handles the game logic.

## How to Build
Run the following command to build the project:
```bash
make



# Tic-Tac-Toe Game

Acest proiect reprezintă implementarea unui joc de Tic-Tac-Toe folosind C++. Jocul este jucat pe un grid 3x3, iar scopul este ca un jucător să alinieze 3 marcaje de același tip (X sau O) într-o linie, coloană sau diagonală.

## Descriere

Proiectul include implementarea a două clase principale:

- **Board**: Reprezintă tabla de joc, gestionând plasarea marcajelor și verificarea câștigătorilor.
- **Game**: Logica jocului, care gestionează jucătorii, schimbarea acestora, și determină când jocul s-a terminat (fie prin câștig, fie prin remiză).

## Structura Fișierelor

1. **`board.hpp`**: Definirea clasei `Board`, care conține logica pentru gestionarea tablei de joc.
2. **`board.cpp`**: Implementarea metodele clasei `Board`.
3. **`game.hpp`**: Definirea clasei `Game`, care conține logica pentru gestionarea întregului joc.
4. **`game.cpp`**: Implementarea metodelor clasei `Game`.
5. **`main.cpp`**: Codul principal pentru rularea jocului, care creează un obiect `Game` și apelează funcția `Start()` pentru a începe jocul.
6. **`Makefile`**: Fișierul de construire care ajută la compilarea proiectului și gestionarea dependențelor.

## Instrucțiuni de Instalare

### 1. Clonarea Repozitorului

Pentru a clona proiectul pe mașina ta locală, folosește următoarea comandă:

```bash
git clone https://github.com/[username]/tic-tac-toe.git
