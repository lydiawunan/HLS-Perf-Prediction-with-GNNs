#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 852886304
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, unsigned char p_4, short p_9, unsigned int p_11,
              unsigned short p_15)
{
  long long v_21;
  int v_19;
  unsigned long long v_17;
  unsigned int v_13;
  unsigned long long v_7;
  unsigned long long v;
  long long result;
  v_21 = 51766LL;
  v_19 = (int)p_9;
  v_17 = 88931726ULL;
  v_13 = (unsigned int)p;
  v_7 = (unsigned long long)p;
  result = -54125LL;
  if (p % 104559075LL <= ~ (- (- result))) {
    v_7 = ((unsigned long long)(p - (long long)p_4) + (unsigned long long)p_15 % (
                                                      v_17 + 293ULL)) % 54963ULL;
    result = (long long)p_4;
    v = (unsigned long long)((long long)p_4 / (((long long)v_13 * result + (long long)(~ p_15)) + 529LL));
  }
  else {
    v = (unsigned long long)v_19;
    v_21 = (long long)(! ((v_7 + 155772952ULL) - (unsigned long long)(
                          (long long)p_11 + v_21)));
    v_7 = (unsigned long long)p_9 % ((((unsigned long long)v_19 & v_7) - (unsigned long long)v_21) + 929ULL);
  }
  while ((float)((unsigned long long)(! (p % (result + 100LL))) * ((unsigned long long)(
                                                                   14 + (int)p_4) - ~ v)) != - (
         (float)p_4 - -328.630187988f)) {
    result = v_7 - 18446744073665731060ULL;
    v_7 = 18446744073709505389ULL;
    v = (unsigned long long)p_9;
  }
  while_0_break: ;
  return result;
}


