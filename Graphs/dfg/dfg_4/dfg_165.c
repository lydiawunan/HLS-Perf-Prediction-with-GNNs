//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 732239439
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, long long p_9, float p_13)
{
  int v_17;
  float v_15;
  unsigned short v_11;
  signed char v_7;
  long v_4;
  short v;
  double result;
  v_17 = (int)p;
  v_15 = 777.774169922f;
  v_11 = (unsigned short)46005;
  v_4 = (long)p;
  v = (short)p_9;
  result = (double)p_13;
  v_7 = (signed char)((int)((float)(~ v) * (- v_15 + (float)p)) - (v_17 + (int)p));
  v = (short)(((long long)((v_4 - (long)p) * (long)(- result)) - (long long)v_4 / (
                                                                 ((long long)v_7 + p_9) + 438LL)) + (long long)(
              (float)v_11 / (2646.f / (((float)p_9 + p_13) + 921.f) + 264.f)));
  result = (double)(- v);
  return result;
}


