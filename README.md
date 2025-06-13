# cfetch
Simple bash-like command, maded in c: based in srbfetch (https://codeberg.org/diabloblanco/srbfetch)

# what this blc making ?
Showing mini system info.

# how to build ?
first command: compiling vars.h (sysinfo)
```bash
$ bash vars.sh
```

second one: lets compile our cfetch.c
```bash
$ clang cfetch.c
```
if you not have clang:
```bash
# Debian, debian-based:
    sudo apt install clang
# Arch Linux, arch-based:
    sudo pacman -S clang
# BSD-Systems:
    zypper install clang
```

third one: rename "a.out" to "cfetch"; moving to executable from shell
```bash
$ chmod +X cfetch
$ mv cfetch /usr/bin/
```

done!
