#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 729738311
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p[3][3], unsigned short p_11)
{
  long v_21;
  double v_19;
  short v_17;
  float v_15;
  short v_13;
  unsigned long v_9;
  unsigned long v_6;
  long v_4;
  char v;
  unsigned long long result;
  v_21 = -514678482L;
  v_19 = 2.93315137487e+38;
  v_17 = (short)p[1][0];
  v_13 = (short)16993;
  v_6 = (unsigned long)p_11;
  v = (char)-85;
  v_9 = (unsigned long)(~ (unsigned char)177);
  if ((long long)(! (15L - v_21)) / ((680574481LL & (long long)v) % (
                                     (long long)v_19 + 150LL) + 617LL) <= (long long)p[1][0]) {
    v = (char)((int)p[0][1] >> ((unsigned int)(~ p_11) % (((unsigned int)v_13 & 161431703U) + 296U) & 7U));
    v_4 = (long)((unsigned long)(~ (! v)) / (- v_9 * v_6 + 785UL));
    result = (unsigned long long)(((50530UL | (unsigned long)v) / (unsigned long)(
                                   (v_4 & 126L) + 691L)) * ~ (v_6 / (unsigned long)(
                                                              (int)p[1][2] + 460)));
  }
  else {
    v_15 = (float)((int)v_17 * (int)((short)v_19));
    v_13 = (short)(18727.f / (- (33533.f - v_15) + 104.f));
    result = (unsigned long long)(-347105823 + (int)(- v_13) * -488914486);
  }
  return result;
}


