#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 47677468
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, long long p_5, short p_7, char p_13, long p_15)
{
  short v_23;
  float v_21;
  short v_19;
  char v_17;
  long long v_11;
  signed char v_9;
  signed char v;
  long result;
  v_23 = (short)p_5;
  v_21 = (float)p_5;
  v_17 = (char)-44;
  v_11 = -319LL;
  if ((long long)(! (p_15 * 100L) / 112L) != (long long)((unsigned long)(
                                                         3865092136U / (unsigned int)(
                                                         (int)p_13 + 605)) & (unsigned long)(
                                                         p_15 - (long)p_13)) - 
                                             ((long long)v_23 * -348297463LL) / (long long)(
                                             ((int)p_7 - (int)p_7) + 197)) {
    v = (signed char)(18446744073709495743ULL / (unsigned long long)(
                      - (v_11 + (long long)v_17) + 615LL));
    v_9 = (signed char)(((120LL + v_11) / (long long)(4294955757UL % (unsigned long)(
                                                      (int)v + 808) + 690UL)) * (long long)(- (
                        (int)p * (int)p_7)));
    v_11 = (48132LL ^ 0) * (long long)((long)v_9 / (((long)p_7 - p_15) + 613L));
  }
  else {
    v_19 = (short)v_21;
    v_17 = (char)((unsigned long)v_19 % 1780604046UL);
    v_11 = (long long)p_7;
  }
  if ((long long)(~ p) % (~ (p_5 << ((int)v_17 & 63)) + 766LL) != 212999396LL) {
    v_9 = (signed char)v_11;
    v = (signed char)(p_5 - (long long)(41454L + (long)p_7) / (p_5 % (long long)(
                                                               (int)v_9 + 696) + 660LL));
    result = (long)((int)v - (int)((signed char)2.82517638439e+38f) * (int)p);
  }
  else result = (long)p_13;
  return result;
}


