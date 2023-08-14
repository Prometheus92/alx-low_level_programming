# C - Structures, typedef

### Structures
*structures* are user defined data types that allows to combine data items of different kinds
```C
struct name
{
    type memeber1;
    type memeber2;
    /* declare as many members as desired, but the entire structure size must be known to the compiler. */
};
```
Pointer to Structures `struct name *p` and we will access the elements using two ways:
- `(*ptr).memmber;
- `ptr->memeber;

### typedef
*typedef* are used to give *_new name_* to a datatype
- Built in data types use `typedef type newname`
- for stuctures use
```C
typedef struct name
{
    type member1;
    type member2;
    ....
}newname;
```
