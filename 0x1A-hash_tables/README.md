# Project on Hash Tables

## General
* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

## Requirements
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called hash_tables.h
* Don’t forget to push your header file
* All your header files should be include guarded

## Tasks :heavy_check_mark:
This tasks involves the following files, functions and programs:

| Filename | Description |
| -------- | ----------- |
| `0-hash_table_create.c` | Function that creates a hash table |
| `1-djb2.c` | Function that executes the djb2 algorithm |
| `2-key_index.c` | Function that returns the index of a key |
| `3-hash_table.c` | Function that adds an element to the hash table |
| `4-hash_table_get.c` | Function that retrieves a value associated with a key |
| `5-hash_table_print.c` | Function that prints a hash table |
| `6-hash_table_delete.c` | Function that deletes a hash table |
| `100-sorted_hash_table.c` | C file with some functions that implements a hash table with a sorted linked list |
