#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 66088085
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p[2][4], double p_11, int p_15[1][1][3],
                       double p_17, unsigned long long p_23)
{
  unsigned long long v_27;
  long long v_25;
  int v_21;
  unsigned long long v_19;
  short v_13;
  char v_9;
  int v_6;
  unsigned int v_4;
  long v;
  unsigned long long result;
  v_27 = 965187256ULL;
  v_25 = -46322LL;
  v_21 = (int)p_11;
  v_19 = 52402ULL;
  v_6 = -886915894;
  result = 18446744073709495510ULL;
  if ((- p_17 + 307.446621009 / ((double)v_25 + 403.)) * ((double)((unsigned long)p_11 + 60045UL) / (
                                                          (p_11 + p_17) + 679.)) < 
      7884. * (-9156. / (40826. / (p_17 + 912.) + 38.))) {
    v_13 = (short)(((unsigned long long)p_11 + 96ULL) - result);
    v_19 = (unsigned long long)((p[0][2] - (long long)p_11) / -94LL) * (
           ((unsigned long long)p_15[0][0][0] * p_23) / 42ULL);
    v_9 = (char)((unsigned long long)v_21 * (((unsigned long long)v_6 % (
                                              p_23 + 1002ULL)) * 990ULL));
  }
  else {
    v_25 = 4026982627LL;
    v_9 = (char)((result + (unsigned long long)v_25) + v_27);
    v_13 = (short)(- (- p_11));
  }
  if (0LL <= (long long)(- (- (p_17 / ((double)v_19 + 649.))))) {
    v_4 = (unsigned int)(- (((int)v_9 + (int)((char)p_11)) / (((int)v_13 | -43) + 595)));
    v = (long)(((long long)v_4 ^ ((long long)v_6 - p[0][2])) % 52416079LL);
    result = (unsigned long long)((float)v + -3490090496.f);
  }
  else result = (unsigned long long)4075204425.26;
  return result;
}


