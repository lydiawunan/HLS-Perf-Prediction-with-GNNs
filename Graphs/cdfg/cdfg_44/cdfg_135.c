#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 472981915
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, unsigned long p_5, unsigned long p_7,
                 signed char p_11)
{
  char v_23;
  char v_21;
  double v_19;
  unsigned long long v_17;
  signed char v_15;
  unsigned short v_13;
  unsigned int v_9;
  unsigned int v;
  unsigned int result;
  v_21 = (char)107;
  v_19 = (double)p_11;
  v_17 = (unsigned long long)p_11;
  v_15 = (signed char)79;
  v_13 = (unsigned short)34943;
  v_9 = 3236133905U;
  result = (unsigned int)p_5;
  while ((! p_7 / 4294967282UL) / (unsigned long)((int)v_15 + 888) != (unsigned long)(
         ((double)(v_17 | 18446744073709515039ULL) + v_19) * (double)result)) {
    v_23 = (int)v_21 / 35;
    v_17 = (unsigned long long)(! (- v_9) - (unsigned int)(380.013030705 + 
                                                           714.302942233 / (
                                                           (double)v_23 + 44.)));
    v_21 = (char)v_15;
    result = (unsigned int)p_5;
  }
  while_0_break: ;
  if (~ ((int)(- p_11) * (int)(~ v_13)) <= (int)v_15) result = (unsigned int)(
                                                      (float)(- p) - -9.85063773419e+36f);
  else {
    v = (unsigned int)(- (p_7 + (unsigned long)(- v_9)));
    v = (unsigned int)(~ (- (p_5 % (unsigned long)(v + 970U))));
    result = - v;
  }
  return result;
}


