TARGET := app
SRCS := main.cpp game.cpp board.cpp player.cpp

make:
	clang++ -arch arm64 $(SRCS) -o $(TARGET)