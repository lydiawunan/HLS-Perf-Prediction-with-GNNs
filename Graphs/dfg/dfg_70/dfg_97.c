#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 731162978
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, short p_9[2][1], unsigned short p_11)
{
  unsigned short v_6;
  long v_4;
  unsigned int v;
  unsigned int result;
  v_4 = (long)p_11;
  v_6 = (unsigned short)p_9[0][0];
  v = (unsigned int)(p / (p + 350L));
  result = (unsigned int)(- ((double)(- (948.44543457f + (float)v)) - 
                             (double)(v_4 * 57325L) / ((double)v_6 * 232.057670347 + 900.)));
  return result;
}


