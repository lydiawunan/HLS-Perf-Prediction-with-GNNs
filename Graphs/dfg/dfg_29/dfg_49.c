#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 948413587
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, unsigned long p_9[4], signed char p_11,
        signed char p_13)
{
  signed char v_15;
  signed char v_7;
  short v_4;
  float v;
  int result;
  v_15 = p_11;
  v_4 = (short)((int)(- (! p_13)) >> ((int)(! (~ v_15)) & 7));
  v_7 = (signed char)((630062480LL | (long long)((unsigned long)p / (
                                                 p_9[3] + 112UL) + (unsigned long)p_11)) & 252LL);
  v = (float)v_7;
  result = (int)(v * (float)((unsigned int)(~ v_4) / (((p << 17LL) + 4294967198U) + 178U)));
  return result;
}


