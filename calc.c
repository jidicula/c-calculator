/* calc.c */
/* MIT License
 *
 * Copyright (c) 2020 Johanan Idicula
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE. 
 */
#include <stdio.h>
#include <stdlib.h>
#include "operations.h"

int main(int argc, char *argv[])
{
	int num1;
	char operation;
	int num2;
	int result;

	if (argc != 4)
		return EXIT_FAILURE;
	num1 = atoi(argv[1]);
	operation = argv[2][0];
	num2 = atoi(argv[3]);

	switch (operation) {
	case '+':
		result = add(num1, num2);
		break;
	case '-':
		result = subtract(num1, num2);
		break;
	case '*':
		result = multiply(num1, num2);
		break;
	case '/':
		result = divide(num1, num2);
		break;
	}

	printf("%d\n", result);

	return EXIT_SUCCESS;
}
