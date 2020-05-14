# MIT License

# Copyright (c) 2020 Johanan Idicula

# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:

# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

CC = /usr/bin/gcc
CFLAGS = -Wextra -Wpedantic

# Project files
SRCS = calc.c operations.c
OBJS = $(SRCS:.c=.o)
EXE = calculator
DEPS = %.h

.PHONY: clean

###############################################################################
#                                Release rules                                #
###############################################################################
# Create final executable
$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile and assemble source into object files
%.o: %.c $(DEPS)
	$(CC) -c $(CFLAGS) -o $@ $<

# Clean rules
clean:
	rm -f $(EXE) $(OBJS)
