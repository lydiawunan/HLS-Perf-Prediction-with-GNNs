#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 495109875
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, unsigned int p_17)
{
  unsigned short v_23;
  char v_21;
  unsigned int v_19;
  unsigned long v_15;
  long long v_13;
  long v_10;
  unsigned short v_8;
  unsigned long v_6;
  float v_4;
  short v;
  double result;
  v_23 = (unsigned short)37702;
  v_21 = (char)1;
  v_19 = p_17;
  v_15 = 1069000980UL;
  v_13 = -383018740LL;
  v_8 = (unsigned short)30464;
  v_4 = (float)p_17;
  v = (short)p;
  result = -423.120552993;
  while (! p_17 / 71U == 4294941942U) {
    v_8 = (int)v_23 % ((int)v_21 % 9511 + 424);
    v = (short)(p_17 + ((unsigned int)(- v_8) - p_17 / 105U));
    v_8 = (unsigned short)(340932737LL ^ (long long)v_8);
    v_15 = (unsigned long)(- v_19);
  }
  while_0_break: ;
  if ((unsigned long long)p_17 != (p + 33824ULL) / (unsigned long long)(
                                  (long long)((float)v_19 * 3.21074499096e+38f) / (
                                  v_13 * (long long)v_15 + 230LL) + 814LL)) {
    v_10 = (long)v_13;
    v_6 = (unsigned long)p;
    result = (double)(((unsigned long)((int)((short)result) / ((int)v + 367)) + 
                       (unsigned long)v_4 * v_6) % (unsigned long)((long)v_8 % (
                                                                   (-43379L - v_10) + 832L) + 216L));
  }
  else {
    v_15 = (unsigned long)693.899021495;
    result = (double)v_15;
  }
  return result;
}


