//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1018116976
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, long long p_5, int p_7, unsigned long p_9[3][4][3],
         unsigned int p_15)
{
  signed char v_13;
  unsigned long v_11;
  signed char v;
  long result;
  v_11 = 15976UL;
  v = (signed char)p_15;
  result = (long)(! p_7);
  v_13 = (signed char)(-50141LL + - (-486203344LL / (long long)(p_7 + 1003) + (long long)(
                                     (int)v * p_7)));
  v = (signed char)((unsigned long long)(! (- v_11 - (unsigned long)(
                                            (int)v_13 % 16))) + (0 / 896ULL) / (unsigned long long)(
                                                                (- p_5 - (long long)p_15) + 22LL));
  result = (long)((unsigned long)((double)((int)((signed char)(- p)) % (
                                           (int)(~ v) + 555)) / ((945.434059973 - (double)result) * (double)p_5 + 544.)) << (
                  ~ (- ((unsigned long)p_7 | p_9[1][0][0])) & 31UL));
  return result;
}


