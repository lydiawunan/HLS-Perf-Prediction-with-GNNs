#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 433638841
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p, short p_4, float p_6[5][4], long p_8[3][2],
         unsigned long p_10)
{
  long result;
  result = (long)(- (p_6[3][1] * (float)p_4) - (float)(- p_10 % ((p - p) + 809UL)));
  if ((unsigned long)(((int)p_4 * (int)((short)p_6[0][1]) + 122) * (int)(
                      564.544555664f - (float)(- result))) <= ! (- ((unsigned long)p_8[1][1] % (
                                                                    p_10 + 794UL)))) 
    result = (long)p;
  else result = -3L;
  return result;
}


