//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 601783431
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, char p_7, double p_13[1][5],
                 unsigned int p_15)
{
  long long v_19;
  double v_17;
  double v_11;
  unsigned long v_9;
  unsigned long long v_5;
  long v;
  unsigned int result;
  v_19 = (long long)p_13[0][3];
  v_17 = -869.481095882;
  v_11 = 4083458.25259;
  v_9 = (unsigned long)p_13[0][0];
  v = (long)p;
  result = 22904U;
  v_5 = (unsigned long long)((- ((long long)p_15 + -703034423LL) % (long long)(
                              v_9 * (unsigned long)(549465105. * v_11) + 946UL)) * (
                             65535LL - (long long)(v_17 + (double)p_7) / (
                                       ((long long)v ^ v_19) + 34LL)));
  v = (long)(~ ((int)((char)((p_13[0][4] - p_13[0][1]) / ((double)(p_15 / 58U) + 491.))) * (int)(~ p_7)));
  v_9 = (unsigned long)(! (~ ((int)p_7 << 4))) + (unsigned long)result % (unsigned long)(
                                                 v + 1003L);
  result = (unsigned int)((unsigned long long)(- (~ p / (unsigned long)(
                                                  v / 1068339144L + 815L))) * (
                          (((unsigned long long)p + v_5) + (unsigned long long)(
                           (unsigned long)p_7 - v_9)) / (unsigned long long)(
                          (unsigned long)v_11 % (p % (p + 944UL) + 316UL) + 924UL)));
  return result;
}


