#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 467394097
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, long long p_4, float p_15, unsigned short p_17[5][2],
         long long p_23)
{
  float v_27;
  long long v_25;
  unsigned char v_21;
  unsigned char v_19;
  unsigned long v_13;
  float v_11;
  unsigned short v_9;
  unsigned int v_7;
  float v;
  char result;
  v_27 = (float)p_4;
  v_25 = (long long)p;
  v_21 = (unsigned char)6;
  v_19 = (unsigned char)p;
  v_13 = (unsigned long)p;
  v_11 = p_15;
  v_9 = p_17[4][1];
  v_7 = 583300692U;
  v = -8.76188229668e+37f;
  result = (char)-60;
  if ((long long)v_21 % ((long long)(- v) * p_23 + 702LL) >= ! (~ (p_23 - -212109978LL))) {
    v = (float)((long long)p % (v_25 + 774LL));
    v_9 = (unsigned short)((long long)(((int)v_19 / 19548) / (((int)p_17[2][1] - (int)v_21) + 248)) + 
                           (p_4 + p_23) / (long long)(! v_13 + 284UL));
    v_7 = (unsigned int)((int)v_9 + ~ ((int)v_9 - (int)result));
  }
  else {
    v_27 = - (- (v_27 - v_27));
    v = - (- v_27 * (v_11 - v_27));
    v_9 = (unsigned short)((long long)((int)v_9 + (int)((unsigned short)v_27)) * (
                           (long long)v_7 % (p_23 + 674LL)) - (long long)(
                           (int)result - ((int)v_21 - (int)p_17[4][1])));
  }
  while ((long long)(~ ((int)(~ p) + (int)p)) <= ((p_4 ^ (long long)v) - (long long)(
                                                  (unsigned int)v - v_7)) / (long long)(
                                                 (int)(! (~ v_9)) + 705)) {
    v = (int)((unsigned char)v_11) / 105;
    v_11 = (float)(~ (v_13 >> (((int)((unsigned short)p_15) | (int)p_17[2][0]) & 31)));
    result = (char)((long long)p + ! (! p_4));
    v_7 = (unsigned int)((v - (float)((int)p - (int)((short)v_11))) / 52114.f);
  }
  while_0_break: ;
  return result;
}


