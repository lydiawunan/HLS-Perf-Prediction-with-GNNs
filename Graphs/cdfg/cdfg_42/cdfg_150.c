#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 173793522
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, int p_11, char p_13, double p_19, float p_21[2][5])
{
  unsigned int v_23;
  float v_17;
  unsigned short v_15;
  short v_9;
  unsigned char v_7;
  double v_4;
  unsigned short v;
  char result;
  v_23 = 24541U;
  v_17 = (float)p_11;
  v_15 = (unsigned short)12506;
  v_9 = (short)-12760;
  v_7 = (unsigned char)108;
  v = (unsigned short)3234;
  result = (char)-5;
  if (4294964733U > (unsigned int)((int)p_19 - (37791 * (int)result) / (
                                               (int)v + 261))) {
    v_4 = (double)(~ (! 36240LL));
    v_15 = (unsigned short)((int)v << ((int)p_13 & 15));
    v = (unsigned short)57172;
  }
  else {
    result = (char)((double)(((int)v_15 % ((int)((unsigned short)p_19) + 31)) * (int)(- p_21[1][3])) / (
                    - (p_19 - (double)v_23) + 596.));
    v_9 = (short)(~ (~ ((int)p_13 * -46)));
    v_4 = - (6533795362.43 * (double)p_11) * (double)(4580ULL * (unsigned long long)v - (unsigned long long)-19.235118866f);
  }
  while ((int)((float)((int)v - (int)((unsigned short)(- v_4))) / (- (- p) + 507.f)) > 
         ~ ((int)v_7 * (int)v_9) * ((p_11 | (int)v) % ((int)(- p_13) + 4))) {
    v_7 = (int)v_15 * 4693;
    v_15 = (unsigned short)(- (p - (float)result) * (float)(((int)result - 62192) % (
                                                            (p_11 ^ -102) + 384)));
    v_9 = (short)((float)p_13 * v_17);
    v_9 = (short)(~ ((216 + (int)v_9) * (int)(- p)));
  }
  while_0_break: ;
  return result;
}


