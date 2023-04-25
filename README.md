# Introduction to Structs in C

Structs, short for structures, are a fundamental data type in C that allow you to group together multiple variables of different data types under a single name. A struct can be thought of as a record or a container that holds related information.

## How to declare a struct

Here's an example of how to declare a struct in C:

```c
struct person {
    char name[50];
    int age;
    float height;
};
```

In this example, we have declared a struct named `person` that contains three variables: a character array named `name`, an integer named `age`, and a float named `height`. The variables in a struct are known as members.

## How to access struct members

You can access struct members using the dot (.) operator. Here's an example of how to access the members of a struct in C:



We then use `printf` statements to print the values of each member.

## Conclusion

Structs are a fundamental data type in C that allow you to group together multiple variables of different data types under a single name. Understanding how to declare and access struct members is essential for efficient programming and solving complex problems. This code provides an example of how to declare and access the members of a struct in C.
