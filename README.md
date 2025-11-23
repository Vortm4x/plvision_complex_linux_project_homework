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

# Cleanup
Remove all auto-generated files
```bash
make clean-all
```
