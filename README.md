# Tic-Tac-Toe (Player vs Computer) 🎮

A console-based Tic-Tac-Toe game written in C++ where you play against a smart computer opponent.

---

## Features

- Player vs Computer gameplay
- Choose your marker — X or O
- Choose who goes first — Player or Computer
- Smart computer AI that:
  - Wins when it can
  - Blocks the player from winning
  - Prefers center and corner positions
- Input validation for invalid or already-taken moves
- Clean board display after every move

---

## How to Run

### Prerequisites
- A C++ compiler (g++, clang++, MSVC, etc.)

### Steps

```bash
g++ tictactoe.cpp -o tictactoe
./tictactoe
```

---

## How to Play

1. Run the program
2. Choose your marker: **X** or **O**
3. Choose who starts first: **Player** or **Computer**
4. Enter a slot number (1–9) to place your marker
   1 | 2 | 3
   4 | 5 | 6
   7 | 8 | 9
5. The game ends when someone wins or all 9 slots are filled (draw)

---

## Computer AI Logic

The computer follows this priority order:

1. **Win** — Take a winning move if available
2. **Block** — Prevent the player from winning
3. **Center** — Take slot 5 if free
4. **Corners** — Take a corner (1, 3, 7, 9) if available
5. **Any** — Take any remaining free slot

---

## Project Structure
tictactoe.cpp   → Single-file implementation

---

## Example Output
---TIC-TAC-TOE---
Player VS Computer
Choose X or O: X
do you want to start the game:
1.Player
2.Computer
Enter choice: 1
---

## Author
Vaishvi A grawal

Made with ❤️ in C++
