//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 820479482
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, unsigned int p_4, unsigned short p_11[5][5], char p_13,
          unsigned long p_19)
{
  unsigned long v_21;
  char v_17;
  unsigned long long v_15;
  int v_9;
  unsigned short v_7;
  signed char v;
  float result;
  v_21 = 47320UL;
  v_17 = (char)-69;
  v_15 = 18446744073709519682ULL;
  v_9 = 206983795;
  v_7 = (unsigned short)p_13;
  result = (float)p_11[0][3];
  v = (signed char)(((unsigned long)p_4 % ((((unsigned long)v_17 - p_19) << (
                                            131 / ((int)((unsigned char)result) + 757) & 31)) + 347UL)) * v_21);
  v_7 = (unsigned short)(- (! v_15 * (((unsigned long long)v_17 % 18446744073709496925ULL) / (unsigned long long)(
                                      (int)(- v_7) + 354))));
  v_7 = (unsigned short)((long long)(- (-925307738 / ((int)v_7 + 127))) % (
                         (long long)((int)p_11[4][3] & 238) + 351LL) + (long long)p_13);
  result = p - ((p + (float)p_4) * (float)(! v) + (float)(- ((int)v_7 % (
                                                             v_9 + 283))));
  return result;
}


