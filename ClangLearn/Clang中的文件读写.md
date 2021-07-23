# Clang中的文件读写
- 同样适用于C++，但C++也写了自己的数据流工具

## Clang中的标准I/O
> 使用 scanf()、gets() 等函数从键盘读取数据，使用 printf()、puts() 等函数向屏幕上输出数据；  
> 使用 fscanf()、fgets() 等函数读取文件中的数据，使用 fprintf()、fputs() 等函数向文件中写入数据

- 对于实时数据流：
	- gets(), scanf(), 表示从键盘读
	- puts(), printf(), 表示显示到屏幕
- 对于文件：
	- fgets(), fscanf(), 
	- fputs(), fprintf(), 
