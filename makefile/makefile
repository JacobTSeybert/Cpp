#creation of make file
output: main.o message.o
	g++ main.o message.o -o output

#compile the main.cpp but dont make the executable
main.o: main.cpp
	g++ -c main.cpp

message.o: message.cpp message.h
	g++ -c message.cpp 

#make clean command "delete .o files"
clean:
	rm *.o output


#what a make file looks at
#target: dependencies
	#action
