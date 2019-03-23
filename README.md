# *count-input*
* "count.c" takes a text file as input and counts the number of characters, words and lines, return three numbers <br>
* Assume input ASCII text of any length. <br>
* Every byte read from stdin counts as a character except `EOF`.
* Words are defined as contiguous sequences of letters (a through z, A through Z) and the
apostrophe ( ', value 39 decimal) separated by any character outside these ranges.
* Lines are defined as contiguous sequences of characters separated by newline
characters ('\n').
* Characters beyond the final newline character will not be included in the line count.

# *Example*
```
$ ./count < happy_prince.txt
```
"count.c" takes a txt file 'happy_prince.txt' <br>
Then counts and return the number of characters, words, and lines in the text file.
Output:  <br>
 
    19008 3540 174
