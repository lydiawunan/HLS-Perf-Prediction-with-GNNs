#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 920407246
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, signed char p_5, char p_11,
                 unsigned int p_13)
{
  unsigned long v_9;
  unsigned int v_7;
  double v;
  unsigned int result;
  v_9 = 31557UL;
  v_7 = ! (- p_13 % (unsigned int)((int)p + 39)) / 4294907365U;
  result = (unsigned int)((70UL % ((unsigned long)((int)((unsigned char)2.89929290219e+38)) % (
                                   v_9 + 198UL) + 350UL)) / (! (- v_9 % (unsigned long)(
                                                                ((int)p_11 - (int)((char)-903.006164551f)) + 192)) + 141UL));
  v = (double)v_7;
  result = (unsigned int)(- ((double)result / ((- v - (double)((int)p * (int)p_5)) + 277.)));
  return result;
}


