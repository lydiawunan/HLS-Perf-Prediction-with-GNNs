#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 396184866
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, signed char p_4[2], double p_11, unsigned char p_13,
              long long p_15[5])
{
  int v_25;
  unsigned long v_23;
  unsigned int v_21;
  double v_19;
  unsigned short v_17;
  float v_9;
  float v_7;
  signed char v;
  long long result;
  v_25 = (int)p_13;
  v_23 = 3684187928UL;
  v_21 = (unsigned int)p_4[1];
  v_19 = -8274257447.62;
  v_17 = (unsigned short)p_4[0];
  v_7 = 51.0564498901f;
  v = (signed char)p_13;
  if ((unsigned long long)(- ((unsigned long)(56088 >> (v_23 & 15UL)) & (
                              44932UL + (unsigned long)v_25))) != ! (
      ((unsigned long long)p * 18446744073709532443ULL) * (unsigned long long)(! v_25))) {
    v = (signed char)(! (! ((int)((signed char)p) + (int)p_4[0])));
    result = (long long)((28611U + (unsigned int)p) - (unsigned int)(- v_19)) % (
             100LL * (p_15[2] - (long long)v_7) + 523LL);
    v_9 = (float)((int)(- v_19 / (double)(- v_7 + 545.f)) * 292442396);
  }
  else {
    v_17 = (unsigned short)37166;
    v_9 = (float)(short)-1165;
    result = (long long)v_21;
  }
  if (result + (long long)(((int)((unsigned short)p) - (int)v_17) * (int)-9524697088.f) == (long long)p) 
    result = (long long)((int)((signed char)((float)(-244215158 % ((int)p + 598)) + 
                                             p * 27.f)) / ((int)p_4[1] + 91));
  else {
    v_7 = (float)((double)((-21998L % ((long)v_9 + 790L)) / (1026209915L * (long)8876337152.f + 6L)) / (
                  (p_11 - (double)((long long)p_13 / (p_15[4] + 180LL))) + 510.));
    v = (signed char)((((int)v + (int)((signed char)2.35530110277e+38f)) / (
                       (int)p_4[1] + 959)) % (((int)((unsigned char)v_7) & 85) * 98 + 238));
    result = (long long)(~ v);
  }
  return result;
}


