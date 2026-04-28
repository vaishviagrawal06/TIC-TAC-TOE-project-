🎮 Tic-Tac-Toe (Player vs Computer) – C++
<p align="center"> <img src="https://img.shields.io/badge/Language-C++-blue?style=for-the-badge&logo=c%2B%2B"> <img src="https://img.shields.io/badge/Type-Console%20Game-green?style=for-the-badge"> <img src="https://img.shields.io/badge/Level-Beginner%20Friendly-orange?style=for-the-badge"> <img src="https://img.shields.io/badge/AI-Basic%20Logic-purple?style=for-the-badge"> <img src="https://img.shields.io/badge/License-MIT-red?style=for-the-badge"> </p>
✨ Overview

A classic Tic-Tac-Toe game built in C++, where you play against a computer 🤖 that makes smart decisions.

This project demonstrates:

Clean C++ structure
Game logic design
Basic AI implementation
🧠 AI Strategy (How Computer Thinks)

The computer follows a priority-based algorithm:

1. Win if possible 🏆
2. Block the player 🚫
3. Take center (5) 🎯
4. Take corners (1,3,7,9) 🔲
5. Take any empty spot 📍
🎮 Game Preview
1 | 2 | 3
---------
4 | 5 | 6
---------
7 | 8 | 9
🚀 Features

✔ Player vs Computer mode
✔ Smart move selection
✔ Choose who starts first
✔ Input validation
✔ Real-time board updates
✔ Win / Draw detection

🛠️ Tech Stack
Category	Details
Language	C++
Type	Console Application
Concepts	Arrays, Functions, Logic Building
📂 Project Structure
📁 Tic-Tac-Toe
 ┣ 📜 main.cpp
 ┗ 📜 README.md
▶️ Getting Started
🔧 Compile
g++ main.cpp -o tic
▶️ Run
./tic
🎯 How to Play
Select your marker (X / O)
Choose who starts:
Player 👤
Computer 🤖
Enter position (1–9)
Try to beat the AI 😎
🔍 Core Functions
Function	Description
drawBoard()	Prints the board
placeMarker()	Places move
winner()	Checks winner
swapPlayerAndMarker()	Switch turn
isWinningMove()	Simulates winning
computerMove()	AI logic
game()	Main controller
📈 Future Improvements

✨ Add Minimax AI (Unbeatable mode)
✨ GUI version (SFML / Qt)
✨ Multiplayer mode
✨ Score tracking
✨ Sound effects

🤝 Contributing

Contributions are welcome!

1. Fork the repo
2. Create a new branch
3. Make changes
4. Submit PR
📜 License

Licensed under the MIT License

👨‍💻 Author

Vaishvi Agrawal

<p align="center"> ⭐ If you like this project, don't forget to star the repo! </p>
