#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 210889783
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p[5][5][4], char p_4, float p_6, long long p_8,
                unsigned int p_10)
{
  long long v_21;
  signed char v_19;
  unsigned long v_17;
  char v_15;
  unsigned char v_13;
  unsigned long v;
  signed char result;
  v_21 = -41843LL;
  v_19 = (signed char)p[2][1][2];
  v_17 = (unsigned long)p_10;
  v_15 = (char)0;
  v_13 = (unsigned char)140;
  result = (signed char)-80;
  v = (unsigned long)((long long)((v_17 + (unsigned long)v_19) + (unsigned long)(
                                  (float)p_8 / (p_6 + 604.f))) | ((long long)result + (
                                                                  -4563LL + v_21)));
  if ((int)((-3704059904.f + (float)(v - (unsigned long)p[0][2][1])) * (float)(- (
            (unsigned long)p_10 - v))) >= ! ((int)v_13 >> ((int)v_15 & 7))) 
    result = (signed char)p[1][1][2];
  else result = (signed char)((int)((1.84467440737e+19 * p[4][1][0]) / (
                                    (p[3][2][1] - (double)p_4) + 405.)) * (
                              (int)(~ p_4) % ((int)((char)(-1.11471646812e+38 - (double)p_6)) + 217)));
  return result;
}


