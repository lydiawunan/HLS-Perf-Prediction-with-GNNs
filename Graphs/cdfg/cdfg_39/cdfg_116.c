#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 556117792
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, unsigned char p_5, unsigned char p_7,
                  unsigned long long p_11, unsigned long p_19)
{
  float v_23;
  unsigned long long v_21;
  char v_17;
  unsigned long v_15;
  unsigned int v_13;
  double v_9;
  float v;
  unsigned char result;
  v_23 = 2.55071786e+37f;
  v_21 = 18446744073709526726ULL;
  v_17 = (char)126;
  v_15 = (unsigned long)p;
  v_13 = (unsigned int)p_5;
  v_9 = 824.597346043;
  v = (float)p_7;
  result = (unsigned char)43;
  if ((3223410527UL | (unsigned long)((int)(~ v_17) ^ (int)((char)v))) < (unsigned long)(
      (double)(v * 1060980416.f) / ((double)result / -625.464724041 + 181.) + (double)(
      v + 388089632.f))) {
    v_9 = (double)p_19;
    v_17 = (char)(p_11 - (unsigned long long)(- ((int)result / -30983)));
    v_13 = (unsigned int)v;
  }
  else {
    result = (unsigned char)((double)((unsigned long)((double)v_23 + v_9) | ~ p_19) + (
                             (double)(- v) - v_9));
    v = (float)p;
    v_17 = (char)((unsigned long long)(! ((int)result << 5UL)) % ((v_21 & (unsigned long long)(
                                                                   (int)p_5 * (int)p_5)) + 2ULL));
  }
  while ((unsigned long long)((float)((234521385LL - (long long)p) * (long long)(
                                      v - (float)p_5)) / ((- v - (float)(~ p_7)) + 282.f)) == 
         (unsigned long long)(-8598055009. * v_9) * 273485983ULL + p_11) {
    v = (float)(21553U / (27395U % (v_13 + 921U) + 77U));
    v_9 = (double)((125265290ULL % (p_11 + 661ULL)) * 18446744073709545127ULL - 44296ULL);
    v = (float)((unsigned long long)v + (unsigned long long)v_17 * (18446744073709532744ULL << (
                                                                    v_15 & 63UL)));
  }
  while_0_break: ;
  return result;
}


