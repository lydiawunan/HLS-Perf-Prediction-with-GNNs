#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 464926703
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, unsigned char p_5[1][4][3], unsigned long p_9, long p_11,
          unsigned int p_13[5][1])
{
  long v_23;
  short v_21;
  unsigned short v_19;
  unsigned long long v_17;
  long long v_15;
  double v_7;
  signed char v;
  float result;
  v_23 = (long)p_5[0][1][2];
  v_21 = (short)p_5[0][3][2];
  v_15 = -930540291LL;
  v_17 = 34061ULL;
  if (((unsigned long long)(-454305961L - v_23) & ((unsigned long long)(
                                                   22486LL / (long long)(
                                                   p_11 + 24L)) ^ (18446744072983483316ULL - (unsigned long long)v_15))) == 4474ULL) {
    v_7 = (double)((- p_9 ^ (unsigned long)(p_11 ^ -597L)) - (unsigned long)(
                   159U / (p_13[4][0] + 510U)));
    v = (signed char)(- ((36675UL + (unsigned long)p_5[0][0][0]) % ((unsigned long)(- v_7) + 529UL)));
    result = (float)((unsigned long)((int)v * -64401) * 407601018UL - (unsigned long)(- (
                     (float)p + 811.739074707f)));
  }
  else {
    v_19 = (unsigned short)(- (((unsigned long)v_21 + p_9) * (unsigned long)p_13[0][0]));
    v_15 = (long long)((unsigned long)p_13[0][0] / (4294965093UL % (unsigned long)(
                                                    p_13[0][0] + 371U) + 304UL)) * (
           (long long)(! v_19) / -268525488LL);
    result = (float)((unsigned long long)(-35LL - (v_15 << 61U)) - 36226ULL % (
                                                                   v_17 + 899ULL));
  }
  return result;
}


