#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 931686518
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, int p_9)
{
  char v_11;
  signed char v_7;
  signed char v_5;
  long v;
  short result;
  v_11 = (char)p_9;
  v_7 = (signed char)p;
  v_5 = (signed char)p_9;
  result = (short)p;
  result = (short)(((unsigned long)(4294954264U - (unsigned int)result) * (
                    25714UL % (unsigned long)((int)v_7 + 940)) - (unsigned long)p_9) << (
                   ! ((29162LL * (long long)result) / (long long)((int)v_11 / (
                                                                  (int)v_5 + 143) + 708)) & 31LL));
  v_5 = v_7;
  v = (long)((int)((signed char)9208177664.f) + (int)v_5);
  result = (short)((((v - 56905L) + (long)result) - (long)result) / (
                   ! (~ (~ p)) + 502L));
  return result;
}


