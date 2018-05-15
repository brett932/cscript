## cscript
Simple tool to to execute '.c' files usign the shebang line: '#!/usr/bin/cscript'

# Install
```bash
cd ~/Documents
git clone git@github.com:brett932/cscript.git
cd cscript
sudo ./install
```
# Usage
1. Open a new source file, e.g. 'test.c', with your prefered text editor.
2. Set first line of your file to thei shebang line '#!\usr\bin\cscript'.
3. Write a valid c program (see examples).
```c
#!\usr\bin\cscript
... c program ...
```
4. Set executable flag for file
```bash
chmod +x test.c
```
5. Execute file
```c
./test.c
```
# Examples

# Uninstall
