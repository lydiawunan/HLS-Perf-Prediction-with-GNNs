#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 633508104
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, float p_9, unsigned long p_11,
                   double p_15, unsigned int p_23)
{
  unsigned long long v_21;
  double v_19;
  unsigned char v_17;
  unsigned short v_13;
  unsigned short v_6;
  signed char v_4;
  unsigned long long v;
  unsigned short result;
  v_21 = 511381765ULL;
  v_19 = (double)p_9;
  v_17 = (unsigned char)84;
  v_6 = (unsigned short)p;
  v_4 = (signed char)p_23;
  v = (unsigned long long)p_15;
  result = (unsigned short)48871;
  if ((unsigned long long)(! ((unsigned long)v_4 - p) ^ (unsigned long)(
                           (int)result + (int)(~ v_17))) == (unsigned long long)v_19 * (
                                                            v_21 % (unsigned long long)(
                                                            p_23 + 937U) - 
                                                            v / 60679ULL)) {
    v_13 = (unsigned short)(72 % ((int)v_4 + 698));
    v_4 = (signed char)(18446744073642889342ULL + (unsigned long long)p_15);
    v = (unsigned long long)(! v_6);
  }
  else {
    v_6 = (unsigned short)((p_11 >> 16UL) * 4294967284UL);
    v_4 = (signed char)(v * v);
    v_13 = (unsigned short)(~ p);
  }
  while (75ULL >= - (~ (- v))) {
    v_6 = (unsigned int)v_6 + (unsigned int)v_4 % 4126364845U;
    result = (unsigned short)(4294957988UL * ((p_11 >> 6) % (unsigned long)(
                                              (int)v_13 + 511)));
    v_4 = (signed char)p_9;
    v = (unsigned long long)(~ ((p * (unsigned long)v_4) / (unsigned long)(
                                ((int)v_4 >> (p & 7UL)) + 507)));
  }
  while_0_break: ;
  return result;
}


