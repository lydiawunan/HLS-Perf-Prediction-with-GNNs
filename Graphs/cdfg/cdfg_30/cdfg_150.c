#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 432775565
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p[4], char p_4[2][4], short p_6,
                long long p_8, unsigned char p_10)
{
  char v_23;
  float v_21;
  unsigned int v_19;
  unsigned short v_17;
  float v_15;
  long long v_13;
  unsigned long long v;
  signed char result;
  v_23 = (char)108;
  v_19 = 3439009471U;
  v_17 = (unsigned short)p_8;
  v = 18446744073709532757ULL;
  if (-4 != (int)v_23) {
    v_15 = (float)(0 - (unsigned long long)(((int)p_6 | (int)p_4[0][0]) / (
                                            (int)p_6 + 897)));
    v_19 = (unsigned int)p_10;
    v_13 = (long long)(- ((int)((unsigned char)(6.86700325006e+37f + (float)v)) - 224));
  }
  else {
    v_21 = (float)(! (short)26845);
    v_13 = (long long)(62 | (int)((char)(- (v_21 + (float)p_8))));
    v_15 = (float)(~ ((unsigned long long)p_4[1][1] | v % (v + 621ULL)));
  }
  if ((unsigned long long)((float)(v + (unsigned long long)(31620LL + v_13)) / (
                           v_15 + 76.f)) == (unsigned long long)((int)v_17 - 868594940) - ! (
                                            62519899ULL * (unsigned long long)v_19)) 
    result = (signed char)(p[0] + (unsigned long long)((int)p_4[1][0] % 209));
  else result = (signed char)(((long long)p_6 | 62017LL) % ((p_8 * (long long)p_10) % 4426732032LL + 447LL));
  return result;
}


