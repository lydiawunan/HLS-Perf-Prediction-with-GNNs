#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 747619144
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, unsigned long p_5, float p_9, int p_13[1],
                long long p_15[2])
{
  short v_25;
  double v_23;
  unsigned short v_21;
  long v_19;
  unsigned long v_17;
  double v_11;
  long v_7;
  long long v;
  signed char result;
  v_25 = (short)p_15[1];
  v_23 = -230.896838514;
  v_21 = (unsigned short)23405;
  v_19 = (long)p_9;
  v_11 = (double)p_5;
  v_7 = -694310036L;
  v = 893709301LL;
  if (-89. / (v_11 + 391.) + - (v_23 + (double)v_25) < (double)(~ p_13[0] % (
                                                                (int)v_21 + 865))) {
    v_7 = 2L;
    v_19 = (long)p_9;
    v_17 = (unsigned long)(- ((int)(! p) % 342));
  }
  else {
    v_17 = (unsigned long)(! 824176967);
    v = (long long)((6177UL / (unsigned long)(((int)p + 178) + 362)) % (unsigned long)(
                    ~ (v_7 * (long)p_13[0]) + 484L));
    v_21 = (unsigned short)(~ p_5 / (53955UL * (unsigned long)(-15 >> (
                                                               p_13[0] & 7)) + 741UL));
  }
  if ((double)(4268269038UL * (unsigned long)((float)((long long)p_5 % (
                                                      v + 483LL)) / (
                                              ((float)v_17 + p_9) + 983.f))) != 
      ((v_11 + v_11) / ((double)(! v_19) + 640.)) * (double)(! (p_15[1] & (long long)v_21))) {
    v = (long long)((double)((float)((unsigned long)v_7 - 4294917634UL) * (
                             4294922496.f + p_9)) * ((-3.40212188076e+38 - v_11) + -659182463.));
    result = (signed char)((unsigned long)p + ((unsigned long)(5.31212178505e+37f - (float)v) | 
                                               4294967193UL % (p_5 + 294UL)));
    result = (signed char)(! (47 + 8940 * (int)result));
  }
  else result = (signed char)((long long)((unsigned long)p_13[0] * 4294916709UL) + (
                              (p_15[1] - (long long)-2.6217091162e+38) ^ (long long)(! p_5)));
  return result;
}


