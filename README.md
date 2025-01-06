# Glitch Pattern Checker 🚀

This program checks if a **glitch pattern** exists in a **video stream**. 🎥

## How It Works ⚙️
1. The program asks you to input:
   - A **video stream** (a string of data) 🔢.
   - A **glitch pattern** (a smaller sequence you're looking for inside the video stream) 🔍.
   
2. It then checks if the glitch pattern exists within the video stream.

3. The program prints:
   - `true` ✅ if the glitch pattern is found.
   - `false` ❌ if it is not found.

## Code Breakdown 💻
- **Input:** You provide two strings: the video stream and the glitch pattern.
- **Search:** The program uses the `find` function 🔎 to check if the glitch pattern is part of the video stream.
  - The `find` function searches for the glitch pattern inside the video stream. If it finds the pattern, it returns the position where the pattern starts. 📍
  - If the pattern is not found, the `find` function returns `string::npos`, which is a constant representing an invalid position, indicating that the pattern is not present in the string. ❌
- **Output:** The result is printed as `true` ✅ if the glitch pattern is found (i.e., `find` does not return `npos`), or `false` ❌ if it is not found (i.e., `find` returns `npos`).

## Example 🔧

**Input:**
Enter the video stream: abcdefgh Enter the glitch pattern: abc

**Output:**
true ✅

**Input:**
Enter the video stream: abcdefgh Enter the glitch pattern: xyz

**Output:**
false ❌


## Conclusion 🎉
This program is a simple way to search for a smaller sequence (glitch pattern) within a larger string (video stream), and demonstrates basic string handling in C++. 💡

