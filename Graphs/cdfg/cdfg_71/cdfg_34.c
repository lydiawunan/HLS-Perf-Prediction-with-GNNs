#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 703829985
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, long p_4, unsigned char p_7, signed char p_9,
          unsigned int p_19)
{
  signed char v_23;
  unsigned int v_21;
  int v_17;
  long v_15;
  unsigned int v_13;
  unsigned short v_11;
  unsigned long long v;
  float result;
  v_23 = (signed char)49;
  v_17 = 6883;
  v_15 = -22658L;
  v_13 = 44117U;
  if (! ((int)1.20953825153e+38f - ((int)p_9 + (int)p_7)) > v_17) {
    v_11 = (unsigned short)((unsigned long long)((unsigned long)((unsigned int)p_9 - v_13) + (
                                                 (unsigned long)v_15 + (unsigned long)v_13)) + 
                            (unsigned long long)(~ v_17) % (((unsigned long long)p_19 + 50365ULL) + 360ULL));
    v = (unsigned long long)((int)v_11 ^ (int)((unsigned short)-5014683487.01));
    result = (float)p_9;
  }
  else {
    v_21 = (unsigned int)((unsigned long)(- (-87 - (int)v_23)) * ((unsigned long)(! p) + 4294896220UL));
    v = (unsigned long long)(! ((unsigned int)(- p_7) % ((p_19 + 213U) + 27U)));
    result = (float)v_21;
  }
  while ((int)(- (((float)p - result) - (float)((unsigned long)p_4 ^ 4294952237UL))) < ! (
         (int)p + (int)p)) {
    v = (double)v - -4567143872.66;
    result = (float)((int)p | ~ (239 | (int)p_7));
  }
  while_0_break: ;
  return result;
}


