#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 370143933
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, unsigned short p_7, int p_9, char p_13[5],
                       unsigned char p_17)
{
  unsigned short v_29;
  char v_27;
  double v_25;
  unsigned char v_23;
  int v_21;
  signed char v_19;
  int v_15;
  unsigned long v_11;
  unsigned char v_4;
  short v;
  unsigned long long result;
  v_29 = (unsigned short)26553;
  v_25 = (double)p;
  v_23 = (unsigned char)p_13[4];
  v_21 = -37727;
  v_19 = (signed char)-28;
  v_15 = -39753;
  v_11 = 17535UL;
  while (4294966691UL <= (unsigned long)((int)(~ p_17) - (int)((unsigned char)732.358032227f)) + (
                         (unsigned long)((int)p_7 << (p & 15)) - - v_11)) {
    v_15 = (unsigned int)v_23 - (unsigned int)v_21 / (((unsigned int)v_19 + 13421U) + 764U);
    v_27 = (char)((16 * (int)p_17 + (int)(v_25 / 17398.)) - (int)(- (- v_29)));
    v_25 = (double)(177UL & (unsigned long)((int)(! v_27) % (((int)v_29 + (int)v_29) + 275)));
    v_11 = ! (0 % (unsigned long)(((int)p_7 + (int)((unsigned short)v_25)) + 926));
  }
  while_0_break: ;
  if (v_11 <= (unsigned long)(~ ((25408 >> ((int)p_13[4] & 15)) ^ v_15 * (int)p_7))) {
    v_4 = (unsigned char)(! p);
    v = (short)18496;
    result = (unsigned long long)(! (((int)v - 63065) - (int)v_4 * (int)((unsigned char)2.62645663676e+38f)));
  }
  else result = (unsigned long long)((unsigned int)(! ((int)p_7 * 932681592)) / (
                                     (unsigned int)(p_9 % -27927) / 4294947511U + 254U));
  return result;
}


