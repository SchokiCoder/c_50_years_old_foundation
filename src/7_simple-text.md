# Simple text

Now as we start to have some actual output, the real game begins.  
I think the best way to learn the basic usage of this feature is try it out
yourself:  

```c
{{ #include ../code/7/printf.c }}
```

Quick facts:  

- a string is a sequence of characters
- a character is a letter like: 'a'
- the first string in the printf function is the format string
- the format string defines the format of the output
- every parameter after the format string feeds the given format
- "%i" means you insert an integer there
- "%s" means you insert a string there
- backslash and the next character in code represent one character in program
  and are called "escape characters"
- '\n' is a line break
- to print a " in such a text write \\"
- '\t' is a tab character

How strings work in the background will be covered later. Just keep the usage
of "printf" in mind.  
