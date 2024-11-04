TARGET := app
SRCS := main.cpp game.cpp board.cpp player.cpp
CXXFLAGS := -arch arm64 -std=c++20 -Wall -Wextra -Werror

make:
	clang++ $(CXXFLAGS) $(SRCS) -o $(TARGET)
