#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 793250598
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, double p_4)
{
  unsigned short v_13;
  long v_11;
  signed char v_9;
  signed char v_7;
  long long v;
  signed char result;
  v_13 = (unsigned short)p;
  v_11 = (long)p_4;
  v_9 = (signed char)p_4;
  v = -54500LL;
  result = p;
  v_7 = (signed char)((int)result / ((int)((signed char)((p_4 - -76.) - (double)(
                                                         (int)p & 20137))) + 715));
  while ((int)((double)((v / 1022793144LL) % (v + 811LL)) / (p_4 + 155.)) == 
         (int)(- (p_4 / ((double)v_7 + 683.))) / (((int)v_9 >> ((int)p & 7)) + 24)) {
    v_7 = (signed char)(- (- p_4 * (double)((long long)v_11 * 654984411LL)));
    result = (signed char)(p_4 / ((double)(~ v % (long long)(((int)v_9 ^ 25581) + 704)) + 215.));
    v = (long long)((int)p % (((int)v_9 - (int)v_13) % ((int)v_13 + 7) + 316));
  }
  while_0_break: ;
  return result;
}


