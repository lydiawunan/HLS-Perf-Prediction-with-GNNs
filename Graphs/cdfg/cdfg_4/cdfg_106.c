#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 191547477
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, unsigned long p_15[5])
{
  int v_13;
  unsigned short v_11;
  unsigned short v_9;
  float v_7;
  long v_5;
  long v;
  short result;
  v_13 = (int)p;
  v_11 = (unsigned short)47050;
  v_9 = (unsigned short)49567;
  v_7 = (float)p_15[3];
  v_5 = (long)p_15[4];
  v = -31763L;
  result = (short)p_15[3];
  while (-1501 >= (int)((short)((float)((long)p ^ v_5) / (p / (v_7 + 266.f) + 846.f) + (float)(! v_9)))) {
    v = v_13 - ((int)v_11 + 147);
    v_7 = (float)(! (~ ((int)result / 20538)));
    result = (short)((unsigned long)(- (v_7 / 20777.f)) - p_15[3]);
    v_9 = (unsigned short)p;
  }
  while_0_break: ;
  result = (short)(! ((long)((int)result << 2ULL) - v % 45L));
  return result;
}


