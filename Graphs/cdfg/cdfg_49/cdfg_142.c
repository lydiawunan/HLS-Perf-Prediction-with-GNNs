#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 732635844
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, char p_5, float p_7)
{
  long long v_15;
  unsigned long long v_13;
  char v_11;
  signed char v_9;
  unsigned short v;
  unsigned long result;
  v_15 = (long long)p_7;
  v_13 = (unsigned long long)p_7;
  v_9 = (signed char)p_7;
  v_11 = (char)p;
  if ((unsigned long long)(! ((int)((signed char)p_7) - (int)v_9)) % (
      ((unsigned long long)v_11 / 18446744072697723969ULL << (v_13 & 63ULL)) + 326ULL) <= (unsigned long long)v_15) 
    result = (unsigned long)p;
  else {
    v = (unsigned short)(! 12521UL);
    result = (unsigned long)((long long)p % ((long long)(-35 - (int)v) % (
                                             (-28647LL << ((int)p_5 & 63)) + 281LL) + 728LL));
  }
  return result;
}


