#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 142821335
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, double p_7)
{
  unsigned long long v_5;
  unsigned long long v;
  unsigned short result;
  v_5 = (unsigned long long)p_7;
  v = 870378333ULL;
  result = (unsigned short)((int)p << ((int)((char)p_7) & 7));
  v = (((unsigned long long)(-795052954LL - (long long)p) + (4294924544ULL + v_5)) ^ 
       18446744073709500396ULL / (v + 390ULL)) % (unsigned long long)(
      (int)p + 990);
  result = (unsigned short)((v / 16382ULL) / (unsigned long long)((int)result + 447));
  result = result;
  return result;
}


