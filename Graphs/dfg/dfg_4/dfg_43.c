//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 115263870
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, signed char p_5, double p_7,
                long long p_9, signed char p_15)
{
  unsigned int v_13;
  double v_11;
  long long v;
  signed char result;
  v_13 = (unsigned int)((p_9 + (long long)((int)p_15 - 14167)) / (-9257888753LL / (
                                                                  -149LL * p_9 + 495LL) + 460LL) ^ (long long)p_15);
  v_11 = (double)v_13;
  v = (long long)((double)((34222ULL / (unsigned long long)((int)p_5 + 801) + (unsigned long long)(
                            (int)p_5 - (int)((signed char)p_7))) * (unsigned long long)(! (
                           212LL - p_9))) + v_11);
  result = (signed char)(! (p ^ 83ULL) % 151ULL + (unsigned long long)v);
  return result;
}


