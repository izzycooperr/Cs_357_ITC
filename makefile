CC = g++
CFLAGS = -std=c++11 -Wall -Wextra
LDFLAGS =

SRCS = circle.cpp circle.h
OBJS = $(SRCS:.cpp=.o)
TARGET = program

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)
