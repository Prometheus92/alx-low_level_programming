# C- More malloc, free
### *Do I cast the result of malloc?*
*_answer from:-_* [stackoverflow](https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc)

- cast is unnecessary as `void *` is automatically and safely promoted to any other pointer type.
- casting adds clutter to the code, casts are not very easy to read.
- It makes you repeat your self.
- It can hide an error if you forgot to include `<stdlib.h>`, which causes crashes.
