#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 266623811
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, unsigned long long p_9[5][3][3],
                signed char p_13, signed char p_17, int p_21)
{
  unsigned long long v_27;
  char v_25;
  signed char v_23;
  unsigned char v_19;
  long long v_15;
  unsigned short v_11;
  unsigned char v_7;
  long v_5;
  double v;
  signed char result;
  v_27 = 45428ULL;
  v_25 = (char)91;
  v_23 = p_13;
  v_19 = (unsigned char)p;
  v_15 = (long long)p_17;
  v_11 = (unsigned short)p_17;
  v_7 = (unsigned char)75;
  v_5 = -12109L;
  v = (double)p_9[4][1][2];
  result = (signed char)56;
  if ((long long)((unsigned long)(- v_19) + 2303755UL) == (- (-554LL - v_15) | (long long)(
                                                           0 / (((int)v_11 + (int)p_17) + 116)))) {
    v_7 = (unsigned char)(! (! p_9[2][2][1] * (unsigned long long)((int)v_19 / (
                                                                   p_21 + 940))));
    v_11 = (unsigned short)(! ((int)((signed char)-2.29458063902e+38f) / (
                               (int)(! p_17) + 152)));
    v_5 = (long)((p_9[1][0][1] | (unsigned long long)(3171 / ((int)p_13 + 893))) | (unsigned long long)(
                 -9879461888.f - (float)((unsigned long long)v_15 | p_9[1][0][2])));
  }
  else {
    v_5 = (long)(((unsigned long long)(- v_5) / (! v_27 + 539ULL)) / 358593093ULL);
    v = (double)(! (unsigned short)60319);
    v_11 = (unsigned short)((int)(- v_23) * 495103276 + (int)((char)(
                                                        v / 1.84467440737e+19)) / (
                                                        (int)(! v_25) + 439));
  }
  while ((unsigned long long)((v - (double)(p - (long long)v_5)) + -49997.) < 
         (unsigned long long)((int)(- v_7) % 236) / (! p_9[4][2][2] * (unsigned long long)-972.846984863f + 902ULL)) {
    result = (float)v_11 + -14.679681778f;
    v_11 = (unsigned short)p_9[0][1][0];
    v = (double)result;
    v_5 = (long)(-(unsigned short)50411);
  }
  while_0_break: ;
  return result;
}


