#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 402191250
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, unsigned long long p_4, int p_6,
          unsigned long p_9, double p_13[3][2])
{
  unsigned short v_21;
  long long v_19;
  unsigned int v_17;
  signed char v_15;
  char v_11;
  char v;
  float result;
  v_21 = (unsigned short)50485;
  v_19 = -471149481LL;
  v_17 = (unsigned int)p_13[0][1];
  v_11 = (char)p_4;
  v = (char)p_4;
  if (121ULL != (18446744073709551578ULL + p_4 / (unsigned long long)(
                                           (int)v_21 + 561)) % (unsigned long long)(
                p_9 + 658UL)) {
    v_21 = (unsigned short)p_6;
    v_19 = 74LL;
    result = (float)(! (((unsigned long long)v_11 * 18446744073070657764ULL) % (unsigned long long)(
                        (int)p / ((int)v_21 + 857) + 995)));
  }
  else {
    v = (char)(32 * (int)((unsigned char)(p_13[0][1] * (double)v + (double)(
                                          p_9 - 4294967233UL))));
    v_11 = (char)((long long)((unsigned long)p * ((unsigned long)v + p_9)) - 
                  414879545LL % ((long long)p_13[1][0] + 14LL));
    result = (float)(! v_11);
  }
  if ((long long)(- (p_13[2][0] * 4294939392. - (double)(41503.f - result))) >= 
      (64579LL * v_19 - (long long)((long)v_21 % -192932379L)) + 40LL) {
    v_11 = (char)(4091482219. * (p_13[1][1] * (double)result) - 4123308665.);
    v = v_11;
    result = (float)(((unsigned long long)(! p) & ~ p_4) | (unsigned long long)(
                     (unsigned long)(-240 / (p_6 + 347)) * ((unsigned long)v % (
                                                            p_9 + 392UL))));
  }
  else {
    v_15 = (signed char)(18446744072745268458ULL / (((unsigned long long)result % 31793ULL) * (unsigned long long)(- p_6) + 243ULL));
    result = (float)(p_13[0][1] / ((double)((int)(! p) % 105) + 672.));
    result = (float)((unsigned int)(result - (float)(~ v_15)) - ! (~ v_17));
  }
  return result;
}


