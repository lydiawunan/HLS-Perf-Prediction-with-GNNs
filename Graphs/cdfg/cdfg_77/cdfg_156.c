#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 362068606
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, unsigned long p_4, unsigned char p_6,
                   unsigned char p_8, unsigned long long p_10)
{
  unsigned short v_15;
  unsigned long long v_13;
  double v;
  unsigned short result;
  v_15 = (unsigned short)p_8;
  v = 1810714124.94;
  v_13 = (unsigned long long)p_4;
  if (18446744073709551592ULL % (((unsigned long long)v & v_13) * (unsigned long long)(
                                 (int)p_8 - (int)v_15) + 664ULL) <= 18446744073709551584ULL) 
    result = (unsigned short)((p * p_4) * (p * p) ^ (unsigned long)((int)(! p_6) % (
                                                                    (int)p_8 + 688)));
  else result = (unsigned short)p_10;
  return result;
}


