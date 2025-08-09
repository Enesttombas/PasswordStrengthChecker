# 🔐 Password Strength Checker

A simple C program that checks the strength of a password based on:
- Length
- Uppercase letters
- Lowercase letters
- Numbers
- Special characters

## 📌 Features
- Prevents buffer overflow by limiting input length (`%49s` in `scanf`)
- Analyzes password for different character types
- Gives a **strength rating**: Weak ❌, Medium ⚠️, or Strong ✅

Enter your password: MyP@ssw0rd
Password strength: Strong ✅

📚 What I Learned
How to use strlen() to get string length

How to check if a character is uppercase (isupper), lowercase (islower), or a digit (isdigit)

How to avoid buffer overflow using scanf with a maximum width

Basic password validation logic

✍️ Author's Note
This project was developed by me as a programming exercise.
I used AI tools for time-saving purposes only, such as getting quick explanations and improving code readability.
All coding decisions, logic, and implementation were done by myself, and I fully understand how the program works.
