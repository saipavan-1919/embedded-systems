# km42besd19

KM42BESD19	Nibhanapudi_Sai_Pavan - lab assignments repo

## ADVANCED C

### 7.Structures

1. "Define a student template with below information. 
ID, name, marks of 6 subjects, fathername, day ,month & year of birth, day,month & year of joining, day, month. Create Date as another structure and use inside student structure.
Create an array of students and read the data for all students. 
 * - Implement a date comparison function that takes 2 date structures as arguments and returns 1 or 0 to indicate which date is elder.
 * - using the above function, findout and print the name of the eldest of all the students.
 * - Find the topper out of all students and print his name and father name and marks and total marks.
 * - How many students passed the exams (total marks above 30% ) and their names.
 * - How many students failed (any subject below 30% marks ) and their names.
 * - How many students got first class (total marks above 60% ) and print all their names.
 * - Sort the students array in alphabetical order of their names.
 * - Display the student names rankwise without sorting the array. 
 * you may add extra members to the structure if required."

### 6.Function pointers(01/12/2021)

1. Write the calculator program using function pointers.
2. Write the calculator program using array of function pointers.
3. Write the calculator program using a function that accepts a function pointer as argument and invokes it.
 * eg., fptr = ADD;
 * invokeptr(fptr);
 * invokeptr(int (*fptr) (int,int))
 * {
 * printf(""%d\n"",fptr(3,4));
 * }
4. sorting a list of names received on command line argument, with options like -r and -i using function pointers.
 * eg., ./sort -r -i Abc bcD Efh Afh abcd 
 * ./sort -r Abc bcD Efh Afh abcd
 * ./sort -i Abc bcD Efh Afh abcd
 * ./sort Abc bcD Efh Afh abcd
 * -i option means string comparison should be done without case sensitivity. 
 * -r option means strings should be sorted in descending order.

### 5.Dynamic memory

1. Create a dynamic array of integers. Take input from user , sort the array and display the output.
2. Write a function that takes two sorted integer arrays as input, and returns an array of integers from both arrays in sorted order, excluding duplicate numbers.
  * Assume that the input arrays are sorted.
  * eg., array1 : 10,12,13,14,15,16
  * array2 : 9,12,15,19,20
  * output array3 : 9,10,12,13,14,15,16,19,20
3. mplement your own realloc function using malloc and free.
  * - allocate memory for new size
  * - copy data from old location to new location
  * - free old address
  * - return new address
4. Implement itoa function and return the string from the function. Print the result in main.
5. Write a function, that takes two strings as input and concatenates only the first n characters from first string and first m characters from second string and makes a new string.
  * eg., input str1 = "kernel masters", str2 = "raayan systems", n = 3, m = 5
  * output : kerraaya

### 4.Sorting

1. Sort a numerical array.
2. Sort a 2-dimensional character array of names.
3. calculator using command line arguments.
4. Sorting using command line arguments
5. Sort names using character pointer array

### 3.Char ptr strings

1. Write a function to replace a given character by another character in a string and returns the modified string as return value.
2. "Write a program to convert a string into upper case and print.
eg., input : Hello
output : HELLO"
3. "Write a program to convert a string into lower case and print.
eg., input : Hello
output : hello"
4. Strrev – string reverse
5. Strcpy – string copy
6. Strcat – string concatenation

### 2.Multi dimensional arrays(20/11/2021)

1. Declare a two dimensional array of elements for sales details of a store, for each item, for each sales man. Take the sales values as input and print the array in matrix form.
Find out and print the following :
a ) Total sales by each sales man
b ) Total sales for a item
c ) Total sales
2. Write the following program : 
Declare a two dimensional array of elements and find and print its transpose.
eg., if the matrix is :       1 3
                              4 5
                              7 8
its transpose should be :     1 4 7
                              3 5 8
3. Write a program  for matrix addition and subtraction.
4. Write a program  for matrix multiplication.
5. Search for an element in a two dimentional array, and print its position - as row and column numbers
6. Declare a two dimensional array of characters, read names from the user and print them back.
7. Declare a three dimensional array of elements for sales details of a store, for x number of items, sold by y number of sales men , for a period of z number of days. Take the sales values as input and print the array in matrix form for each day. Also find and print the following :
a ) Total sales by each sales man per day.
b ) Total sales of each item per day.
c ) Total sales made by each sales man for z number of days.
d ) Total sales of each item for z number of days.
e ) Total sales of the super market for z days.


### 1.strings(18/12/2021)


1. Take a string as an input, and count and return the number of words in the string using a function. 
Take space, comma,exclamation, question mark and fullstop as delimitters for word counting. 
2. Write a function that takes a string as input, and determines whether the string is a palindrome or not.
3. Write a function to replace a given character by another character in a string.
4. "WAP to display the word expansion of a number
eg., Input : 789
Output : Seven Eight Nine"
5. Implement your own versions of the below functions using pointer increment / decrement method:
      Strlen – string length
      Strrev – string reverse
      Strcpy – string copy
      Strcmp – string comparison
      Strcat – string concatenation 
6. Write a trim() function,that will remove the leading and trailing spaces from a string.
eg., Input : "    str  str   "
Output : "str str"
7. Write a program to find if a string is numerical or alphabetic or alpha numeric.
8. Write a function to convert a numerical string to integer (atoi() library function own implementation)
eg ., scanf(""%s"", str); // str is a character array : input is 345
// write the functionality to create an integer num, with value 345, taken from string str
printf(""%d"", num); // num is an integer : output is 345


## EMBEDDED C

### IOT_PROJECT

1. IoT Project - Smart Weather Monitoring System (Interface with LM35, LCD & Wi-Fi modules)
Draw Block Diagram, pseudo code, Flowchart and write an Embedded C program and read temperature value from LM35 Temperature sensor every 5 sec delay and send to LCD and Kernel Masters webserver?

### UART

1. Experiment 16: Uart1 initialization and configuration.
2. Experiment 17: UART1 transmitting and receiving using loopback.
3. Experiment 18: UART1 full duplex communication between two boards.
4. UART6_Phase 2:
 * a.	Delay after AT command without checking AT command status
 * b.	Check AT command Status with UART Inchar Blocking call (Polling)
 * c.	Enable UART Rx Interrupt

### ADC

1. Experiment 14:  Write an Embedded C program to initialize ADC Single Conversion mode. Using regular channel software trigger samples ADC channel 11 and stores the result to a global variable ADC that can be accessed with the ST-Link Debugger.
a.	Polling Method
b.	Interrupt Method
2. Experiment 15:  Write an Embedded C program to read temperature value from ADC channel 10 and send data in to LCD with degree centigrade.  Single Conversion mode
main.c, lcd.c, lcd.h, systemticktimer.c, systemticktimer.h

Hint: Read LM35 datasheet

### GPIO

#### System Tick timer(24/11/2021)

1. Lab Experiment 10: 
Toggles PC5 (RED LED) every 100msec delay using SysTick timer With Polling using 16MHZ  system clock source. And also test minimum and maximum delays of 16MHZ timer.
2. Lab Experiment 11: 
Toggles PC5 (RED LED) every 100msec delay using SysTick timer With Interrupt using 16MHZ system clock source.
3. Lab Experiment 12:
Implement delay generic functions using 16MHZ SysTick timer with polling method. 
Void KM_Delayms(int );
Void KM_Delayus(int );
4. Lab Experiment 13:
Interface 16x2 Monochrome LCD with STM32F401RBT6 Controller
Write “Kernel Masters” on LCD display using hardware delay (System Tick Timer)

#### Display project(22/11/2021)
LAB EXPERIMENT 9
1. write a program to display "welcome kernel masters" on the 16*2 LCD display.

#### interrupt

LAB EXPERIMENT 8
1. Write a program Request and interrupt on the falling edge of PC8 (whenever UP SW is pressed) then toggle RED LED (PC5) and falling edge of PC9 (whenever DOWN SW is pressed) then toggle GREEN LED (PA8) increment a counter in the interrupt

#### INPUT

1. Whenever SW1 is pressed RED LED is ON, whenever SW2 is pressed GREEN LED is ON. Assign breakpoints after if condition and click run button in debugger window. Whenever SW1/SW2 presses program stops at any one of the breakpoint.
2. Use “WAKEUP SWITCH” and declare “counter” global variable. Your program should increment counter by one, every time switch is pressed. Note how the value of counter changes on each “WAKEUP SWITCH” press. Use debugger and add Counter to “Watch Expression” window. Does the value of counter increment by one always? Note: Define counter as a global variable and in debug perspective use continuous refresh option (You will find Continuous Refresh button on top of the Expression Window). You can use step debugging or breakpoints to check the variable value. Hint: To add variable to Expression Window, select and right click the variable name and select “Add Watch Expression”. To view Expression Window, click on View button from Keil menu bar and select Expressions.
3. Whenever WAKEUP SWITCH is Press toggle RED LED.
4. Read WAKEUP SWITCH, if switch is press RED LED is ON otherwise RED LED is OFF. Note that RED LED should remain ON for the duration switch is kept pressed i.e. RED LED should turn OFF when switch is released.
5. Whenever WAKEUP SWITCH Press turn ON BUZZER up to 250msec and Turn OFF BUZZER.

#### OUTPUT
1. Toggle RED LED (PC5) ON time is 50ms and RED LED (PC5) OFF time is 1300ms.
2. Airplane wing Lights blinking Delays: 
  * USER LED1 (GREEN – PA8): ON (50msec), OFF (50msec), ON (50msec), OFF (150msec) periodically. 
  * USER LED2 (RED – PC5): ON (50msec), OFF (250msec), ON (50msec), OFF (500msec) periodically.

## GDB lab assignments

1. gdb_sample.c: class room example program, attached this mail. 
2. % grading with % as float.
3. Find biggest of n numbers, without using arrays.
4. call by value
5. call by reference
6. Super Market
7. strstr() - sub string finding

## LSP

### 7.Socket programmng

1. WAP simple command line Chat Application.


### 6.Thread synchronization (05/11/2021)

1. What is the difference between a Task, Process and thread?
2. How threads communicate with each other?
3. Do you have any idea about thread safe? How can you implement it?
4. What is Critical section, deadlocks, race around condition are problems that happen
in thread synchronization?
5. WAP producer thread and consumer thread synchronization using pthreads without
synchronization mechanisms?
6. WAP create two threads using pthreads and print even no and odd no alternatively.

### 5.process management-2 (02/11/2021)

1.	What is a zombie process? What is an orphan process? WAP to create a zombie process?
2.	What is difference between fork, vfork and exec system call?
3.	How to start a new process in shell? Explain with example how ls command works?
4.	Write a list of system calls used in process management with proper syntax?
5.	Write a program your own kill () command?
6.	Write a program your own nice () command?

### 4.process management(30/10/2021)

1. WAP your own version of system() library?
2. Mini Project on Process Management:
 * Write a system program to implement your own shell?
 * Hint: using fork() + exec() , almost same as system() library implementation.

### 3.Miniproject(display) (28/10/2021)

1.	Write a program open a power button and mouse device and read data from both the devices without blocking any device?
2.	Write a Linux System Programming read Kernel Masters bmp Logo and write in to the monitor. 
Hint: In Linux Monitor is called Frame Buffer is located in /dev/fb0. Choose logo resolution it matches to your monitor resolution.

### 2.Advanced file operations(26/10/2021)

1.	WAP your own version of cat command using mmap system call?
2.	Write an Linux System Programming copy one file content to another file using mmap() system call.
3.	Write a program to read framebuffer fixed size information?   
       * Hint: Device name is /dev/fb0.
4.  Write a program show the /dev/input/event0 device name?

### 1.Basic file operations(22/10/2021)
1.	Write a C program that makes a copy of a file using standard I/O and system calls.  Explain the Difference between System Call and Standard Library.
2.	Write a system programming your own version of getchar() standard C Library?
3.	Write a system programming your own version of cat command?
4.	Write a system programming your own version of echo command \?
5.	Write a system programming your own version of cp command?
6.	Write a system programming your own version of head & tail command?
7.	Write a system programming your own version of wc command?
8.	Write a system programming your own version of du & touch command?

### Shell scripting (21/10/2021)

1. Write shell script that will add two nos, which are supplied as command line argument, and if this two nos are not given show error and its usage
2. Write Script to find out biggest number from given three nos. Nos are supplied as command line arguments. Print error if sufficient arguments are not supplied.
3. Write script to print given number in reverse order, for eg. If no is 123 it must print as 321
4. Write script to determine whether given file exist or not, file name is supplied as command line argument, Also check for sufficient number of command line arguments.
5. How to write script, that will print, Message ""Hello World"", in Bold and Blink effect, and in different Colors like red, brown etc using echo command."
6. Write a shell script that accepts a file name, starting and ending line numbers as arguments and displays all the lines between the given line numbers.
7. Write a shell script that deletes all lines containing a specified word in one or more files supplied as arguments to it.
8. Write a shell script that displays a list of all the files in the current directory to which the user has read, write and execute permissions.
9. Write a shell script that receives any number of file names as arguments checks if every argument supplied is a file or a directory and reports accordingly. Whenever the argument is a file, the number of lines on it is also reported.
10. Write a shell script that accepts a list of file names as its arguments, counts and reports the occurrence of each word that is present in the first argument file on other argument files.
11. Write a shell script to list all of the directory files in a directory.
12. Write a shell script to find factorial of a given integer.Mini Project - shell programming:
13. Write a network monitor application server_monitor.sh which show the below information
    * OS name
    * Architecture version
    * Kernel version
    * Internet status
    * IP Address
    * Memory Usage
    * Disk file systems usage
    * system uptime


### GNU_toolchain

#### 1.calculator(19/10/2021) 
* Assume that you are working on a calculator project contained in the directory calculator. under this directory there are several subdirectories with names "lib","doc","inc“,"src“ and “bin”.
* The objective is to create a top level Makefile in the calculator directory and each of the source code directories: lib and src.
* The include directory contains the header files for the project and does not need a Makefile as these don't have to be compiled separately.
* When make is invoked in the calculator directory it should automatically invoke the Makefile in each of the src directories automatically and build a library in the "lib" directory and two executables in each of "src" directory.
* Create any source files with all their header files in the include directory.

## Microprocessor asssignments

### 1.ALP Lab Assignments:(01/10/2021)

1. ```To find Odd No or Even No:
```Write an ALP to find given number is odd or even and load number in 4000H memory location the result stored in 6000H.  If even, store 22H at memory location 6000 otherwise store 11H at memory location 6000.
2. ```Data transfer memory to memory:
```Write an ALP to 16 bytes of data (0 to 15) stored in memory locations at 2000H to 200FH. Transfer the entire block of data to new memory locations starting at 4000H.
3. ```To Perform Multiplication without using MUL instruction:
```Write an ALP to perform multiplication of two numbers without using MUL instruction first & second number stored in 4000H & 4001H memory locations respectively and the result stored in 6000H?
4. ```To Perform Division without using DIV instruction:
``Write an ALP to perform division of two numbers without using DIV instruction first & second number stored in 4000H & 4001H memory locations respectively and the result stored in 6000H?
5. ```To find average of 5 Numbers:
```Write an ALP average of 5 numbers takes the numbers from 4000H to 4004H location and store the result in 4005H?
6. ```To Perform PUSH without using PUSH instruction:
```Write an ALP if there is no PUSH instruction and implement same with two instructions which perform same operation as PUSH B?
7. ```Count No. of 1’s:
```Write an ALP count no. of 1’s and load number in 4000H memory location the results stored in 6000H?
8. ```To Perform power of 2:
```Write an ALP to find the given number is power 2 and load number in 4000H memory location the result stored in 6000H?  (If given no is power of 2, store 22H at memory location 6000

## C programming

### 19.BItwise operators(06-10-2021)

1. Write a Macro's Set,clear and toggle n'th bit using bit wise operator?
2. WAP print binary?
3. WAP to count the bits set (bit value 1 ) in an integer? Find out and compare different possibilities?
4. WAP implement subtraction functionality with out using SUB('-') Operator.    
5. WAP implement addition functionality with out using ADD('+') Operator.   
6. WAP implement XOR functionality with out using XOR(^) operator.
7. WAP to implement the sizeof operation using bitwise operator.  
8. WAP to convert Little endian integer to Big endian integer 
9. WAP multiply a number by 9 using bit shift.
10. WAP whether a number is ODD or EVEN using bitwise.
11. WAP whether a number is power of 2 or not?
12. WAP Check if the 20th bit of a 32 bit integer is on or off?.
13. Write a functionsetbits(x,p,n,y)that returns x with then bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.
    * e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then
    * you need to strip off 3 bits of y (111) and put them in x at position 10xxx010 to get answer
    * 10111010. Your answer should print out the result in binary form although input can be in
    * decimal form.
    * Your output should be like this:
    * x = 10101010 (binary)
    * y = 10100111 (binary)
    * setbits n = 3, p = 6 gives x = 10111010 (binary).
14. WAP Swap any two numbers using bitwise operators. How it works?

### 18.preproc1

1. "Write down a macro to find out the biggest of two numbers.
      * MAX(x,y) should define code to find biggest of x and y."
2. Write down a macro to find the biggest of two numbers. Using this macro , implement array sorting.
3. Implement calculator program using macros. Write down your own header file ,where the calculator macros are defined(ADD,SUB,MUL,DIV).
4. WAP to print if  a character is alphanumeric , using macros.
5. WAP to print if a year is leap year or not. Modify the date validation program using this.
6. WAP to print a range of prime numbers. Use macro,to find if a number is prime or not.
7. Write a macro to print the biggest of three values. Try to call it and print the result for different data types, integer, float, double and character.
8. Define  a macro that receives an array and the number of elements in the array as arguments. Write a program using this macro to print out the elements of an array.
9. Using the above macro, write a program to compute the sum of all elements in an array.

### 17.pointers2

1. Write a program to swap two numbers using Call by Value and Call by Reference.
2. Note down the differences between Call by Value and Call by Reference and when to use what.
3. Write a function that can rotate the values of three variables. print the results in main function.
4. Write a function that can take two integers as input, and gives 5 outputs : addition, subtraction, multiplication, quotient and reminder of those two numbers. Print the outputs in the main function.
5. "Write a function that communicates with main using a single static variable without taking any input arguments.
Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.
    * eg., print the square of each number of an array :
    * for each number of the array :
      *   call the function
        * main gets the static variable address as return value from function.
        * main puts the array element in static variable.
    * in the function :
        * create static variable.
        * if static variable value is not zero, print its square.
        * function sends static variable address back to main."
6. Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.

### 16.pointers1

1. Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator).
2. Write a program to add two variables using thier pointers.
3. Write a program to take input for two character variables using pointers and find out which character has higher ascii value.
4. Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer.
5. Declare 3 pointer variables of integer type, and an integer variable. Assign the address of integer variable to the 3 pointers. Print the variable value using indirection on each pointer variable. Change the variable value directly and check the values of each of the pointers using indirection. Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change.
6. declare different pointers with different data types. Print the sizes of the pointer variables using sizeof operator. Why do u think all of them are giving same size irrespective of the data type ?
7. Write a program to find the biggest of three numbers using pointers that point to those numbers.
8. Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. Do this using pointers that point to x,y and z.
9. Declare an integer array of size 10 and initialize it to some values. Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.

### 15. arrays3(14/09/2021)

1. Given an array of n integers where n>1, return an array of same size an input array where at every index of the output array should contain the product of all elements in the array except the element at the given index.
    * Example:
    * arr[] = {10, 4, 1, 6, 2}
    * prod[] = {48,120,480,80,240}
2. LAB Test Question:
    * Write a program, to insert a number at the right place in a sorted array of integers and delete a number and shift accordingly.
    *  Array maximum size is fixed. 
    *  Empty spaces are represented by -1. 
    *  If a value is inserted, which is already existing in the array, give the following message, and dont insert the value : "Duplicate values are not allowed"
    *  If a value is requested for deletion, which is not there in the array, give the following message: "Cannot delete, the value is not found"
    *  When the array is full, and a new value is inserted, the following message should be given: "Cannot insert. Array is full"
    *  Assume, the program will store only positive values in the array, so -1 means empty space in the array.


### 14.strings2(14/09/2021)

1. int strcmp(char s1[],char s2[]);
2. int strncmp(char s1[],char s2[],int n);
3. void strncpy(char d[],char s[],int n);
4. void strncat(char d[], char s[], int n);
5. int stricmp(char s1[], char s2[]);
6. int strrrev(char s[], char c);
7. int strstr(char str[], char substr[]);

### 13.Strings1

1. ```int strlen(char str[]);
```returns the length of the string, that is number of characters before the first null character
2. ```void strcpy(char dest[], char src[]);
```copy all characters upto first null character from src to dest, including null character.
3. ```void strcat(char dest[],char str[]);
```copy all characters upto first null character from src to dest starting from first null character in dest. Replace first null character in dest with first character from src and follow the remaining characters. copy null character at the end after copy.
4. ```void strlwr(char str[]);
```convert all upper case letters to lower case.
5. ``` void strupr(char str[]);
```convert all lower case letters to upper case.
6. ```int strchr(char s[], char c[]);
```returns the first index at which char c was found in string s.
7. ```void strrev(char s[]);
```reverse the order of characters in the given string, upto first null character.
eg., input : kernel
output: lenrek

### 12.arrays2

1. "Try experimenting with the below array syntaxes and see the results,check their sizes, try to also read values for elements and print them:</br> 
    * int arr[5] = {}; 
    * int arr[10] = {2.4,5.6,7.3};
    * int arr[3] = {1,2,3,4,5};
    * int arr[0] = {};
    * int arr[0] = {1,2,3,4,5};
    * int arr[] = {};
    * int arr[‘a’];"
2. "Write the following program.
Declare an integer variable ‘size’. 
Take the value of ‘size’ from user using scanf.
Declare an array of any datatype, and give the integer variable ‘size’, in place of size of the array  and initialize it to some values.(syntax: float array[size] = {1.0,2.5};)
Using for loop, try to take user input using scanf. Loop should execute ‘size’ number of times.
Using for loop, print the elements of the array."
3. "Write a program to print an array in reverse order
    * Input : array1 ={1,2,3,4,5};
    * Output : array1 = {5,4,3,2,1};"
4. "Write a program to reverse an array and print it:  
    * Input : array1 ={1,2,3,4,5};
    * Output : array1 = {5,4,3,2,1};"
5. Write a program to print an integer in binary format.
6. "Write a program to swap two arrays in reverse order.
    * "eg., array1 = {1,2,3,4,5};
    * array2 = { 6,7,8,9,10};
    * output
    * array1 = {10,9,8,7,6}
    * array2 = {5,4,3,2,1}
7. Write a code in C to receive an array of different integer values, and produce another array(list) of only the duplicated values in the original array, if a duplicate value is found more than once, the list shall only show one value, order is not important.
8. an array contains some numbers. You need to find out how many times the biggest number has occurred in that array.

### 11.Arrays

1. "Write the following program : 
    * Declare an integer array of size 100.
    * Assign numbers 1-100 to each element of the array.
    * Print all the numbers.
    * Print all even elements.
    * Print all odd elements.
    * Add 5 to each element and print 6 – 105 numbers."
2. Declare an array of size 10.  
    * Enter 10 elements and save them in the array. 
    * Print the array . 
    * Find out the biggest and smallest numbers and their indexes and print. 
3. Write a program to search for a specific element given by the user, in an array and display its index. 
4. Write a program to find the sum of all elements in an integer array, and print the sum

### 10.storage classes(02/09/2021)
1. "Rewrite the calculator program so that the main function is in main.c , remaining functions are in another source code file ,operations.c.
    * 1 ) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function returns the result as return value.
    * 2 ) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function return value should be stored in another global variable in operations file and be used to print in main.
    * 3 ) Create the operand variables as global variables and the operator as an argument. result should be printed in function itself without returning.
    "
2. "WAP - for the 4 departments of a super market : Sales, Purchase, Stock and SuperMarket in four different source code files.``
    * Stock : Maintains a variable for available stock.
    * Sales : Has one function: Sell – It will reduce the stock by the number of items sold. Before selling check if enough stock is available.
    * Purchase : Has one function : Purchase – will increase the stock by the number of items purchased.Set a max value for stock, before purchasing check if the stock room has enough space for new items or not.
    * SuperMarket : Display menu with choices : 1 ) check AvailableStock 2 ) Purchase new items 3) Sell items … this should be continuous as long as the user wants to continue. Program should stop when the user wants to quit."``
3. "WAP - with a function that prints the following message every nth time it is called : Hello! I am called nth time. Print the appropriate subscript after the n, depending on the last digit.
        * Output : The function should print the following ,
    * I am called 1st time.
    * I am called 2nd time.
    * I am called 3rd time…etc.
    * The subscripts also should be printed appropriately. (st, nd ,rd and th etc.).
    * Hint : numbers ending with 1 will have st as subscript.
    * Numbers ending with 2 will have nd as subscript.
    * Similarly, numbers ending with 3 will have rd and all the remaining numbers will have th."
4. Super market prigramme (version2)
    * 1)Stock variable should be limited to stock.c file, it should not be directly accessible outside. Write a function in stock.c file ,which will only return stock value.
    * 2) change sales option such that, when the customer wants to buy more items than the available stock, then the program gives the below 2 options 
    	* a) Sell the available stock (sell whatever available, stock becomes 0)
    	* b) cancel the sales (stock remains as it is)
    * 3) Change purchase option such that, when the supervisor wants to purchase more stock than the available space, then the program gives the below 2 options
    	* a) Purchase to fill the space( stock becomes full to the capacity)
    	* b) cancel the purchase (stock remains as it is)
    * 4) when user chooses 4 - Quit option, print the below reports before stopping the program:
        * a)  Current stock
        * b)  Number of times sales happened
        * c)  Number of total items sold
        * d)  Number of times purchase happened
        * e)  Number of total items purchased
        * f)  Total number of customers visited for sales

### 9.functions(27/08/2021)

1. Write a function that takes principle, rate of interest and time in months as input arguments, and returns the total amount to be repayed, after calculation of simple interest.
2. Modify the calculator program - with functions ,Add(),Sub(),Mul(),Div(),Mod(). Each function should take the inputs as parameters and return the result as output.```
Hint: int add(int , int); 
int sub (int, int);```
3. write a function that can take an integer as input and return 1, if the number is prime number and 0 if it is not prime and print appropriate output message.```
return type is integer.
IsPrime - returns int (0,1)```
4. Write a function to determine if a character is alphanumeric or not. ```
Hint: int fun_alpha_num(char c)```
5. Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n.
6. Write a function to accept a year as input and return 1 if the year is a leap year, otherwise 0.
7. Write a function to accept two dates as input arguments, and return 1 if the first date is older, 0 if the second date is older. print appropriate message in main function.
8. Write a function that accepts a month and year as input, and returns the number of days of the month as output. Print the number of days in a given month and year.
9. Write a function to accept a character as input, return the upper case character, if the given character is a lower case alphabet, otherwise return the character as it is.```
char ToUpper(char );```
10. Write a function to return the product of two numbers without using * operator.
11. Write a function ,that can take two integers, swap their values and print their new values.return type should be void.
12. Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers using the prime number function written above.return type should be void.
PrintAllPrimes - return type is void. Should use IsPrime() function from #3
13. Write a function that takes an integer parameter and prints its multiplication table.return type should be void.
14. Write a function to accept a date and return 1 if the date is valid. 0 otherwise.
15. Write a program to take input of month, year, total salary and number of LOP days as input and calculate the salary of an employee.```
eg.,
input : month: 1 , year: 2019 , total salary: 10000, lops : 4
net salary : 8709/-
(Hint: Calculate one day salary, multiply with number of lops, subtract from total salary)```
16. Write a function that takes an integer as input and returns the reverse of the integer as output.
print the reverse number in main function.
17. Write a function that takes an integer as input and returns the number of digits as output. Use do while loop.
return 1 if the input is 0. should return the count for negative numbers also.
18. Write a program to read roll number and marks of 10 students in 3 subjects.
The valid range for roll numbers is
1000-9999, if the roll number entered is not in this range, the user should be asked to enter again.
Calculate total marks of only those students who get more than or equal to 40 marks in each subject.
Count the number of students whose total is more than 200.
Print the roll number of the student who gets the highest total.
19. Write a function to take the input as number of terms, and return the sum of the following series upto the given number of terms:```
eg., input number of terms: 4
output : 1 + 11 + 111 + 111```

### 8.Loops(24/08/2021)

1. Write a program to find the reverse of an integer.
eg., input :453
output: 354 
2. Print the following pattern using while and for loops in a single program:
    input: n=5
    output:
    *.
    * *.
    * * *.
    * * * *.
    * * * * *.
print the following patterns using loops( while/for) for a given input number n
3.  
    * * * * *.
    * * * *.
    * * *.
    * *.
    *.
4. ```
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5```
5.  ```
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5```
6. ```
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1```
7. ```
    5
    4 4
    3 3 3
    2 2 2 2
    1 1 1 1 1```
8. ```
    5
    5 4
    5 4 3
    5 4 3 2
    5 4 3 2 1```
9. ```
    1
    2   3
    4   5   6
    7   8   9   10
    11  12  13  14  15```
10. *. 
    * *.
    * * *.
    * * * *.
    * * * * *.
11. 
print the following pattern without using nested loops(using only one loop)
    *.
    * *.
    * * *.
    * * * *.
    * * * * *.
12. ```
           1
         2 3 2
       3 4 5 4 3
     4 5 6 7 6 5 4
   5 6 7 8 9 8 7 6 5
     4 5 6 7 6 5 4
       3 4 5 4 3
         2 3 2
           1```

### 7.While loop(20/08/2021)
1. Write a program to print all numbers from 1 to n.
2. Write a program to print all odd numbers and even numbers from m to n(both in same program, one after the other).
3. Write a program to input n numbers and print the largest and smallest numbers out of them.```
Eg., 3,23,56,34,78,45,26,90,68,77
Biggest Number is 90
Smallest Number is 3"```
4. Write a program to input a number and count the digits in it.```
Eg. 
0 - number of digits 1
12 – number of digits 2
155 – number of digits 3"```
5. Modify the calculator program to perform the operations continuously until the user chooses not to continue further.
6. Modify the Calculator Program to perform multiplication, Division, and modulus Operations
With out using the symbls *,/ and % or any library functions related to these operations"
7.. Write a program to find out if an integer entered by a user is a prime number or not.
8. Write a program to find the factorial of a given number.```
N! = n * n-1 * n-2 * …. 2 * 1"```
9. Write a program to print the first n Fibonacci numbers.```
Eg., First 8 Fibonacci numbers are :
1  1  2  3  5  8  13  21 "```
10. Write a program to find the value a given number raised to a given positive integer power.
read to integers and find the power of the first integer raised to the second integer.```
eg., 3  4
out: 81```

### 6.Switch statement (18/08/2021)

1. C program to check whether a character is vowel or consonant using switch statement
2. Write the calculator program using switch case statement.
3. C program to check whether a number is odd or even using switch statement
4. C program to find maximum of two numbers using switch statement
5. Write a program to determine if a given date is valid or not using switch statement. Note that year must be between 1850 and 2050. 
6. "Extend the percentage marks program to print the grade of the student as per below division , using switch statement.```
80 - 100        : Honours
60 - 79         : First Division
50 - 59         : Second Division
40 - 49         : Third Division
0 - 39          : Fail"```

### 5.Logic operators (16/08/2021)

1. check if a character is alphabet or not
2. check if a character is vowel or not
3. check if an year is leap year or not.
4. "Find the power bill for the input number of units :```
0 - 200 units : 100/- min
201 - 400 units : 100 + 0.65 per unit excess of 200
401 - 600 units : 230 + 0.80 per unit excess of 400
601 and above units : 390 + 1.00 per unit excess of 600"```
5. "Find the % of marks for 6 subjects, for a student, and print the grade of the student as per below division , using if else statement.```
80 - 100        : Honours
60 - 79         : First Division
50 - 59         : Second Division
40 - 49         : Third Division
0 - 39          : Fail"```
6. Write a program to find the biggest of three numbers using if else statements.
7. Write a program to find the biggest of four numbers.

### 4.ifelse (13/08/2021)

1. Write a program to find the biggest of three numbers using if else statements.
2. C program to check and print whether a number is positive, negative or zero
3. Write a program to find the biggest of four numbers.
4. Write a calculator program that takes two integer numbers from user, and one of the operands +,-,* and / as a character and prints the appropriate result using if else.
5. Find the power bill for the input number of units :```
0 - 200 units : 100/- min
201 - 400 units : 100 + 0.65 per unit excess of 200
401 - 600 units : 230 + 0.80 per unit excess of 400
601 and above units : 390 + 1.00 per unit excess of 600```
6. Find the % of marks for 6 subjects, for a student, and print the grade of the student as per below division , using if else statement.```
80 - 100        : Honours
60 - 79         : First Division
50 - 59         : Second Division
40 - 49         : Third Division
0 - 39          : Fail```
7. check if a character is alphabet or not
8. check if a character is vowel or not
9. check if an year is leap year or not.
10.	An ATM gives money in denominations of 500, 100, 50 ,20 and 10 /-. Given an amount, print how many notes of each denomination will be released. Amount entered must be a multiple of 10, otherwise give an error message. 
print only the denominations that are dispensed, do not print the denominations with 0 number of notes.
11. Read the marks for 6 subjects as integers, and calculate the percentage with 2 digit precision. Print the grade of the student as per below division, using if else statement.```
80 - 100                         : Honours
60 - 80(not including 80)        : First Division
50 - 60(not including 60)        : Second Division
40 - 50(not including 50)        : Third Division
0 - 40(not including 40)         : Fail```
12. "Write a program that reads a floating-point number and then displays the right-most digit of the integral part of the number.```
(Eg: User enters, 456.789, the output should be 6, which is last digit of the integral part of the number).```
13. "Input 3 digits, read them into three different characters. Make one integer out of them and display.```
Eg., input 345. char c =‘3’,b=‘4’,d=‘5’. 
Output : int i = 345.```
14. Write a program to print the size of various data types in C.

### 3.Conditional operator (12/08/2021)

1. Write a program to find the biggest of two numbers using conditional operator.
2. Write a program to find the biggest of three numbers using conditional operator.
3. Write a program that determines whether a given integer is odd or even and displays the appropriate message.
4. For one type of mobile service, if cost is 250/- upto 100 calls and 1.25/- for each call made over and above 100 calls. Write a program to read number of calls made and compute and print the bill.
5. Input an alphabet. Output its case reverse.```
   eg., input: a
    output: A
    input: T
    output: t```
6. Take an integer as input and print its magnitude (remove sign).


### 2.Variables (10/08/2021)

1. read a 4 digit number and print it in the following formats using arithmetic operators.```
 eg., 4532
 OP:
 2           4                         4                                      4532                  2354                
 3           5                         45                                     453
 5           3                         453                                    45
 4           2                         4532                                   4```
2. read a 4 digit number and print it in the following format using escape sequences:```
eg., 4532
Output:
4532
453
45
4```
3. Write a program that reads an integer and displays the right-most digit of the number.```
(Eg: User enters, 456, the output should be 6).```
4. swap the values of 2 variables and print the changed values.

### 1.Datatypes (o6/08/2021)
1.  List out the data types, their format specifiers. 
2.  try input and output on different variables,create variables and then formatted output and inputs, print some expressions with arithmetic operations.
3.  "Calculation of simple interest.
    * steps: 
    * declare an integer variables p and n to represent principle and duration in months respectively.
    * declare a floating point variable r to represent rate of interest.
    * declare a floating point variable si to store simple interest after calculation.
    * declare a variable m to represent time duration in years.
    * print the following indicative message using printf
     ""please enter principle,time in months and rate of interest""
    * read the values of p ,n and r using scanf.
    * devide n by 12.0 using / symbol and store the result in m, to convert time duration from months to years.
    Hint : m = n / 12.0;
    * calculate simple interest using the below formula and store in si variable.
    si = p * m * r / 100;
    * print si value to the user using printf."
4. calculation of average of 4 numbers
5. calculation of area and perimeter of rectangle,square and circle
6. if sale price and profit of n items is given find the cost price of 1 item.