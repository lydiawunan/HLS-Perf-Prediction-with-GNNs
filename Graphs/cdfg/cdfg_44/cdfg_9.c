#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 817983160
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p[4][2][5], unsigned short p_4,
                  signed char p_6[5], long p_11, double p_15)
{
  unsigned long long v_25;
  float v_23;
  double v_21;
  unsigned char v_19;
  unsigned char v_17;
  unsigned long v_13;
  int v_9;
  unsigned long v;
  unsigned long result;
  v_25 = (unsigned long long)p_6[4];
  v_23 = (float)p_15;
  v_21 = 869.62856845;
  v_19 = (unsigned char)p_6[1];
  v_9 = (int)p_11;
  v = p[1][0][0];
  if ((unsigned long long)(((unsigned long)p_4 * (p[0][0][2] ^ (unsigned long)v_19)) / (unsigned long)(
                           (int)(~ p_6[3]) + 974)) < (unsigned long long)(
                                                     (int)p_6[1] * (int)((signed char)(
                                                     v_21 + (double)p_4))) + ! (
                                                     (unsigned long long)-333.297851562f * v_25)) {
    v_9 = (int)(((unsigned long)((long)v_9 + p_11) + (p[1][1][0] + p[1][1][1])) | (unsigned long)(
                (long)(68 + (int)((unsigned char)v_21)) % ((857395136L + (long)p_6[1]) + 384L)));
    result = 3289383752UL;
    v_19 = (unsigned char)v;
  }
  else {
    result = (unsigned long)(- (((double)v + 5328874910.88) / -11571.));
    v_23 = v_23;
    v = (unsigned long)(((-69 << 2) - (int)(~ p_6[0])) + -8900 * (int)((short)(- v_23)));
  }
  while (~ (! (p[0][1][0] / (p[2][1][4] + 22UL))) == (unsigned long)(
                                                     (int)(! p_4) << (
                                                     ((unsigned long)p_6[2] + result) & 15UL)) + 4294913308UL) {
    v_17 = (unsigned long)v_9 / (v % 1331096UL + 840UL);
    v_13 = (unsigned long)((unsigned long long)((805222377UL & p[3][1][1]) - (unsigned long)(! v_17)) & 
                           (unsigned long long)v_19 * 3187539782ULL);
    v_9 = (int)((double)((float)((unsigned long)p_11 * v_13) * (602558016.f - (float)p_6[2])) / (
                p_15 + 147.));
    result = (unsigned long)(! ((long long)(result + 4294967252UL) % -813025540LL));
  }
  while_0_break: ;
  return result;
}


