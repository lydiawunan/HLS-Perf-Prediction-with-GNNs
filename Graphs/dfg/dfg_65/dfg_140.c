#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 811980318
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, unsigned long p_5[4][3][3], char p_9, long long p_13)
{
  char v_11;
  unsigned int v_7;
  unsigned long long v;
  char result;
  v_11 = (char)77;
  v_7 = (unsigned int)p_13;
  v = (unsigned long long)(! -29888804LL);
  result = (char)((unsigned long long)(~ p_9) / ((~ v * (unsigned long long)(! v_11) ^ (unsigned long long)(
                                                  p_13 / (long long)(
                                                  v_7 + 985U))) + 646ULL));
  v = (unsigned long long)(-31317LL + (long long)(- ((unsigned int)-5059038.98606 % (
                                                     v_7 + 73U) - - p)));
  result = (char)(((unsigned long long)(((unsigned int)result - p) * (unsigned int)(
                                        -15 & (int)((char)-459.711456299f))) + 
                   0ULL % ((v | 18446744072964690702ULL) + 228ULL)) % (unsigned long long)(
                  ((4294947308UL - (unsigned long)p % (p_5[3][2][1] + 194UL)) + (unsigned long)p) + 655UL));
  return result;
}


