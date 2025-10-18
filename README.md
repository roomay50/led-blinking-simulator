# 💡 LED Simulator in C

This project simulates basic and advanced LED blinking patterns using the C programming language.  
It is part of a self-directed embedded systems learning roadmap — designed to strengthen control flow, modular programming, and timing logic **without requiring a physical microcontroller**.

---

## 🧩 Project Structure

| File          | Description                                                                                                       |
| ------------- | ----------------------------------------------------------------------------------------------------------------- |
| **main.c**    | Simulates a basic LED ON/OFF blink using user input for state and number of blinks.                               |
| **pattern.c** | Implements two complex LED patterns — **SOS (Morse code distress signal)** and **Knight Rider** sweeping pattern. |

---

## ⚙️ Features

- Modular LED simulation using functions
- Pattern selection via user input
- Real-time delay simulation using `Sleep()` (Windows API)
- CLI-based interaction loop
- Clean, readable code structure suitable for beginners in embedded C

---

## 🖥️ How to Run

### **Compile and Run (Windows)**

```bash
# Basic LED Blink Simulation
gcc main.c -o main
./main

# Pattern Simulation (SOS and Knight Rider)
gcc pattern.c -o pattern
./pattern

If you’re using Linux or macOS, replace Sleep() with usleep() from <unistd.h> and adjust delays accordingly.
```

##🧠 Learning Goals

Practice C programming fundamentals (loops, conditionals, functions)

Learn modular design by separating logic into multiple files

Simulate real embedded timing behavior

Gain hands-on understanding of interactive CLI programs

##🚀 Next Steps / Future Improvements

Add patterns.h header to share pattern declarations

Add Makefile for easier compilation

Implement additional LED effects (e.g., heartbeat, fading)

Port to microcontroller platforms (e.g., Arduino, STM32) in later stages

##🧑‍💻 Author

Developed as part of a 10-week embedded systems self-learning roadmap.
Built and tested purely in C, using standard I/O and Windows timing functions.

⚡ This project marks the foundation of my journey into embedded systems programming.

