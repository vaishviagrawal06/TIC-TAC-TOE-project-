# 🎮 Tic-Tac-Toe (Player vs Computer) – C++

> A smart console-based Tic-Tac-Toe game with basic AI logic 🤖

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++-blue?style=for-the-badge&logo=c%2B%2B" alt="C++">
  <img src="https://img.shields.io/badge/Type-Console%20Game-green?style=for-the-badge" alt="Console Game">
  <img src="https://img.shields.io/badge/Level-Beginner%20Friendly-orange?style=for-the-badge" alt="Beginner Friendly">
  <img src="https://img.shields.io/badge/AI-Basic%20Logic-purple?style=for-the-badge" alt="AI Basic Logic">
  <img src="https://img.shields.io/badge/License-MIT-red?style=for-the-badge" alt="MIT License">
</p>

---

## ✨ Overview

A **classic Tic-Tac-Toe game** built in **C++**, where you play against a computer 🤖 that makes smart decisions.

### This project demonstrates:
- Clean C++ structure  
- Game logic design  
- Basic AI implementation  

---

## 🧠 AI Strategy (How Computer Thinks)

The computer follows a **priority-based algorithm**:

```text
1. Win if possible 🏆
2. Block the player 🚫
3. Take center (5) 🎯
4. Take corners (1, 3, 7, 9) 🔲
5. Take any empty spot 📍
```
🎮 Game PreviewPlaintext
 1 | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9
🚀 Features✔️ Player vs Computer mode✔️ Smart move selection✔️ Choose who starts first✔️ Input validation✔️ Real-time board updates✔️ Win / Draw detection🛠️ Tech StackCategoryDetailsLanguageC++TypeConsole ApplicationConceptsArrays, Functions, Logic Building📂 Project StructurePlaintext📁 Tic-Tac-Toe
 ┣ 📜 main.cpp
 ┗ 📜 README.md
▶️ Getting Started🔧 CompileBashg++ main.cpp -o tic
▶️ RunOn Linux / macOS:Bash./tic
On Windows:DOStic.exe
🎯 How to PlaySelect your marker (X or O).Choose who starts:Player 👤Computer 🤖Enter position (1–9).Try to beat the AI! 😎🔍 Core FunctionsFunctionDescriptiondrawBoard()Prints the boardplaceMarker()Places movewinner()Checks winnerswapPlayerAndMarker()Switch turnisWinningMove()Simulates winningcomputerMove()AI logicgame()Main controller📈 Future Improvements[ ] ✨ Add Minimax AI (Unbeatable mode)[ ] ✨ GUI version (SFML / Qt)[ ] ✨ Multiplayer mode[ ] ✨ Score tracking[ ] ✨ Sound effects🤝 ContributingContributions are welcome!Fork the repoCreate a new branchMake changesSubmit PR📜 LicenseLicensed under the MIT License👨‍💻 AuthorVaishvi Agrawal📌 C++ Developer | Problem Solver
