0_start.o: 0_start.cpp Game0.h
	g++ -pedantic-errors -std=c++11 -c 0_start.cpp

1_action.o: 1_action.cpp Game1.h
	g++ -pedantic-errors -std=c++11 -c 1_action.cpp

1_encrypted.o: 1_encrypted.cpp Game1.h
	g++ -pedantic-errors -std=c++11 -c 1_encrypted.cpp

1_gamein.o: 1_gamein.cpp Game1.h
	g++ -pedantic-errors -std=c++11 -c 1_gamein.cpp

1_table.o: 1_table.cpp Game1.h
	g++ -pedantic-errors -std=c++11 -c 1_table.cpp

2_display.o: 2_display.cpp Game2.h
	g++ -pedantic-errors -std=c++11 -c 2_display.cpp

2_game2.o: 2_game2.cpp Game2.h
	g++ -pedantic-errors -std=c++11 -c 2_Game2.cpp

2_initialscript.o: 2_initialscript.cpp Game2.h
	g++ -pedantic-errors -std=c++11 -c 2_initialscript.cpp

2_movement.o: 2_movement.cpp Game2.h
	g++ -pedantic-errors -std=c++11 -c 2_movement.cpp

2_trueornot.o: 2_trueornot.cpp Game2.h
	g++ -pedantic-errors -std=c++11 -c 2_trueornot.cpp

3_display.o: 3_display.cpp Game3.h
	g++ -pedantic-errors -std=c++11 -c 3_display.cpp

3_alienmove.o: 3_alienmove.cpp Game3.h
	g++ -pedantic-errors -std=c++11 -c 3_alienmove.cpp

3_humanmove.o: 3_humanmove.cpp Game3.h
	g++ -pedantic-errors -std=c++11 -c 3_humanmove.cpp

3_tubeassign.o: 3_tubeassign.cpp Game3.h
	g++ -pedantic-errors -std=c++11 -c 3_tubeassign.cpp

main.o: main.cpp Game1.h Game2.h Game3.h
	g++ -pedantic-errors -std=c++11 -c main.cpp

main: main.o 0_start.o 1_action.o 1_encrypted.o 1_gamein.o 1_table.o 2_display.o 2_game2.o 2_initialscript.o 2_movement.o 2_trueornot.o 3_display.o 3_alienmove.o 3_humanmove.o 3_tubeassign.o
	g++ main.o 0_start.o 1_action.o 1_encrypted.o 1_gamein.o 1_table.o 2_display.o 2_game2.o 2_initialscript.o 2_movement.o 2_trueornot.o 3_display.o 3_alienmove.o 3_humanmove.o 3_tubeassign.o -o main
