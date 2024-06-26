# Namespaces

A namespace is like a room full of people, and you can talk to
everyone within it, but not outside of it. That is how variables and namespaces
also work. Every variable is created within a namespace and every namespace is
created for each function.  
This prevents some mistakes:  

```c
{{ #include ../code/14/namespaces.c }}
```

In this erroneous code, namespaces prevented us from doing a terrible mistake.
Within the function "triple" we would otherwise accidentally work with the value
of "a" instead of the parameter "b".  

The previous metaphor of namespaces being like rooms filled with people fails
when we include the global namespace.  
This namespace is everywhere, and variables from the global namespace are
reachable from everywhere.  

## all global variables go to hell, no exceptions

So namespaces are a nice way to make sure that a function only ever accesses
data it's supposed to... and global variables kick that concept to the curb.  
If we would have used global variables in the previous example, this would be
the result:  

```c
{{ #include ../code/14/globals.c }}
```

In this code we do have access to "a" and destroy its original value. The print
statement was supposed to print `a: 2 c: 6`, but now it's both 6.  
Don't do globals kids.  
  
Only constants may exist in global namespace. This is fine, since you cannot
alter their value anyways.  
