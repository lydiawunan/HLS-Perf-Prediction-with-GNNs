#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 831335105
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p[5][2][1], unsigned long long p_13[1],
                       unsigned char p_15[1], double p_17, unsigned char p_21)
{
  unsigned int v_25;
  char v_23;
  signed char v_19;
  float v_11;
  char v_8;
  unsigned short v_6;
  unsigned long long v_4;
  float v;
  unsigned long long result;
  v_25 = (unsigned int)p_13[0];
  v_19 = (signed char)p_15[0];
  v_11 = (float)p_17;
  v_8 = (char)p_15[0];
  v = -9720456192.f;
  if ((unsigned long long)(~ (~ ((int)p_21 & (int)p[3][1][0]))) < ~ (
      p_13[0] / 90ULL + (unsigned long long)(~ v_25))) {
    v_6 = (unsigned short)((unsigned long long)(- v_11 + (float)p_13[0]) - 
                           (p_13[0] % (unsigned long long)((int)p_15[0] + 180)) * (unsigned long long)(
                           (int)((signed char)p_17) * (int)v_19));
    v_4 = (unsigned long long)((int)v_8 - 8) & ((unsigned long long)p[2][1][0] - 59577ULL) % (
                                               (unsigned long long)v + 884ULL);
    v = (float)((int)((unsigned short)((8141501440.f / ((float)v_4 + 340.f)) / 14734.f)) % (
                (int)(! (! v_6)) + 146));
  }
  else {
    v_23 = (char)((unsigned int)(- (819.452806722 / ((double)p_13[0] + 915.))) - 4294955582U);
    v_19 = (signed char)((long)(! (65123 / ((int)p_21 + 697))) + ~ (-29654L + (long)v_23));
    v = (float)v_19;
  }
  result = (unsigned long long)v;
  return result;
}


