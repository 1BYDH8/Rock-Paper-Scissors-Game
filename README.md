# Rock-Paper-Scissors-Game
A simple command-line Rock-Paper-Scissors game implemented in C++. This project demonstrates basic C++ programming skills such as input/output, control flow, and random number generation.

## Features
- Play against the computer in a classic Rock-Paper-Scissors game.
- The computer randomly selects its move.
- Tracks and displays the result of each round: Win, Lose, or Draw.
- User-friendly text-based interface.

## How to Play
- The player will input their choice (Rock, Paper, or Scissors).
- The computer will randomly select its choice.
- The game will display the result (Win, Lose, or Draw) based on the rules:
    - Rock beats Scissors
    - Scissors beats Paper
    - Paper beats Rock

## Rules of the Game
Rock defeats Scissors.
Scissors defeats Paper.
Paper defeats Rock.

## Project Structure
`main.cpp` - Contains the main logic of the game.
`README.md` - Documentation file for the project.

## Getting Started
**Prerequisites**
To run this program, you will need:
- A C++ compiler (e.g., g++).

**Compilation and Execution**
1. Clone the repository:

```bash
Copy code
git clone https://github.com/yourusername/Rock-Paper-Scissors-Game.git
cd Rock-Paper-Scissors-Game
```
2. Compile the program:

```bash
g++ rps.cpp -o rps
```
3.Run the game:

```bash
./rps
```

**Example Gameplay**
```yaml
                        -------------------------------------------------
                                 Welcome to Rock, Paper and Scissors Game
                        -------------------------------------------------
                                 Note:
                                         r - Rock
                                         p - Paper
                                         s - Scissor
                                         q - Quit
                        
                        -------------------------------------------------
                        Enter your choice: r
                        Computer Choose:Scissor
                        Your Choice is :Rock
                        You won! Hurray
                        Do you want to Play Again?
                        Note: Press 'q' to exit! Press Anything to continue: q
                        Quitting Game
                        Come Back Later
                        Thanks For Playing
                        --------------------------------------------------
```

## Contributing
Feel free to fork this repository and make changes. Contributions are welcome!

1. Fork it!
2. Create your feature branch: git checkout -b my-new-feature
3. Commit your changes: git commit -m 'Add some feature'
4. Push to the branch: git push origin my-new-feature
5. Submit a pull request