#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 440545419
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p, unsigned int p_11, unsigned short p_13,
           signed char p_15, signed char p_17)
{
  long long v_19;
  int v_8;
  int v_6;
  unsigned int v_4;
  double v;
  double result;
  v_19 = -151LL;
  v_8 = (int)p_11;
  v = (double)p_13;
  result = -1.56530388505e+38;
  if ((long long)(((int)p_17 + (int)((signed char)p)) * ~ v_8 << (((unsigned int)(
                                                                   (int)p_13 * 3) & - p_11) & 31U)) == 
      4294904928LL % (v_19 + 591LL)) {
    v_4 = (unsigned int)(((unsigned long)(-22556L << ((long)p & 31L)) | 177735146UL) - (unsigned long)(
                         (double)(818430963ULL / ((unsigned long long)p + 268ULL)) - (
                         56. - p)));
    v_6 = v_8;
    v_8 = (int)(- p);
  }
  else {
    v_4 = (unsigned int)((long long)p_11 * ((-114342765LL * (long long)v_8) / (long long)(
                                            - p_11 + 741U)));
    v_8 = (int)(~ (~ p_11));
    v_6 = (int)(- ((result * (double)v_4) / ((-1.68824006889e+38 - p) + 688.)));
  }
  while ((unsigned int)((int)v * 14221) > v_4) {
    v_6 = v_8 * (v_6 & 18518);
    v_4 = ~ (- v_4) - 17U;
    v_8 = (int)v_4;
    v_4 = (unsigned int)(18446744073709500890ULL - (unsigned long long)(
                         0. * (p + p)));
  }
  while_0_break: ;
  return result;
}


