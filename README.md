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

third one: rename "a.out" to "cfetch"; moving to executable from shell
```bash
$ chmod +X cfetch
$ mv cfetch /usr/bin/
```

done!
