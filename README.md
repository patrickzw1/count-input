# *count-input*
* This file of code will take a text file as input <br>
* Then it will count the character, word and lines as output. <br>
* Assume input ASCII text of any length. <br>
* Every byte read from stdin counts as a character except EOF.
* Words are defined as contiguous sequences of letters (a through z, A through Z) and the
apostrophe ( ', value 39 decimal) separated by any character outside these ranges.
* Lines are defined as contiguous sequences of characters separated by newline
characters ('\n').
* Characters beyond the final newline character will not be included in the line count.

# *Example*
$ ./count < happy_prince.txt
This will take a txt file called 'happy_prince.txt' <br>
Then this will count and return the character, word, and lines in the file.
Output should be something like <br>
 
    19008 3540 174
