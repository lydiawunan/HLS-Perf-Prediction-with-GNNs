#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 273424841
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, unsigned long p_7, unsigned int p_9,
                 int p_11, unsigned int p_13)
{
  char v_21;
  unsigned long v_19;
  short v_17;
  unsigned char v_15;
  long long v_4;
  unsigned char v;
  unsigned int result;
  v_21 = (char)-25;
  v_19 = 18606UL;
  v_17 = (short)(((unsigned long)v_21 % ((v_19 & 25587UL) + 600UL)) * (unsigned long)p_9);
  if ((unsigned long)(! (~ p_9 >> (((unsigned long)p_9 - 4271472383UL) & 31UL))) >= 
      ! (48778UL % (v_19 + 234UL)) % ((unsigned long)-1.48452371292e+38f + 650UL)) {
    v_4 = (long long)(- ((p_9 * p_9) / (p_9 + 25U)));
    v = (unsigned char)((unsigned long long)(- p_7));
    result = (unsigned int)((long long)v + v_4 / (long long)((int)p + 220));
  }
  else {
    v_15 = (unsigned char)((p_9 - (unsigned int)v_17) * 8157U);
    result = (unsigned int)((p_11 ^ (int)-4908072742.5) % ((int)p + 271));
    result = (unsigned int)((double)((unsigned long)(p_11 - -3383) * (
                                     (unsigned long)p_13 / (p_7 + 652UL))) * (
                            2.79605739185e+38 * (double)v_15 - (double)(
                            result * (unsigned int)p)));
  }
  return result;
}


