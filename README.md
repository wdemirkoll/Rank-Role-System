# Rank-Role System

## Short Description 💬
Console-based rank and XP system — a simple text-based program implemented in C++. The player enters a nickname and gains XP to progress through a rank system with multiple ranks from Iron → Godlike. The project demonstrates basic game logic, progression, and state management using C++.

## Announcement 📢
This project is written using C++17.

## Features ✅
- Enter your nickname and gain XP 🎮  
- Rank system with **40 ranks** from Iron to Godlike 📈  
- Gain XP by choosing actions  
- Automatic rank updates based on XP thresholds  
- Displays player statistics: Nickname, Rank, Total XP 📊  
- Simple console interface with choices to gain XP or exit  

## Example usage / sample session 💡
Below is an example interaction with the program (user input shown after prompts):

```text
Welcome, enter your nickname: PlayerOne

----------------
Nickname: PlayerOne
Rank: Iron
Total XP: 0
----------------
Enter 0 to exit
or enter 1 to gain XP:
1
----------------
Nickname: PlayerOne
Rank: Iron
Total XP: 250
----------------
Enter 0 to exit
or enter 1 to gain XP:
1
----------------
Nickname: PlayerOne
Rank: Iron+
Total XP: 500
----------------
Enter 0 to exit
or enter 1 to gain XP:
0
```

## Notes and limitations ⚠️
- The current implementation uses **global variables** and simple control flow.  
- Input validation is minimal; non-numeric input may cause unexpected behavior.  
- XP must be gained to progress through ranks.  
- The program is single-player and does not save progress between sessions.  

## Author 👤
wdemirkoll — GitHub: [@wdemirkoll](https://github.com/wdemirkoll)

📅 January 2026
