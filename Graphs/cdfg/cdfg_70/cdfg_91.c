#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1012501763
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, unsigned short p_7, unsigned long p_9, signed char p_15,
        unsigned short p_19)
{
  short v_23;
  short v_21;
  double v_17;
  unsigned int v_13;
  char v_11;
  unsigned long long v_5;
  double v;
  int result;
  v_17 = -909.451858892;
  v_13 = 4027916115U;
  v_11 = (char)104;
  result = (int)p_15;
  if (- v_17 == (double)(! v_13)) {
    v_21 = (short)(((float)v_11 / ((p + 705582976.f) + 995.f)) / ((float)(~ (- result)) + 801.f));
    v_5 = (unsigned long long)(((unsigned int)((int)p_15 % ((int)((signed char)v_17) + 560)) - 
                                (unsigned int)p_19 * v_13) * (unsigned int)(
                               (int)v_21 + 142));
    v_11 = (char)(- (~ (~ v_13)));
  }
  else {
    v_5 = 18446744073709495031ULL;
    v_23 = (short)(~ (4294967092U + (unsigned int)p_19));
    v_11 = (char)(((int)((unsigned char)(- v_17)) + 143) % (! ((int)p_15 + (int)v_23) + 820));
  }
  if (- ((4123278385UL + p_9) - 112UL) >= (unsigned long)v_11) {
    result = (int)(! (- v_5) % (0 / 5582ULL + 788ULL));
    v = (double)(- ((float)result / (p + 584.f)) * 865115648.f);
    result = - ((int)(- v) * (-165060624 << 20ULL));
  }
  else result = (int)(! (16501ULL - (18446744073176829015ULL + (unsigned long long)p_7)));
  return result;
}


