#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 101804017
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p[5], unsigned char p_7, signed char p_9[3][3],
         unsigned short p_11, double p_13)
{
  short v_25;
  unsigned long long v_23;
  unsigned char v_21;
  int v_19;
  unsigned char v_17;
  unsigned long long v_15;
  signed char v_5;
  unsigned char v;
  long result;
  v_23 = 55047ULL;
  v_21 = (unsigned char)227;
  v_19 = 84720659;
  v_17 = (unsigned char)p[3];
  v_15 = (unsigned long long)p[4];
  v_5 = (signed char)p_11;
  while ((31093LL & (long long)(! v_5) % ((p[4] + 145LL) + 171LL)) == (long long)(- (~ v_17))) {
    v_21 = (int)v_21 / ((int)((unsigned char)-872.430114746f) + 985);
    v_25 = (short)(((unsigned long long)(~ v_19) % (18446744073707272605ULL % (unsigned long long)(
                                                    (int)v_5 + 437) + 544ULL)) / (unsigned long long)(
                   (int)p_7 + 30));
    v_19 = (int)(((unsigned long long)(! p_9[0][0]) - v_23) % (unsigned long long)(
                 ((int)v_25 << ((-128 + (int)p_9[0][0]) & 15)) + 402));
    v_17 = (unsigned char)83;
  }
  while_0_break: ;
  if ((unsigned long long)((int)(- p_11) % ((int)((unsigned short)p_13) + 163)) == 
      3455679004ULL / (((unsigned long long)((long long)p_9[2][2] - 6316LL) - 
                        v_15 % (unsigned long long)((int)v_5 + 302)) + 212ULL)) {
    v = p_7;
    v_5 = (signed char)(! (~ (unsigned short)54034));
    result = (long)(((unsigned long long)v ^ 18446744072718770226ULL) - (unsigned long long)(
                    (p[2] + (long long)v_5) / (! p[0] + 55LL)));
  }
  else result = (long)((int)((signed char)3604588032.f) - (int)p_9[0][2]);
  return result;
}


