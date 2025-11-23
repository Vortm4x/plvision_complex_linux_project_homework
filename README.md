# Configure project

Configure Autotools environment
```bash
autoreconf -i
```
or
```bash
aclocal
autoconf
automake --add-missing
```

Generate Makefiles 
```bash
./configure [--prefix=INSTALL_PREFIX]
```

# Build & install
Build binaries
```bash
make
```

Install binaries
```bash
make install
```

Generate ldconfig .conf files 
```bash
sudo make link
```


# Cleanup
Remove generated ldconfig .conf files
```bash
sudo make unlink
```

Remove all auto-generated files (sudo for unlink)
```bash
sudo make clean-all
```
