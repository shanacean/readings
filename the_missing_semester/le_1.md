# The Shell
## file status

- d: directory
- r: read
- w: write
- x: execuate
- -: no right

## input | output stream in shell
`cat < file`<br>
Left angle bracket indicates rewire the input for this program to be the contents of this file

`cat .. > file`<br>
End angle bracket means rewire ouput of preceding program into file

`cat .. >> file`<br>
Double end bracket means append to file

## pipe operator
`cmd | cmd | cmd`<br>
Pipes are unidirectional data flows from left to right.

## basic syntax

### strings
Strings delimited with ' are literal strings and will not substitute variable values whereas " delimited strings will.
```bash
foo=bar
echo "$foo"
echo '$foo'
```
### [special characters](https://tldp.org/LDP/abs/html/special-chars.html)
- $0 —— Name of the script
- $1 to $9 ——  Arguments to the script. $1 is the first argument and so on.
- $@ —— All the arguments
- $# —— Number of arguments
- $? —— Return code of the previous command
- \$$ ——  Process identification number (PID) for the current script
- !! —— Entire last command, including arguments. A common pattern is to execute a command only for it to fail due to missing permissions; you can quickly re-execute the command with sudo by doing sudo !!
- $_ —— Last argument from the last command. If you are in an interactive shell, you can also quickly get this value by typing Esc followed by .

