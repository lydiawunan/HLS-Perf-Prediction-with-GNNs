#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 258991655
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, unsigned short p_4, unsigned int p_7, int p_9,
          unsigned char p_15)
{
  char v_13;
  long v_11;
  double v;
  float result;
  v_13 = (char)p;
  result = 79.6928253174f;
  v_11 = (long)(((unsigned int)(! (17374 * (int)v_13)) + ((unsigned int)p_15 / 3677U) % (
                                                         p_7 + 588U)) - (unsigned int)(
                63.f + result));
  v = (double)v_11;
  result = (float)(- ((4294914327U % (((unsigned int)v ^ p_7) + 264U)) / (unsigned int)(
                      p_9 + 6)));
  result = - ((float)p + - ((float)p_4 / (result + 550.f)));
  return result;
}


