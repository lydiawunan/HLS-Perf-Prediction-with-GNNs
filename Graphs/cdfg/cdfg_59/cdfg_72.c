#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 449435482
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, float p_9[2][4], unsigned long p_11,
              unsigned short p_13[5][2][2], short p_15)
{
  unsigned long v_23;
  unsigned int v_21;
  unsigned int v_19;
  char v_17;
  long v_7;
  double v_5;
  unsigned char v;
  long long result;
  v_23 = p_11;
  v_21 = (unsigned int)p_9[1][3];
  v_19 = (unsigned int)p_15;
  v_17 = (char)p_15;
  v_7 = -33465L;
  v_5 = (double)p_15;
  v = (unsigned char)p_13[2][1][1];
  result = (long long)p_13[3][0][0];
  while ((unsigned long long)((double)((float)(3562304558LL / (result + 479LL)) / (
                                       p_9[0][3] / ((float)p + 747.f) + 746.f)) / (
                              (-95. + v_5) + 731.)) != 18446744073326805160ULL - (unsigned long long)(~ (
                                                       v_21 - (unsigned int)p_15))) {
    v_7 = v_23 - 36UL;
    v_19 = (unsigned int)(24380 * (int)v_17);
    v_23 = 3791371934UL;
    result = (long long)((unsigned int)(~ p) % (((unsigned int)v_17 | v_19) + 908U)) - (
             22991LL % (long long)(v_19 + 456U) ^ (long long)(v_21 + (unsigned int)p_13[3][1][0]));
  }
  while_0_break: ;
  if ((unsigned int)(((int)p_13[0][0][1] - (int)p_15) / ((int)(~ p_13[3][1][0]) + 761)) > (
      (unsigned int)((int)(~ v_17) >> ((int)(- v) & 7)) ^ (63U - v_19) % (
                                                          (unsigned int)7.01895602045e+37f + 753U))) {
    v_5 = (double)(v_7 - v_7);
    v = (unsigned char)(~ (-46446L | (long)((int)((short)v_5) & -30248)));
    result = (long long)(0L % ((long)(1042 + (int)v) * (-958L + (long)p) + 471L));
  }
  else result = (long long)(- (- p_9[1][0] / ((float)(p_11 - 4294967292UL) + 68.f)));
  return result;
}


