#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 499093937
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, unsigned int p_5, unsigned char p_7,
                       unsigned char p_9, unsigned char p_11[4][3])
{
  int v_15;
  float v_13;
  int v;
  unsigned long long result;
  v_15 = (int)p_7;
  v_13 = (float)p;
  v = (int)p_9;
  while ((unsigned int)(((int)((char)((double)p / -9360847042.76)) / 351) % (
                        - ((int)p / ((int)p_9 + 949)) + 343)) == (unsigned int)p_11[2][0] / (
                                                                 (! p_5 | (unsigned int)(- v_13)) + 968U)) {
    result = (unsigned long long)(- (v_15 + v) & ~ ((int)((char)v_13) * (int)p));
    v_15 = (int)(- (~ (409365061UL + (unsigned long)v)));
    v_13 = (float)(1ULL ^ - result);
  }
  while_0_break: ;
  if (961322491UL * (unsigned long)v < (unsigned long)((int)p_9 - ((int)p_11[3][1] * 3242 + (int)-1.60080520107e+38f))) 
    result = (unsigned long long)p;
  else {
    result = (unsigned long long)((~ p_5 * (unsigned int)(! v)) * (unsigned int)(
                                  34209 + (int)p_7));
    result = ! result;
    result += (unsigned long long)v;
  }
  return result;
}


