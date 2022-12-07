#creates the .o or output files "exe"
output: helloWorld.o 
	g++ helloWorld.o  -o output

#compiles the helloworld files into the .o files to then be executed from above.	
main.o: helloWorld.cpp
	g++ -c helloWorld.cpp

#cleans the output files created above with the "rm" command	
clean:
	rm *.o output
