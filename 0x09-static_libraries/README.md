# C - Static Libraries

A **library** is a package of code that is meant to be reused by many programs. Comes in two forms:

- As a Header file that defines the functionality the library is exposing(offering) to the programs using it
- A precompiled binary that contains the implementation of that functionality pre-compiled into a machine language.

Libraries are precompiled for several reasons.

- Libraries rarely change, they don't need to be recompiled often.
- Since libraries are precompiled objects hence machine language, it prevents people from accessing or changing the source code.

There are two types of libraries:

- Static
- dynamic

### Static Library (Archive)
