#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 54500210
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, char p_13)
{
  long v_15;
  short v_11;
  char v_9;
  signed char v_7;
  unsigned long long v_5;
  unsigned long v;
  int result;
  v_15 = -410962169L;
  v_11 = (short)796;
  v_7 = (signed char)p_13;
  v_5 = (unsigned long long)p_13;
  v = 4294960169UL;
  result = (int)p_13;
  if (v_15 >= ~ (- v_15 % 19575L)) {
    v_5 = (unsigned long long)(! v_11);
    v_7 = (signed char)(360.182089107 - (double)(((int)v_11 + (int)p) + 
                                                 (int)v_11 / 2513));
    v_9 = (char)p;
  }
  else {
    v_15 = ~ (- v_15 % (long)((-112 - (int)p_13) + 568));
    v_9 = (char)(v_15 % (long)((int)(~ p) + 849));
    result = (int)(~ v_7);
  }
  while (~ (- (- v)) >= (unsigned long)p) {
    v_5 = (double)v_9 * ((double)v_7 / ((double)v_5 / -1.48761932999e+38 + 7.));
    v_11 = (short)(! ((int)(! p_13) / ((int)p + 669)));
    result = (int)v_11;
    v = (unsigned long)p;
  }
  while_0_break: ;
  return result;
}


