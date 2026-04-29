# 🎮 Tic-Tac-Toe — Player vs Computer

> A slick, console-based Tic-Tac-Toe game built in C++ featuring a smart AI opponent that actually puts up a fight.

---

## ✨ Features

- 🧠 **Smart AI** — The computer thinks before it moves
- 🎯 **Choose your marker** — Play as X or O, your call
- 🚀 **Choose who goes first** — You or the Computer
- 🛡️ **AI that blocks your winning moves**
- ✅ **Input validation** — No crashes, no cheating
- 🖥️ **Clean board rendering** after every turn
- 🤝 **Draw detection** when the board fills up

---

## 🤖 How Smart is the AI?

The computer follows a strategic priority system:

| Priority | Action |
|----------|--------|
| 1️⃣ | **Win** — Takes the winning move immediately |
| 2️⃣ | **Block** — Stops you from winning |
| 3️⃣ | **Center** — Grabs slot 5 if available |
| 4️⃣ | **Corners** — Claims corners (1, 3, 7, 9) |
| 5️⃣ | **Anywhere** — Falls back to any free slot |

---

## 🛠️ How to Run

### ✅ Prerequisites
- Any C++ compiler — `g++`, `clang++`, or MSVC

### ▶️ Compile & Run

```bash
g++ tictactoe.cpp -o tictactoe
./tictactoe
```

> 💡 On Windows, use `tictactoe.exe` instead of `./tictactoe`

---

## 🕹️ How to Play
---TIC-TAC-TOE---
Player VS Computer
Choose X or O: X

1.Player
2.Computer
Enter choice: 1
Enter a number **(1–9)** to place your marker on the board:

```
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9
```

🏆 Get **3 in a row** — horizontally, vertically, or diagonally — to win!

---

## 📁 Project Structure
📦 TicTacToe
┗ 📄 tictactoe.cpp    → Complete single-file implementation
---

## 🧩 Game Flow
Start → Pick Marker → Pick Turn Order → Play → Win / Lose / Draw
---

## 🚀 Future Improvements (Ideas)

- [ ] 🔁 Play again without restarting
- [ ] 🌐 Two-player mode (local multiplayer)
- [ ] 🧠 Minimax algorithm for unbeatable AI
- [ ] 🎨 Colored terminal output

---

## 👩‍💻 Author
Vaishvi Agrawal

Crafted with 💙 and a lot of `cout` statements.

> *"The computer is smart. But you might be smarter. Maybe."* 😄


