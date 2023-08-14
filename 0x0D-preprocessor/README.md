# C- Preprocessor
### C Program compilation process
**compilation** is a process of converting source code into a machine readable code. C programs have 4 phases in this process

- *_Preprocessing_*
- *_Compiling_*
- *_Assembling_*
- *_Linking_*

### Preprocessing
It is the first phase of compilation and the following activities are performed in this stage:

* Removeal of all comments
* Expansion of macros
* Expansion of Included libraries
* conditional compilation(including or excluding certain lines of codes based on some condition)

Preprocessing results in a file that has all the needed information for compilation.
```shell command
*_Syntax:_* gcc -E -o name.i
```
### Compiling
In this stage the source code that has pass through the preprocessing phase will be processed to create an assembly instruction which will be passed to the Assembler
```shell command
*_syntax:_* gcc -C -o name.s
```
### Assembling
In this stage the Assembly instruction that is resulted in the compiling process will be converted into an object code


### Linking
