#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 745572384
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, double p_19[4], unsigned short p_21,
              double p_25, unsigned long long p_27[2][2][4])
{
  unsigned long long v_23;
  float v_17;
  short v_15;
  double v_12;
  unsigned char v_10;
  short v_8;
  unsigned int v_6;
  unsigned char v_4;
  char v;
  long long result;
  v_23 = p_27[0][1][2];
  v_15 = (short)p;
  v_10 = (unsigned char)p;
  v_8 = (short)-28588;
  v_6 = (unsigned int)p_27[1][0][3];
  v = (char)-18;
  result = -63261LL;
  if ((unsigned long long)((int)p_21 - (int)v) + 0ULL % (((unsigned long long)p_21 + v_23) + 98ULL) == 
      (unsigned long long)((unsigned long)(-48 - (int)p_21) + ((unsigned long)p_25 + 4269867519UL)) - 
      (p_27[1][1][0] * 54508ULL) * (unsigned long long)(162505275UL + (unsigned long)v_6)) {
    v_12 = (double)(- ((p + (unsigned long long)result) + (p + (unsigned long long)v_15)));
    v_4 = (unsigned char)((int)((short)(- v_12 * 3965782499.)) * (int)(- v_8));
    v = (char)((unsigned int)v_4 % (((v_6 - (unsigned int)v_8) ^ (unsigned int)(- v_10)) + 412U));
  }
  else {
    v_17 = (float)(- (p_19[1] / 28994.));
    v = (char)(- (- v_17 * -6038721536.f));
  }
  result = (long long)v;
  return result;
}


