#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1050861696
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, signed char p_7, short p_11, unsigned short p_13,
          unsigned long long p_15)
{
  short v_21;
  float v_19;
  unsigned int v_17;
  unsigned char v_9;
  signed char v_5;
  double v;
  short result;
  v_21 = (short)-31941;
  v_19 = (float)p_11;
  v_17 = 194141521U;
  v_9 = (unsigned char)7;
  v = (double)p_7;
  result = p_11;
  while (1ULL != - (! p_15 * (unsigned long long)((long long)v_17 - p))) {
    v_9 = v_19 + 125428432.f;
    v_5 = (signed char)((float)v_21 / 4169925376.f);
    result = (short)(! ((long long)1.97431569742e+38 - p) + -8489LL);
    v_17 = (unsigned int)((unsigned long)((int)p_7 - ((int)p_13 + -24839)) % (
                          29770UL % (unsigned long)((int)v_5 % 507723594 + 914) + 335UL));
  }
  while_0_break: ;
  if ((unsigned long long)((int)result << ((int)p_11 & 15)) != p_15) {
    v_5 = (signed char)((unsigned long)((int)p_11 * (int)((short)193139492.971)) + 4294939733UL);
    v = (double)((unsigned long)(((int)((signed char)v) + (int)v_5) * (
                                 (int)p_7 % ((int)v_9 + 499))) / 3373769880UL);
    result = (short)(-1L - (long)((double)p + (v - (double)p)));
  }
  else result = (short)(~ (~ p_13));
  return result;
}


