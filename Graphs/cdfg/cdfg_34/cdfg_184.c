#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 104621250
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, int p_5, signed char p_11, short p_15, short p_21[3])
{
  float v_23;
  short v_19;
  long v_17;
  unsigned char v_13;
  signed char v_9;
  unsigned long v_7;
  long long v;
  short result;
  v_23 = (float)p_15;
  v_17 = (long)p_5;
  v_13 = (unsigned char)222;
  v_9 = (signed char)71;
  while ((long)((int)(- v_13) * (int)(! p_15)) / -36439L >= (long)(-70 / (
                                                                   (int)p_15 + 341))) {
    v_19 = v_17 + 53456L;
    v_9 = (signed char)(- (183 / ((int)v_19 + 812) ^ (int)v_9 % 168));
    v_19 = (short)((long long)(- (- v_23)) % (((long long)(- p_21[1]) | p) + 183LL));
    v_13 = (unsigned char)(166 % (14356 / ((int)((unsigned short)719499108.247) + 598) + 651) << (
                           ((-123 & (int)p_11) - (int)p_21[0]) & 31));
  }
  while_0_break: ;
  if (-418480260 > - ((int)(- v_9) % (-622292056 / ((int)p_11 + 411) + 161))) {
    v = p / (long long)(~ (p_5 + 8973) + 462);
    result = (short)(! v - 22609LL);
  }
  else {
    v_7 = (unsigned long)v_9;
    result = (short)-28;
    result = (short)((long long)((unsigned long)(- result) * v_7) / -56770LL);
  }
  return result;
}


