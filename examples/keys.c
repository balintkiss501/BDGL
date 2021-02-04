/*
 * Copyright (c) 2016 Balint Kiss <balint.kiss.501@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */
#include <BDGL/BDGL.h>

#include <stdio.h>

int main(int argc, char* argv[])
{
  BDGL_Bool running = BDGL_TRUE;
  BDGL_KeyEvent event;

  BDGL_InitializeSystem();

  while (running)
  {
    if (BDGL_PollKeyboard(&event))
    {
			printf("%s is %s (0x%0x %d)\n",
            BDGL_GetKeyName(&event),
						event.status == BDGL_KEY_PRESSED ? "PRESSED" : "RELEASED",
						event.key,
            event.key);

      if (event.key == BDGL_KEY_SCAN_ESCAPE && event.status == BDGL_KEY_PRESSED)
      {
        running = BDGL_FALSE;
      }
    }
  }

  BDGL_CleanupSystem();
  printf("Done\n");
  return 0;
}
