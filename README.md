
Formal Verification of C Functions Using Frama-C
Author: Andrés Felipe Eusse Chavarría
File: practica3.c

This project aims to formally analyze a C function using the Frama-C tool.

Requirements:
- Ubuntu 24.04 (used via WSL on Windows 11)
- GCC 13.3.0
- Frama-C 30.0 (Zinc)

To run the analysis:

1. Save the source code in a file named practica3.c
2. Open the terminal and navigate to the file directory
3. Run one of the following commands:

   frama-c -wp -rte practica3.c

   or

   frama-c-gui -wp -rte practica3.c

4. Frama-C will verify if the ACSL contract conditions are satisfied.

The contract specifies that:
- The pointers must be valid
- Values must be within safe ranges to avoid overflow
- An initial algebraic condition must hold
- After modifying the values, their product must be 6

The code has been successfully verified.

