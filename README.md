# sutry

Injects wisdom into your command line experience, replacing `sudo`. Instead of `sudo`, run `sutry`. Can even run as a non elevated user, safely!


### Usage
Example:
```bash
sutry ps aux
```
or also 
```bash
sutry netstat -tulpn
```

### Installation
Should be compatible with anything supporting configure and make.
1. `./configure`
1. `make`
1. `make install`
1. `sutry [admin command]`

If make/configure aren't working for you, you can go super manual mode and compile it yourself:
1. `gcc -o sutry main.c`
1. `./sutry [admin command]`
