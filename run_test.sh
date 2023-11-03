#!/usr/bin/zsh
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/$1 $2 -o bin/$3
