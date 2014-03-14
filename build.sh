#!/bin/bash
gcc -DHAVE_CONFIG_H -I . -g -O2 -Wall -Wextra -Wno-unused-parameter \
  color.c commands.c display.c hash.c screen.c \
  top.c username.c utils.c version.c m_linux.c \
  -lm -ltermcap
