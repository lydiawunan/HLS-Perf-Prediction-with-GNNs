#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 681169192
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, unsigned long long p_5, long long p_9, long p_11,
          float p_13)
{
  signed char v_27;
  double v_25;
  char v_23;
  int v_21;
  long v_19;
  unsigned int v_17;
  unsigned short v_15;
  long v_7;
  unsigned long long v;
  short result;
  v_27 = (signed char)p_11;
  v_25 = -2641782389.65;
  v_23 = (char)p;
  v_21 = (int)p;
  v_19 = 24473L;
  v_17 = 4294927646U;
  v_15 = (unsigned short)57912;
  v_7 = -242460100L;
  v = 173304835ULL;
  if ((unsigned long)(12 % (((int)((unsigned short)((double)v_23 - v_25)) | (int)v_15) + 488)) <= 
      (unsigned long)v_27 * (4294951741UL + (426388916UL | (unsigned long)v_17))) {
    v = ~ (((unsigned long long)p_9 & v) - (unsigned long long)(-994563619LL * p_9));
    result = (short)(! (v + p_5) % (unsigned long long)(p + 972L));
    v_7 = (long)(-52380LL ^ (long long)((long)(- p_13) + ~ p_11));
  }
  else {
    v_7 = (long)(- (p_13 + (float)p_9) / ((float)((-19296L - v_19) + 
                                                  v_7 * (long)v_21) + 339.f));
    v_17 = (unsigned int)(((unsigned long)(- v_17) - (unsigned long)(- p)) - (unsigned long)(
                          p_13 + 4145450496.f));
    result = (short)(369407563LL / (long long)(((unsigned long)(- p_11) - (unsigned long)(
                                                (unsigned int)v_15 % (
                                                v_17 + 790U))) + 82UL));
  }
  if (- ((p_5 ^ (unsigned long long)v_7) / (unsigned long long)(p_9 + 830LL)) == 
      ((321638970ULL + (unsigned long long)result) - 18446744073709516816ULL) % (unsigned long long)(
      p_11 + 381L)) {
    v = ~ (~ (p_5 & 4050434307ULL));
    result = (short)(6512ULL ^ (unsigned long long)((float)p - -3.23988148365e+38f) % (
                               v + 21ULL));
  }
  else {
    v = (unsigned long long)(~ 10819U);
    result = (short)v;
  }
  return result;
}


