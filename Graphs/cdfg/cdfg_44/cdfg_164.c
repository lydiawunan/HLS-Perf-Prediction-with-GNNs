#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 830485180
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, long long p_4, signed char p_9,
                   unsigned int p_13[2], char p_19[5][3])
{
  unsigned int v_23;
  unsigned short v_21;
  long v_17;
  double v_15;
  long long v_11;
  double v_7;
  short v;
  unsigned short result;
  v_23 = 3395942314U;
  v_21 = (unsigned short)41090;
  v_17 = -12144L;
  v_11 = 34469LL;
  v_7 = 642.930827436;
  v = (short)p_13[0];
  if (((long long)p_19[1][1] / (p_4 + 399LL)) / (long long)(((unsigned int)v_21 - v_23) + 97U) + (long long)p_13[0] != (long long)(~ (
      (unsigned int)((float)p_13[0] / -1873987200.f) + (v_23 | 280U)))) {
    v_15 = (double)(((p_13[0] ^ 26U) * 3841U) % (unsigned int)((int)v / (
                                                               (int)p_9 + 27) + 174));
    v_15 = - (- ((double)v_17 / (v_15 + 974.)));
    v_7 = (double)(~ (-551077902LL ^ (long long)(~ p_9)));
  }
  else {
    v_11 = (long long)p;
    v = (short)(~ (! ((long)v - v_17)));
    v_15 = (double)(- ((v_17 - 1644L) % (long)(-62 % ((int)p_19[4][0] + 892) + 34)));
  }
  if ((double)((long long)(-64 & (int)v % ((int)((short)v_7) + 856)) + (
               (long long)p_9 % (v_11 + 836LL) - (long long)(~ p_13[0]))) > v_15) 
    result = (unsigned short)((long long)(- (- p)) * (~ p_4 + 145670127LL));
  else result = (unsigned short)10707;
  return result;
}


