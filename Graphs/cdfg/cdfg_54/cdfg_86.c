#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 812862882
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, unsigned short p_9, long p_11[5][4], long p_13,
                double p_17)
{
  int v_23;
  unsigned char v_21;
  unsigned char v_19;
  long v_15;
  long v_7;
  char v_5;
  unsigned char v;
  signed char result;
  v_23 = (int)p_13;
  v_21 = (unsigned char)85;
  v_19 = (unsigned char)28;
  v_7 = -4666L;
  v_5 = (char)6;
  v = (unsigned char)p_13;
  result = (signed char)p_9;
  while ((long)v >= p_13) {
    v_5 = v_23 % 63751;
    v_23 = (int)(! (((unsigned long)result & 3766122449UL) * 4294943975UL));
    v_19 = (unsigned char)((unsigned long long)(- (106 % ((int)result + 977))) + 
                           18446744073709521409ULL * (18446744073709536594ULL % (unsigned long long)(
                                                      (int)p + 536)));
    v = (unsigned char)39;
  }
  while_0_break: ;
  if ((unsigned long long)(! ((int)((signed char)p_17) + -101) / 300) != 
      ! (789ULL * (unsigned long long)p_11[0][3]) * (unsigned long long)(
      (int)(- p_17) - (int)v_19 * (int)v_21)) {
    v = (unsigned char)((long long)(- (-4344L % (v_7 + 933L))) / (((long long)p * -737796787LL) * (long long)(
                                                                  (long)p_9 * p_11[1][1]) + 270LL));
    result = (signed char)(~ ((unsigned long long)((int)v % 91) - (18446744073709530972ULL + (unsigned long long)v_5)));
    result = (signed char)(- (((int)result % ((int)p + 178)) % ((int)result / 22835 + 571)));
  }
  else {
    v_15 = (long)9388234725.81;
    result = (signed char)(! (p_13 * 15473L) ^ (long)((float)v_15 * -83.7101974487f + 3713484800.f));
  }
  return result;
}


