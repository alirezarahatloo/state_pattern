all:main state1 state  
	@.\main.exe
main:state1
	@g++ -o main main.cpp state1.o state.o context.o
state1:state
	@g++ -c state1.cpp
state:
	@g++ -c context.cpp 
	@g++ -c state.cpp
	
	
clean:
	del *.o