#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 202550173
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p)
{
  int v_13;
  unsigned short v_11;
  long long v_9;
  unsigned long v_7;
  unsigned int v_5;
  long v;
  unsigned short result;
  v_13 = (int)p;
  v_11 = (unsigned short)p;
  v_7 = (unsigned long)p;
  v_5 = (unsigned int)p;
  v = 45641L;
  if ((int)p == (int)v_11) {
    v_9 = 18LL;
    result = (unsigned short)57933;
    v_11 = (unsigned short)((v & (long)p) * 29L);
  }
  else {
    result = (unsigned short)((unsigned int)((int)p / ((int)v_11 / (v_13 + 519) + 1007)) * 4294907534U);
    v_7 = (unsigned long)(((unsigned int)p % (v_5 + 17U) + 592U) + 4294959628U);
    v_9 = (long long)((unsigned long)p * ((unsigned long)((unsigned int)p ^ v_5) - (unsigned long)(
                                          v - v)));
  }
  while (~ ((long)(~ result) * v) >= (long)(! p)) {
    result = v_9 % (long long)((v_7 - (unsigned long)((float)v_5 + 463.156707764f)) + 92UL);
    v_5 = (unsigned int)(2.9909076041e+38f + (float)result);
    v_7 = (unsigned long)((((int)p << 3) - (int)(- v_11)) - (int)v_11);
    result = (unsigned short)60389;
  }
  while_0_break: ;
  return result;
}


