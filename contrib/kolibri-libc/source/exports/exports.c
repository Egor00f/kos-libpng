#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <sys/dirent.h>
#include <ksys.h>
#include <shell_api.h>

ksys_coff_etable_t EXPORTS[] = {
    {"abs", abs},
    {"acos", acos},
    {"acosh", acosh},
    {"asin", asin},
    {"asinh", asinh},
    {"atan", atan},
    {"atan2", atan2},
    {"atanh", atanh},
    {"atoi", atoi},
    {"atol", atol},
    {"atoll", atoll},
    {"calloc", calloc},
    {"ceil", ceil},
    {"clearerr", clearerr},
    {"closedir", closedir},
    {"cos", cos},
    {"cosh", cosh},
    {"debug_printf", debug_printf},
    {"difftime", difftime},
    {"div", div},
    {"exit", exit},
    {"exp", exp},
    {"fabs", fabs},
    {"fclose", fclose},
    {"feof", feof},
    {"ferror", ferror},
    {"fflush", fflush},
    {"fgetc", fgetc},
    {"fgetpos", fgetpos},
    {"fgets", fgets},
    {"floor", floor},
    {"fmod", fmod},
    {"fopen", fopen},
    {"fputc", fputc},
    {"fputs", fputs},
    {"fread", fread},
    {"free", free},
    {"freopen", freopen},
    {"frexp", frexp},
    {"fseek", fseek},
    {"fsetpos", fsetpos},
    {"ftell", ftell},
    {"fwrite", fwrite},
    {"getchar", getchar},
    {"gets", gets},
    {"hypot", hypot},
    {"itoa", itoa},
    {"labs", labs},
    {"ldexp", ldexp},
    {"ldiv", ldiv},
    {"llabs", llabs},
    {"lldiv", lldiv},
    {"localtime", localtime},
    {"log", log},
    {"malloc", malloc},
    {"memccpy", memccpy},
    {"memchr", memchr},
    {"memcmp", memcmp},
    {"memcpy", memcpy},
    {"memmove", memmove},
    {"memset", memset},
    {"mktime", mktime},
    {"modf", modf},
    {"modfl", modfl},
    {"opendir", opendir},
    {"perror", perror},
    {"pow", pow},
    {"pow10", pow10},
    {"pow2", pow2},
    {"printf", printf},
    {"puts", puts},
    {"readdir", readdir},
    {"realloc", realloc},
    {"remove", remove},
    {"rename", rename},
    {"rewind", rewind},
    {"rewinddir", rewinddir},
    {"seekdir", seekdir},
    {"shell_printf", shell_printf},
    {"shell_puts", shell_puts},
    {"shell_putc", shell_putc},
    {"shell_getc", shell_getc},
    {"shell_gets", shell_gets},
    {"shell_cls", shell_cls},
    {"shell_exit", shell_exit},
    {"setbuf", setbuf},
    {"setvbuf", setvbuf},
    {"sin", sin},
    {"sinh", sinh},
    {"snprintf", snprintf},
    {"sprintf", sprintf},
    {"sqrt", sqrt},
    {"strcat", strcat},
    {"strchr", strchr},
    {"strcmp", strcmp},
    {"strcoll", strcoll},
    {"strcpy", strcpy},
    {"strcspn", strcspn},
    {"strerror", strerror},
    {"strlen", strlen},
    {"strncat", strncat},
    {"strncmp", strncmp},
    {"strncpy", strncpy},
    {"strpbrk", strpbrk},
    {"strrchr", strrchr},
    {"strrev", strrev},
    {"strspn", strspn},
    {"strstr", strstr},
    {"strtok", strtok},
    {"strxfrm", strxfrm},
    {"tan", tan},
    {"tanh", tanh},
    {"telldir", telldir},
    {"time", time},
    {"tmpfile", tmpfile},
    {"tmpnam", tmpnam},
    {"vprintf", vprintf},
    {"vsnprintf", vsnprintf},
    0
};
