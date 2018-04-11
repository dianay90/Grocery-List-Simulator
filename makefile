default: inputValidation.cpp Menu.cpp Item.cpp main.cpp List.cpp
	g++ -std=c++0x inputValidation.cpp Menu.cpp Item.cpp main.cpp List.cpp  -o d 

clean: 
	rm d
	

