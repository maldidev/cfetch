// main file
#include <stdio.h>
#include "./vars.h"
#include <string.h>
// RESET ALL COLORS (0m)
#define VERSION "13.6"
#define RESET "\033[0m"
#define BLACK "\033[0m"
#define YELLOW "\033[0m"
#define WHITE "\033[0m"
#define BLUE "\x1b[0m"
#define RED "\x1b[0m"
#define BGWH "\033[0m" // White backgroud
#define BGRD "\x1b[0m" // Red background
#define BGBL "\x1b[0m" // Blue Background
#define SEPARATOR "~ "
const char osname[] = get_kernel;

void linux_fetch(void) {
    printf(
        BGRD RED   " ∆ ∆ " RESET RED " kakaha" RESET BLUE "C" RESET WHITE "32 " RESET "Fetch " VERSION "\n"
        BGRD RED   "(>.<)" RESET  " kern " SEPARATOR get_kernel " " get_kernel_ver "\n"
        BGBL BLUE  "(...)" RESET  " sh " SEPARATOR get_shell "\n"
        BGBL BLUE  "     " RESET  " host " SEPARATOR get_hostname "\n\n"
    );
}
int main() {
            if(strcmp(osname, "Linux")   == 0)   { linux_fetch();   }
            //else if(strcmp(osname, "OpenBSD") == 0)   { srb_openbsd(); }
            //else if(strcmp(osname, "NetBSD")  == 0)   { srb_netbsd();  }
            //else if(strcmp(osname, "FreeBSD") == 0)   { srb_freebsd(); }
            //else { srb_unknown(); }
            else { printf("Your OS is not supported!\n"); return 1; }
}
