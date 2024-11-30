#include "game.hpp"

Game::Game() : current_marker('X'), current_player(1) {}

void Game::Start() {
    int slot;
    bool game_over = false;

    std::cout << "Tic-Tac-Toe Game Started!\n";
    board.DrawBoard();

    while (!game_over) {
        std::cout << "Player " << current_player << " (" << current_marker << "), enter your slot (1-9): ";
        std::cin >> slot;

        while (!board.PlaceMarker(slot, current_marker)) {
            std::cout << "Invalid slot. Try again: ";
            std::cin >> slot;
        }

        board.DrawBoard();

        if (board.CheckWinner()) {
            AnnounceWinner();
            game_over = true;
        } else if (slot == 9) {
            std::cout << "It's a draw!\n";
            game_over = true;
        } else {
            SwapPlayer();
        }
    }
}

void Game::SwapPlayer() {
    current_player = (current_player == 1) ? 2 : 1;
    current_marker = (current_marker == 'X') ? 'O' : 'X';
}

void Game::AnnounceWinner() {
    std::cout << "Player " << current_player << " (" << current_marker << ") wins the game!\n";
}
