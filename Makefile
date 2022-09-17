lcc := $(LCC_BIN)
src_files := $(wildcard src/*.c src/*/*.c )

game.gb: _build
	$(lcc) $(src_files) -o _build/game.gb

_build: clean
	mkdir _build

clean:
	rm -rf _build