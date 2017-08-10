#Classes
A class is an expanded concept of a data structure: instead of holding only data, it can hold both data and functions.

An object is an instantiation of a class. In terms of variables a class would be the type, and an object would be the variable.

Classes are generally declared using the keyword class, with the following format:

´´´cpp
class class_name{
  access_specifier_1:
  member1;
  access_specifier_2:
  member2;
  ...
}object_names;
´´´

What is this access specifier? It is one of the following:
-__private__:members of a class accessible only from within other members of the same class or from their friends.
-__protected__: members of a class accessible from members of their same class, from their friends, and from members of their derived classes.
-__public__: members accessible from anywhere.

By default, all members have private access for all its members. Therefore, any member that is declared before one other class specifier automatically has private access.

## Object-oriented programming
Data and functions are both members of the object. We no longer use sets of global variables that we pass from one function to another as parameters, but instead we handle objects that have their own data and functions embedded as members.

Notice that we have not had to give any parameters in any of the calls to rect.area; those member functions directly used the data members of their respective objects.

## Constructors and destructors
Objects generally need to initialize variables or assign dynamic memory during their process of creation to become operative and avoid returning unexpected values during their execution.

In order to avoid that, a class can include a special function called __constructor__, which is automatically called whenever a new object of this class is created. This constructor function must have the same name as the class, and cannot have any return type; not even void.

If you do not declare any constructors in class definition, the compiler assumes the class to have a default constructor with no argument.

The destructor fulfills the opposite functionality. It is automatically called when an object is destroyed, either because its scope of existence has finished or because it is an object dynamically assigned and it is released using the operator delete.

The destructor must have the same name as the class, but preceded with a tilde sign ~, and it must also return no value.

## This
The keyword this represents a pointer to the object whose member function is being executed. It is a pointer to the object itself.
