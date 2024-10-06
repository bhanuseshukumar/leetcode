-----------------------------	
|        STANDARD C LIBRARY   |
|       (<stdio> <stdargs> etc|
-----------------------------            
             ^
             |
             |
-----------------------------
|       OS FUNCTIONS	     |
|        <sys/type.h> etc    |
|       <sys/stat.h> etc     |
----------------------------- 


--------------------EXAMPLE------------------
-----------------------------------------------------
|        fopen, fread, fwrite, fclose, remove, fseek        malloc calloc|
------------------------------------------------ ----           
             ^
             |
             |
------------------------------------------
|       open read write close ulink lseek  sbrk sbrk respectively|
------------------------------------------

What is buffered I/O & un buffered I/O
The std io library reads a chunk from memory and returns the user specified amount of 
data and keeps the rest buffered. Upon next request the buff is checked for left over data and returned accordingly
instead of fresh system call each time.


Essentially a header file can be though of as all the types(structures) that module accepts or returns to
others & the methods that be performed on them.

One use of union is keep the memory aligned to the address

TOKENS
|
|-----> COMMENTS 
|	(/**/)
|
|-----> IDENTIFIERS 
|	(_[a-z][A-Z][0-9])
|
|-----> KEYWORDS(Total 32)
|	#define is not keyword. It is preprocessor driective.
|
|----->CONSTANTS(4)
           |
           |1------->INTEGER CONSTANTS(ddd 0ddd 0xddd, with suffix U,u L,l)
           |         ex: unsuffixed decimal   :xxx 	 1st of type int, long int, unigned int, ul
           |         ex: unsuffixed octal/hex :0xxx/0xxx 1st of type int, unsigned int, long int, ul|
	   |         ex: xxU or 0xxU or 0Xxx  : unsigned int, unsigned long int
           |
           |2------->CHARACTER CONSTANTS('a', '\ooo', '\hxx' L'x', L'\000') (char or wchar_t)
	   |
	   |3------->FLOATING CONSTATNTS(4f .4f 4.4f / .4L 4L 4.4L 4e-1 e-2 ) default double f->Float L->long double
	   |
	   |4------->ENUM CONSTATNS (int)
-----------	   
|
|------>STRING LITERALS("abc" , L"abc") static char array[], static wchar_t array[]
|
|
SYNTAX NOTATION
|	   
MEANING OF IDENTIFIERS	-- > they may mean any stucture tag, enum, struct member, object, etc..
	| 
	|
	|--->STORAGE CLASS (static, auto for automatic) auto is default. register storage class is auto
	|	default globals have only internal linkages. extern is used to give external likages. static prevents 
	|       external linkage
	|

CONVERSIONS
	|--->POINTER TYPE CASTS. A pointer to a most restricted type can be casted to less restricted type without
				 alignment voilations. but otherwayround may cause exception.


