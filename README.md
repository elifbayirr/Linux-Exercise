# Linux-Exercise
 Write a C program that would constantly watch all processes (say once every second), and if it encountered an editor, it would kill it immediately
 
 C program using ordinary anonymous pipes in which one process continuously inputs a
string (i.e., a character array) from the user via the keyboard, sends the string to the second
process, and the second process reverses the characters in the string message received, and sends
the reversed string back to the first process, i.e., echoes back in reverse form. For example, if the
first process sends the string “Hello”, the second process will send back the string “olleH”.

The first process should print whatever it received from the second process to the console. This
process should continue until the user types -1 to indicate that the operation is over. Your
processes should exit gracefully, meaning that the second process should exit first, and the first
process should wait for the second one to finish before it exits/returns itself
