#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 311355422
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, double p_5, int p_7)
{
  unsigned int v_17;
  long long v_15;
  unsigned int v_13;
  long v_11;
  unsigned long long v_9;
  unsigned int v;
  float result;
  v_17 = 4294931920U;
  v_15 = (long long)p;
  v_13 = 66528675U;
  v_11 = (long)p;
  v = 4294964357U;
  result = (float)p_5;
  while ((unsigned int)p_7 >= (v & 18U / ((8249U - v_13) + 949U))) {
    v = (unsigned long long)v_17 + 795599055ULL;
    v_17 = (unsigned int)p_5;
    v_13 = (unsigned int)(- ((unsigned long)(~ v_11)));
    v = (unsigned int)((unsigned long)v - (unsigned long)v_11);
  }
  while_0_break: ;
  if ((long long)v_13 >= ((long long)-5.12188495242e+37f % (v_15 / 42954LL + 595LL) | (long long)p_7)) 
    result = (float)(-852964100ULL);
  else {
    v_9 = (unsigned long long)(- (~ v));
    v = (unsigned int)((float)((unsigned long long)(p_5 / (double)(result + 926.f)) - 
                               43159ULL % (unsigned long long)(p_7 + 949)) + (
                       - result + (float)(v_9 - (unsigned long long)v_11)));
    result = (float)(47685764UL % (((p - 19346UL) - (p + (unsigned long)v)) + 119UL));
  }
  return result;
}


