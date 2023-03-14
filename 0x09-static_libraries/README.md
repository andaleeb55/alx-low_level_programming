# 0x09-static_libraries

## Build

- create `build` directory, the directory to build object files in

`mkdir build`

- compile `.c` source files

```bash
cd build
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -I.. ../lib/*.c
cd ..
```

- now create static lib

`ar -rc libmy.a build/*.o`

- compile our `main.c`

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -L. -lmy -o qoute main.c`

- Yay!!, We are done, Now Execute

`./qoute`

```
"At the end of the day, my goal was to be the best hacker"
        - Kevin Mitnick
```
