#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 580137649
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, unsigned short p_5, float p_7,
              unsigned long long p_11, float p_13)
{
  unsigned long long v_19;
  unsigned long v_17;
  unsigned long v_15;
  unsigned int v_9;
  signed char v;
  long long result;
  v_19 = (unsigned long long)p;
  v_17 = 4246291314UL;
  if ((long long)(4294967213UL % (- v_17 + 674UL) | (unsigned long)(19061. - (
                                                                    -2.47921718504e+38 + (double)v_19))) <= 525119969LL) {
    v_9 = (unsigned int)5.81876978517e+37f;
    result = (long long)((unsigned long long)(v_9 / 3810124676U) / (p_11 + 719ULL));
    v = (signed char)((double)p_7 + (-706.047557453 - (double)(v_9 + (unsigned int)p_5)));
  }
  else {
    v_15 = (unsigned long)(~ (! (~ p_11)));
    v = (signed char)(~ ((unsigned long long)v_15 % (p_11 + 291ULL)));
    result = (long long)p_13;
  }
  result = 354794023LL * (result / (long long)((int)v + 94)) - (long long)(
           -1382028160. * (p * (double)p_5));
  return result;
}


