#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 198758421
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, unsigned char p_5, unsigned char p_11,
         signed char p_13, int p_15)
{
  int v_21;
  unsigned int v_19;
  unsigned int v_17;
  unsigned char v_9;
  unsigned long long v_7;
  unsigned long v;
  char result;
  v_21 = 138605640;
  v_19 = 40198U;
  v_17 = (unsigned int)p_11;
  v_7 = 988577790ULL;
  while (v_19 >> ((1891ULL + (unsigned long long)(-26509LL + (long long)p_15)) & 31ULL) == (unsigned int)p_15) {
    v_17 = (unsigned int)((unsigned long)(-4 % ((int)p + 602)) - 57770UL * (unsigned long)p_13);
    v_21 = (int)((((unsigned long)p_11 + 4294950253UL) ^ 26794UL) * - (
                 356489321UL + (unsigned long)v_21));
    v_19 = (unsigned int)(! (18446744072819217866ULL << ((v_7 & v_7) & 63ULL)));
  }
  while_0_break: ;
  if ((unsigned long long)(- ((int)p_11 - (int)(~ p_11))) == (unsigned long long)(
                                                             (unsigned int)p_13 * (
                                                             v_17 / (unsigned int)(
                                                             (int)p_11 + 5))) % 73809ULL) {
    v_9 = (unsigned char)1329886208.f;
    v = (unsigned long)(! (~ v_7) - (304322760ULL + (unsigned long long)(
                                     4294919734UL * (unsigned long)v_9)));
    result = (char)(- ((v + (unsigned long)p) | (unsigned long)(~ p_5)));
  }
  else result = (char)((unsigned long long)(- (- p_11)) + (unsigned long long)(- p_13) * (
                                                          (unsigned long long)p_15 - 50823ULL));
  return result;
}


