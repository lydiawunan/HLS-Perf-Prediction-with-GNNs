#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 297809286
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, unsigned short p_4[1][3][4], int p_6, short p_11,
         unsigned int p_15)
{
  signed char v_25;
  short v_23;
  short v_21;
  signed char v_19;
  int v_17;
  unsigned long v_13;
  unsigned char v_9;
  unsigned int v;
  char result;
  v_25 = (signed char)p_11;
  v_23 = (short)p;
  v_21 = p_11;
  v_19 = (signed char)p_11;
  v_17 = -413026286;
  v_13 = 3245487869UL;
  v_9 = (unsigned char)p_11;
  v = 245802641U;
  result = (char)p_11;
  while ((unsigned int)(((1119086208 % (v_17 + 1022)) % ((int)v_19 / (
                                                         p_6 + 146) + 300)) * (int)p_11) >= 
         (unsigned int)((int)p_11 + ((int)v_19 >> ((int)v_21 & 7))) * (
         (unsigned int)(- result) + p_15 % (unsigned int)((int)v_21 + 882))) {
    v_25 = (unsigned long long)v_25 - ((unsigned long long)v_23 ^ 18446744073137694240ULL);
    v_13 = (unsigned long)v_9 / ((v_13 << (p_15 & 31U)) % (unsigned long)(
                                 v + 750U) + 512UL);
    v_9 = (unsigned char)p_4[0][0][2];
    v_19 = (signed char)-25;
  }
  while_0_break: ;
  while ((unsigned int)(! ((int)p_4[0][0][2] % (p_6 + 495)) & (int)(~ result)) != ! v) {
    v_17 = (unsigned int)v_9 - 653818192U;
    v_9 = (unsigned char)((((unsigned int)v_17 & p) ^ p / (unsigned int)(
                                                      (int)p_4[0][2][2] + 957)) / (unsigned int)(
                          v_17 + 697));
    result = (char)((v_13 << (! p_15 & 31U)) * (unsigned long)(~ (~ p)));
    v = (unsigned int)p_11;
  }
  while_0_break_0: ;
  return result;
}


