#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 415206191
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p[2][3][4], double p_4, float p_9,
                  short p_15, float p_17)
{
  long long v_21;
  char v_19;
  short v_13;
  unsigned short v_11;
  long v_7;
  float v;
  unsigned long result;
  v_21 = -273407266LL;
  v_19 = (char)91;
  v_13 = (short)p_4;
  v_11 = (unsigned short)33833;
  v = 3.34087246884e+38f;
  result = (unsigned long)p_17;
  while ((double)(p_17 * (float)(994171575UL - (unsigned long)(- v_19))) != - (- p_4)) {
    v_13 = v_21 | 4294922713LL;
    v_21 = 1006202709LL;
    v_11 = (unsigned short)((int)(- v_11) * (int)((unsigned short)((float)p[1][2][3] / -3.03138885978e+38f)));
    v_19 = (char)(18446744073709551615ULL % (unsigned long long)((int)(! (! p_15)) + 708));
  }
  while_0_break: ;
  if ((int)(- (p_9 + p_9) * - v) != (int)((short)((float)(! result) * p_9)) + 19143) 
    result = (unsigned long)(1682ULL / (p[1][2][2] + 51ULL));
  else {
    v_7 = (long)((int)((short)(p_9 + (float)v_11)) * (int)v_13 + ((int)p_15 * 117) / (
                                                                 ((int)p_15 | (int)((short)p_17)) + 335));
    v = (float)((v_7 % -11244L + - v_7) - -697978444L);
    result = (unsigned long)(p_4 + (double)(92 % (97 / ((int)((unsigned char)v) + 549) + 200)));
  }
  return result;
}


