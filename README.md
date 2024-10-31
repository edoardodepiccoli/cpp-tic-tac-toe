Here's an improved version of the README:

---

# C++ CLI Tic-Tac-Toe

A simple command-line Tic-Tac-Toe game built in C++ for two players. The game operates within the terminal, allowing two users to play interactively in real-time. The structure of the code is straightforward and organized into three main classes for clarity and functionality:

### Project Structure

- **Game Class**  
  Manages the overall game flow, including turn progression, game initialization, and determining when the game ends.

- **Player Class**  
  Handles player inputs, prompts each player for their moves, and ensures valid entries.

- **Board Class**  
  Maintains the state of the board, updates it based on player moves, and checks for winning conditions after each turn.

### How to Run

1. **Clone the repository**:
   ```bash
   git clone <https://github.com/edoardodepiccoli/cpp-tic-tac-toe.git>
   ```

2. **Navigate to the project directory**:
   ```bash
   cd <folder name>
   ```

3. **Compile the code**:
   ```bash
   clang++ -o app main.cpp game.cpp player.cpp board.cpp
   ```

4. **Run the game**:
   ```bash
   ./app
   ```

Enjoy a quick game of Tic-Tac-Toe in your terminal!

