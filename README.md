# CScript
Simple tool used to execute single file C programs using shebang line: `#!/usr/bin/cscript`
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
The cloned cscript repo folder may now be deleted if you wish
```bash
cd ..
rm -rf cscript/
```
### Security note:
Blindly trust a script from someone you do not know is dangerous!
I recomend inspecting any unknown files before executing them, especialy when executing with root permissions.
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
change directory to the 'example\_usage' directory
```shell
$cd ~/Documents/cscript/example_usage
```
1. Execute hello.c: `./hello.c`
```
Hello world!
```
2. Execute ls.c: `./ls.c`
```
.
..
ls.c
pwd.c
hello.c
```
3. Execute pwd.c: `./pwd.c`
```
/home/brett/Documents/cscript/example_usage
```
## Uninstall
```bash
cd ~/Documents/cscript
sudo ./uninstall
```
