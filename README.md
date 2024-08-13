# lab assignment 
- NAME: soumyajit khan
- ROLL NO.: 30001223019
- REGI NO.: 233001010493
- SEMESTER: 2ND
- DEPARTMENT: BCA


# Simple Calculator Program in C

This is a simple calculator program written in C that can perform basic arithmetic operations like addition, subtraction, multiplication, and division.

## How It Works

1. **User Input:**
   - The program first asks the user to input an arithmetic operator (`+`, `-`, `*`, or `/`).
   - It then asks for two numbers (operands) to perform the operation on.

2. **Calculation:**
   - The program uses a `switch` statement to determine which operation to perform based on the operator provided.
   - If the user inputs a division operator, the program checks if the second operand is zero to avoid division by zero errors.

3. **Output:**
   - The program outputs the result of the operation.
   - If an invalid operator is entered, an error message is displayed.

## How to Compile and Run

### Prerequisites
- A C compiler like `gcc`.

### Compilation
Use the following command to compile the program:

```bash
gcc -o calculator calculator.c
