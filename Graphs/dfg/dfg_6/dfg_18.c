//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 436665517
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, unsigned long long p_7)
{
  signed char v_13;
  unsigned long v_11;
  unsigned long v_9;
  signed char v_5;
  short v;
  long long result;
  v_9 = (unsigned long)p;
  v_5 = (signed char)p_7;
  result = (long long)p_7;
  v_13 = p;
  v_11 = 31UL * - ((4294915523UL << ((int)v_13 & 31)) << (p_7 & 31ULL));
  v = (short)v_11;
  result = (long long)((unsigned long long)((long long)p / (- (- result) + 199LL)) % (
                       ((unsigned long long)(((int)v + (int)v_5) - (int)p) + 
                        - p_7 * (unsigned long long)(154877555UL * v_9)) + 740ULL));
  return result;
}


