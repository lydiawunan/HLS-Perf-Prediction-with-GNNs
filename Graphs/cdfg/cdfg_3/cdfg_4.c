#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 747295302
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, long p_4, unsigned long p_9, char p_11,
          signed char p_15)
{
  unsigned long long v_13;
  signed char v_7;
  unsigned long v;
  float result;
  v_13 = 11878ULL;
  if (v_13 == (unsigned long long)(666991055U / (unsigned int)((114 | (int)p_15) + 255))) {
    result = (float)(! p);
    v = p_9;
    result = (float)(- ((unsigned long)p_4 * v) % ((unsigned long)(result + (float)(
                                                                   (int)((unsigned char)result) * 141)) + 485UL));
  }
  else {
    v = 4294940034UL / (unsigned long)((unsigned int)2.5380892485e+38 / 352878686U + 761U);
    result = (float)p_11;
  }
  while ((unsigned long)(! (p % 3269823571U) + (unsigned int)(- (849.926513672f - result))) != (unsigned long)(- (~ (
         p_4 % ((long)result + 920L))))) {
    v_7 = v + 31148UL;
    v = (unsigned long)(-398364679);
    v_7 = v_7;
    result = - -932.688964844f;
  }
  while_0_break: ;
  return result;
}


