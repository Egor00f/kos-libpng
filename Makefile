LINUX_TOOLCHAIN_PATH = /home/autobuild/tools/win32

PathToLibpng = contrib/sdk/sources/libpng

install libpng16.a libpng16.dll clean:
	$(MAKE) -C $(PathToLibpng) $@

kos-libpng-dev: libpng16.a libpng16.dll
	mkdir -p $@$(LINUX_TOOLCHAIN_PATH)/include
	mkdir -p $@$(LINUX_TOOLCHAIN_PATH)/mingw32/lib

	cp -f $(PathToLibpng)/*.h $@$(LINUX_TOOLCHAIN_PATH)/include
	cp -f $(PathToLibpng)/*.a $@$(LINUX_TOOLCHAIN_PATH)/mingw32/lib

	dpkg-deb --build $@ $@.deb
