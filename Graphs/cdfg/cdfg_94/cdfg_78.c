#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 855151413
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, long p_9, unsigned int p_11)
{
  unsigned long long v_7;
  long v_5;
  unsigned short v;
  unsigned short result;
  v_7 = 58268ULL;
  v_5 = -239421821L;
  v = (unsigned short)63875;
  result = (unsigned short)p;
  v = (unsigned short)((v_7 % 97ULL) / ((p & (unsigned long long)v_5) + 226ULL) + (unsigned long long)(
                       (unsigned int)((int)v * 41052) + p_11 * 27758U));
  while ((unsigned long long)v >= ~ (45611ULL / (p + 768ULL) & 700941802ULL)) {
    v_7 += 4294930892ULL;
    result = (unsigned short)(p | (unsigned long long)(v_5 / -4645L));
    result = result;
    v = (unsigned short)((unsigned long long)(~ (~ p_9)) % (! p % (unsigned long long)(
                                                            ((int)((unsigned short)-7532712844.29) + (int)v) + 96) + 928ULL));
  }
  while_0_break: ;
  return result;
}


