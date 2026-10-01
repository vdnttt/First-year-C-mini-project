# Number Guessing Game

A simple **Number Guessing Game written in C**.

The program randomly generates a number between **1 and 100**, and the player has up to **10 attempts** to guess it. After each incorrect guess, the program provides a hint based on how close the guess is to the target number.

## Features

- Random number generation from 1 to 100
- Maximum of 10 attempts
- "Very hot", "warm", and "cold" proximity hints
- "Guess higher" / "guess lower" directional hints
- Displays the number of attempts when the player wins
- Reveals the target number when the player runs out of attempts

## How It Works

1. The program seeds the random number generator using the current time.
2. A random number between 1 and 100 is generated.
3. The player enters a guess.
4. The program calculates the absolute difference between the guess and the target.
5. If the guess is incorrect, a proximity hint is displayed:
   - **Very hot:** difference is less than 5
   - **Warm:** difference is less than 15
   - **Cold:** difference is 15 or more
6. The program also tells the player whether to guess higher or lower.
7. The game ends when the number is guessed or 10 attempts are reached.

## Requirements

- A C compiler such as GCC, Clang, or MinGW
- A terminal / command prompt

## Compilation and Usage

### Linux / macOS

```bash
gcc Number_Guessing_Game.c -o number_guessing_game
./number_guessing_game
```

### Windows (MinGW)

```bash
gcc Number_Guessing_Game.c -o number_guessing_game.exe
number_guessing_game.exe
```

## Project Structure

```text
number-guessing-game/
├── Number_Guessing_Game.c
├── README.md
├── .gitignore
└── LICENSE
```

## Example

```text
===NUMBER GUESSING GAME===
You have to guess within 10 attempts.

HINT SYSTEM
very hot --> very close
warm --> somewhat close
cold --> far away
Let's begin!

Enter a guess (between 1 to 100): 50
warm!
guess higher!

Enter a guess (between 1 to 100): 73
very hot!
guess lower!

Enter a guess (between 1 to 100): 70
You got it in 3 attempts!
```

## Notes

The game uses `rand()` with `srand(time(NULL))` to generate a different target number between runs.

The current implementation expects the player to enter integer values.

## License

This project is released under the MIT License. See [LICENSE](LICENSE).
