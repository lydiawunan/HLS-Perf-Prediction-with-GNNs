#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 683591033
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, signed char p_5, long p_7[2][2],
                       unsigned long p_11, short p_13)
{
  unsigned long long v_27;
  unsigned long v_25;
  double v_23;
  float v_21;
  signed char v_19;
  float v_17;
  int v_15;
  signed char v_9;
  unsigned short v;
  unsigned long long result;
  v_27 = 58919ULL;
  v_25 = p_11;
  v_23 = -1450084607.12;
  v_21 = 1.1860915832e+38f;
  v_19 = (signed char)21;
  v_17 = -8095861760.f;
  v_15 = (int)p;
  v = (unsigned short)16450;
  if (~ (0 / ((int)((short)(64090.f / (v_21 + 471.f))) + 930)) < (int)p_5) {
    v_21 = (float)(- p);
    v_15 = (int)(- (v_21 / ((float)v_19 + 411.f) + 15844791.f));
    v_19 = (signed char)(- (- (p_11 ^ 4294967213UL)));
  }
  else {
    v_21 = (float)((5.87719073073e+37 / (- v_23 + 1003.)) * (double)(
                   (unsigned long long)(v_25 * (unsigned long)v_19) - v_27));
    v_17 = 10008291328.f;
    v = (unsigned short)(((int)((signed char)((double)p_11 - -2.3705918091e+38)) / (
                          (int)(~ v_19) + 656)) % 56602);
  }
  if (! p_11 <= (unsigned long)(! ((int)v_19 >> 7ULL) + (int)(- ((float)p * v_21)))) {
    v = (unsigned short)(! (short)-7815);
    result = (unsigned long long)((int)(- p) - ! ((int)v | (int)p));
  }
  else {
    v_15 = (int)((long)(v_15 + (int)((signed char)v_17) % ((int)p_5 + 544)) - 
                 -817325804L % (long)((int)(~ p) + 376));
    v_9 = (signed char)((int)p_13 & v_15);
    result = (unsigned long long)((unsigned long)((long)(! p_5) % (~ p_7[0][0] + 25L)) % (
                                  ((unsigned long)v_9 | (unsigned long)v * p_11) + 840UL));
  }
  return result;
}


