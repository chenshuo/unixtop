/* This file was automatically generated */
/* by the awk script "sigconv.awk".      */

struct sigdesc {
    char *name;
    int  number;
};

struct sigdesc sigdesc[] = {
    { "HUP",	 1 },
    { "INT",	 2 },
    { "QUIT",	 3 },
    { "ILL",	 4 },
    { "TRAP",	 5 },
    { "ABRT",	 6 },
    { "BUS",	 7 },
    { "FPE",	 8 },
    { "KILL",	 9 },
    { "USR1",	10 },
    { "SEGV",	11 },
    { "USR2",	12 },
    { "PIPE",	13 },
    { "ALRM",	14 },
    { "TERM",	15 },
    { "STKFLT",	16 },
    { "CHLD",	17 },
    { "CONT",	18 },
    { "STOP",	19 },
    { "TSTP",	20 },
    { "TTIN",	21 },
    { "TTOU",	22 },
    { "URG",	23 },
    { "XCPU",	24 },
    { "XFSZ",	25 },
    { "VTALRM",	26 },
    { "PROF",	27 },
    { "WINCH",	28 },
    { "IO",	29 },
    { "PWR",	30 },
    { "SYS",	31 },
    { NULL,	 0 }
};
