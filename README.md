# cscript
Simple tool to to execute single file 'c' programs usign the shebang line: '#!/usr/bin/cscript'
## Requirements
* Linux operating system 
... tested on ubuntu 16.04, other linux based operating systems should work fine
* bash
... The file cscript us a bash shell script.
* gcc
... Neded to compile the c code
... To install on ubuntu use:
```bash
sudo apt install build-essential
```
## Install
```bash
cd ~/Documents
git clone git@github.com:brett932/cscript.git
cd cscript
sudo ./install
```
## Usage
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
## Examples

## Uninstall
