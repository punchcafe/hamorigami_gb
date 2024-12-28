lcc := $(LCC_BIN)
src_files := $(wildcard src/*.c src/*/*.c music/*.c )

game.gb: _build
	$(lcc) $(src_files) -Wl-yo16 -Wm-yt1 external/src/gbt_player.s external/src/gbt_player_bank1.s -o _build/game.gb

_build/web.zip: game.gb _build/web 
	cd _build && zip web.zip web/*

_build/web: _build
	mkdir _build/web
	cp -r web _build/
	cp _build/game.gb _build/web/game.gb

_build: clean
	mkdir _build

clean:
	rm -rf _build