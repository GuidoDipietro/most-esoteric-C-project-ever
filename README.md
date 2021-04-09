# Most esoteric C project ever

This is the most esoteric C project that has ever existed.

This features a semi-[quine](https://en.wikipedia.org/wiki/Quine_(computing)) (or should I say 'super-quine'??), [IOCCC](https://www.ioccc.org/) style programming, file that generate files, cheap encryption algorithms, and finally colour magic on the terminal.

# YouTube video

Please do watch it [here](https://youtu.be/yWOB1y_pJFM).

# How to run this?

I've tested this on Windows 10, WSL 2, Ubuntu 5.0.17, compiling using `gcc` apparently with `c99` standards.  
It's highly likely that this will crash somewhere on other compilers or OS's. Portability was not the concern for this project.

Now, in case you still want to follow, please do (Unix ofc):

```
touch me.c
gcc make.c -o make.out -w
./make.out > me.c
```

Delete the first few lines of `me.c`, from the first line up to the second `#include <stdio.h>`, using your preferred editor.

```
touch tao.bfk
gcc bfk.c -o bfk.out -w
./bfk.out > tao.bfk
gcc me.c -o me.out -w
```

Make your terminal font very very small.

```
./me.out
```

Enjoy.
