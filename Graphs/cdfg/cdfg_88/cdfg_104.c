#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 643092362
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p[2], unsigned int p_5,
                       unsigned int p_9[5][1], char p_11, float p_13[5][3])
{
  signed char v_23;
  double v_21;
  unsigned int v_19;
  long v_17;
  unsigned long v_15;
  unsigned short v_7;
  unsigned char v;
  unsigned long long result;
  v_23 = (signed char)-5;
  v_21 = (double)p_13[0][2];
  v_17 = (long)p_9[3][0];
  v_15 = (unsigned long)p_13[1][1];
  v = (unsigned char)44;
  if ((unsigned long long)(((unsigned int)((int)((char)9289173091.24) + (int)p_11) / (
                            ! p_9[2][0] + 353U)) % (unsigned int)(- (
                                                                  (int)((char)v_21) % (
                                                                  (int)p_11 + 612)) + 539)) > 
      ((7561ULL % (p[0] + 356ULL)) / 18446744073088599089ULL) / ((unsigned long long)(- p_13[1][2]) + 251ULL)) {
    v_15 = (unsigned long)(v_17 * (long)((int)((unsigned short)(p_13[0][2] + p_13[3][2])) >> 7));
    v_7 = (unsigned short)(~ ((unsigned long)(p_13[0][2] * p_13[0][1]) - (
                              v_15 + 89UL)));
    v = (unsigned char)(87215438ULL - (unsigned long long)((unsigned long)p_9[2][0] * (
                                                           4294913223UL + (unsigned long)p_11)));
  }
  else {
    v_21 = (double)((v_15 % (unsigned long)(((int)((signed char)p_13[3][1]) - (int)v_23) + 889)) % 716UL);
    v_19 = (unsigned int)v_21;
    v_7 = (unsigned short)(- ((unsigned int)(- v) * (v_19 + 705U)));
  }
  if (158382336LL == (long long)((3574879981U % (unsigned int)((int)v + 318) - 
                                  4294940461U % (p_5 + 13U)) << ((int)(~ v_7) & 31))) 
    result = (unsigned long long)(- 85430656.f);
  else result = 18446744073709514498ULL / (p[1] % 18446744073709500347ULL + 54ULL) + (unsigned long long)9.58047024926e+37;
  return result;
}


