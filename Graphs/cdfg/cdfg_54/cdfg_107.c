#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 300376721
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, long p_5, signed char p_7, unsigned short p_9,
                       long long p_13)
{
  unsigned long long v_17;
  unsigned char v_15;
  short v_11;
  signed char v;
  unsigned long long result;
  v_17 = 18446744073343790570ULL;
  v_15 = (unsigned char)p_9;
  v_11 = (short)-20108;
  v = (signed char)p;
  while (! ((long long)v_11 % (p_13 + 470LL)) % (long long)(((int)v_15 | (int)v) % -6 + 1000) < -89LL) {
    v_15 = v_17 * 701142882ULL;
    v = (signed char)(~ (~ 4294905233UL));
    v = (signed char)(-21585LL & (((long long)p_5 + p_13) & (long long)(! v)));
    v_11 = (short)p;
  }
  while_0_break: ;
  if ((unsigned long)p_7 - - (4294906599UL | (unsigned long)v) != (unsigned long)(~ p_9)) 
    result = (unsigned long long)1.9111276906e+38f;
  else {
    v = (signed char)(! (! (! p_5)));
    result = (unsigned long long)(((int)(~ v) % -6161) / (- (p + 221) + 287));
  }
  return result;
}


