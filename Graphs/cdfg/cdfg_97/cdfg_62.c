#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 467029817
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, unsigned short p_7, short p_9, char p_15,
          unsigned long long p_19)
{
  unsigned long long v_29;
  char v_27;
  long v_25;
  double v_23;
  long long v_21;
  unsigned int v_17;
  short v_13;
  unsigned short v_11;
  long long v_5;
  unsigned char v;
  short result;
  v_29 = (unsigned long long)p_7;
  v_27 = (char)-123;
  v_25 = -42761L;
  v_23 = (double)p_19;
  v_21 = (long long)p;
  v_13 = (short)-22755;
  v_11 = (unsigned short)14616;
  v = (unsigned char)p;
  while (21374LL >= -1LL / ((((long long)p_9 + v_21) - (long long)v_25) + 991LL)) {
    v = (unsigned char)((v_29 % (v_29 + 420ULL)) / ((! p_19 ^ (unsigned long long)v_21) + 410ULL));
    v_11 = (unsigned short)(((int)((unsigned short)(- v_23)) - (int)(- p_7)) - (int)(
                            (double)v_27 / -5.06279281278e+37 + -28334.));
    v_21 = 4294904164LL;
  }
  while_0_break: ;
  if (p_19 != (unsigned long long)(- ((long long)p_15 % -42926LL ^ (long long)p_7 * v_21))) {
    v_5 = ~ ((long long)((int)v_11 | (int)v_13) ^ (3566LL ^ (long long)p_15));
    v_5 = (long long)((int)((unsigned short)p) * (int)p_7 - (int)(! p_9)) % (
          ! (-327502013LL * v_5) + 61LL);
    result = (short)((((long long)v / 1002391131LL) % (((long long)p | v_5) + 831LL)) % -67LL);
  }
  else {
    v_23 = p;
    v_17 = (unsigned int)(- ((double)(v_21 / ((long long)v_23 + 980LL)) / (
                             - p + 432.)));
    result = (short)(((unsigned long long)v_17 + p_19) / 878188206ULL);
  }
  return result;
}


