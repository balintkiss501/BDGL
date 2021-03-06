/*
 * Copyright (c) 2016 Balint Kiss <balintkissdev@gmail.com>
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
#include <stdlib.h>

int main(int argc, char* argv[])
{
  BDGL_BMPImage image;

  /* Create screen */
  BDGL_Screen *screen = BDGL_CreateScreen(BDGL_MODE_VGA_320x200_256_COLOR);
  if (!screen)
  {
    fprintf(stderr, "There was an error when creating screen.\n");
    return 1;
  }

  /* Load image from file */
  image = BDGL_LoadBMP(screen, "IMAGE.BMP");

  /* Initialize and display screen */
  BDGL_InitializeVideo(screen);

  /* Display image */
  BDGL_DrawBMPImage(screen, &image, 10, 10);
  delay(4000);

  /* Free resources */
  BDGL_DestroyBMPImage(&image);
  BDGL_DestroyScreen(screen);

  printf("Done\n");
  return 0;
}
