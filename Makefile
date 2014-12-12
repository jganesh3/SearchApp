hello: SearchEngineApp.o Media.o Book.o Film.o Periodic.o Video.o
	g++ SearchEngineApp.o Media.o Book.o Film.o Periodic.o Video.o -o SearchEngine

SearchEngineApp.o: SearchEngineApp.cpp
		           g++ -c SearchEngineApp.cpp

Media.o: Media.cpp
		g++ -c Media.cpp

Book.o: Book.cpp
		g++ -c Book.cpp

Film.o: Film.cpp
		g++ -c Film.cpp		

Periodic.o: Periodic.cpp
		g++ -c Periodic.cpp
	
Video.o: Video.cpp
		g++ -c Video.cpp
		
clean:
	rm -rf *o SearchEngine
