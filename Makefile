CC = gcc
BUILD_DIR = ./build/
EXE = ubuntu-shortcut-creator
PKGCONFIG = $(shell which pkg-config)
CFLAGS = $(shell $(PKGCONFIG) --cflags gtk+-3.0)
LIBS = $(shell $(PKGCONFIG) --libs gtk+-3.0)

all: ubuntu-shortcut-creator

ubuntu-shortcut-creator:
	$(CC) -o $(BUILD_DIR)$(EXE) ./src/main.c $(LIBS) $(CFLAGS)

clean:
	rm $(BUILD_DIR)$(EXE)

run:
	$(BUILD_DIR)$(EXE)

install-dependencies:
	sudo apt install libgtk-3-dev
