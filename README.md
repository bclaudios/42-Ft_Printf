# 42 - Printf
[Algorithm Branch] First Project - Recoding printf() function with our libft.
## Subject
Printf [subject](./ft_printf.en.pdf)
## Grade
112/100 ✅ (03-01-2019)
## Required features
- Use only `write()`, `malloc()`, `free()`, `exit()` and stdargs functions.
- Manage `c`, `s`, `p` conversions.
- Manage `d`, `i`, `o`, `u`, `x`, `X` conversions with `hh`, `h`, `l`, `ll` flags.
- Manage `f` conversion with `l`, `L` flags.
- Manage `#`, `0`, `-`, `+` flags.
= Manage precision.
## Bonus features
- Use `*` to choose in the arguments the width, the left/right justification and the precision.
- Manage `intmax_t`, `uintmax_t` and `z` sizes for `i`, `d`, `o`, `u`, `x`, `b` conversions.
- Manage `ssize_t`, `size_t` and `j` sizes for `i`, `d`, `o`, `u`, `x`, `b` conversions.
- Binary conversion with `%b`.
- Manage `0` flag for `s` type.
- Manage `U` types.
- Manage file descriptor selection.
- Text coloration.
## Usage
```
make ex   // Compile the library with the main.c file inside the /tests folder.
./Printf  // Execute the main.c file inside the /tests folder. 

MAKEFILE RULES
make          // Compile the library
make clean    // Delete all .o files
make fclean   // Delete all .o files, the compiled library and software
make re       // make fclean && make
```
