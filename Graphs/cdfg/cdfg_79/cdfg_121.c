#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 469567202
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, unsigned long long p_4, float p_6, unsigned int p_9,
        signed char p_11)
{
  unsigned int v_13;
  int v;
  int result;
  v_13 = (unsigned int)p;
  v_13 = (unsigned int)(((float)(p * (long long)v_13) * 3576010752.f) / (
                        (float)(-699364961LL % (p + 930LL)) + 87.f));
  if (760766902ULL % (unsigned long long)(v_13 + 586U) <= p_4 % (4294921895ULL / (
                                                                 p_4 + 353ULL) + 605ULL)) 
    result = (int)((unsigned long long)(~ (p - 992782195LL)) % (! p_4 % (
                                                                (unsigned long long)(- p_6) + 799ULL) + 288ULL));
  else {
    v = (int)p_11;
    result = (int)(~ ((unsigned int)v % (~ p_9 + 482U)));
  }
  return result;
}


