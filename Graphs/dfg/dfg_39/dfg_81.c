#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 52486936
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, unsigned long long p_9)
{
  signed char v_6;
  signed char v_4;
  short v;
  long long result;
  result = 60941078LL;
  v_4 = (signed char)(0ULL - p_9);
  v = (short)(~ (~ ((long long)((int)((signed char)-984.827031614) * (int)v_4) / (
                    (long long)p % -15583LL + 580LL))));
  v_6 = (signed char)(((long long)(-30255 + (int)p) & result) ^ (long long)(
                      (int)((unsigned short)(-2.41938053638e+38f - (float)(
                                             (int)v % ((int)v_4 + 426)))) + 37868));
  result = ((long long)((int)v * -27222) * (result + (long long)v_4) & (long long)(~ (
            (int)v - 216))) + (long long)(~ v_6);
  return result;
}


