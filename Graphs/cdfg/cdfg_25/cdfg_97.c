#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 527339811
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, long p_4, unsigned long long p_7,
                       unsigned char p_9, unsigned char p_13)
{
  unsigned long v_17;
  char v_15;
  unsigned int v_11;
  double v;
  unsigned long long result;
  v_17 = (unsigned long)p_4;
  v_15 = (char)-62;
  v_11 = (unsigned int)p_4;
  v = -1066837270.55;
  result = (unsigned long long)p_9;
  while ((unsigned long long)((int)(- p / ((float)(- p_13) + 145.f)) | 
                              (-98 * (int)p_9) % ((int)((double)p_7 - v) + 843)) == 
         (unsigned long long)(753738112.f + p / ((float)p_4 + 1011.f)) - 
         ~ p_7 * (unsigned long long)((long)p_9 + p_4)) {
    result = (unsigned long long)v_15;
    v_11 = (unsigned int)(((unsigned long long)(v_17 - 23907UL) * (p_7 % (
                                                                   (unsigned long long)v + 306ULL))) * (unsigned long long)p_9);
    v = (double)p_7;
  }
  while_0_break: ;
  if ((unsigned long long)(~ ((long long)p * ((long long)p_13 | 731546452LL))) < result) 
    result = (unsigned long long)(! (965479932UL & (unsigned long)((long)p * p_4)));
  else {
    v = (double)((unsigned int)p_9 % (- v_11 / ((unsigned int)-2.47237989244e+38f + 316U) + 627U));
    result = (unsigned long long)((double)((unsigned long)2.01427652135e+38f / 367836399UL) / (
                                  (- v - (double)(p_7 * 18446744073709530960ULL)) + 249.));
    result = ! result;
  }
  return result;
}


